#include "../Include/almabench.h"
#include "Enclave.h"
#include "Enclave_t.h"

// Normalize angle into the range -pi <= A < +pi.
__attribute__((__annotate__("SGX")))
double anpm (double a)
{
    double w = fmod(a,TWOPI);
    
    if (fabs(w) >= PI) 
        w = w - ((a < 0) ? -TWOPI : TWOPI);
        
    return w;
}

//---------------------------------------------------------------------------    
// The reference frame is equatorial and is with respect to the
//    mean equator and equinox of epoch j2000.
__attribute__((__annotate__("SGX")))
void planetpv (double epoch[2], int np, double pv[2][3])
{
    // working storage
    int i, j, k;
    double t, da, dl, de, dp, di, doh, dmu, arga, argl, am;
    double ae, dae, ae2, at, r, v, si2, xq, xp, tl, xsw;
    double xcw, xm2, xf, ci2, xms, xmc, xpxq2, x, y, z;

    // time: julian millennia since j2000.
    t = ((epoch[0] - J2000) + epoch[1]) / JMILLENIA;

    // compute the mean elements.
    da  = a[np][0] + (a[np][1] + a[np][2] * t ) * t;
    dl  = (3600.0 * dlm[np][0] + (dlm[np][1] + dlm[np][2] * t ) * t ) * A2R;
    de  = e[np][0] + (e[np][1] + e[np][2] * t ) * t;
    dp  = anpm((3600.0 * pi[np][0] + (pi[np][1] + pi[np][2] * t ) * t ) * A2R );
    di  = (3600.0 * dinc[np][0] + (dinc[np][1] + dinc[np][2] * t ) * t ) * A2R;
    doh = anpm((3600.0 * omega[np][0] + (omega[np][1] + omega[np][2] * t ) * t ) * A2R );
    
    // apply the trigonometric terms.
    dmu = 0.35953620 * t;
    
    for (k = 0; k < 8; ++k)
    {
        arga = kp[np][k] * dmu;
        argl = kq[np][k] * dmu;
        da   = da + (ca[np][k] * cos(arga) + sa[np][k] * sin(arga)) * 0.0000001;
        dl   = dl + (cl[np][k] * cos(argl) + sl[np][k] * sin(argl)) * 0.0000001;
    }

    arga = kp[np][8] * dmu;
    da   = da + t * (ca[np][8] * cos(arga) + sa[np][8] * sin(arga)) * 0.0000001;

    for (k = 8; k <= 9; ++k)
    {
        argl = kq[np][k] * dmu;
        dl   = dl + t * ( cl[np][k] * cos(argl) + sl[np][k] * sin(argl) ) * 0.0000001;
    }

    dl = fmod(dl,TWOPI);

    // iterative solution of kepler's equation to get eccentric anomaly.
    am = dl - dp;
    ae = am + de * sin(am);
    k  = 0;

    while (1)
    {
        dae = (am - ae + de * sin(ae)) / (1.0 - de * cos(ae));
        ae  = ae + dae;
        k   = k + 1;
    
        if ((k >= 10) || (fabs(dae) < 1e-12))
            break;
    }

    // true anomaly.
    ae2 = ae / 2.0;
    at  = 2.0 * atan2(sqrt((1.0 + de)/(1.0 - de)) * sin(ae2), cos(ae2));

    // distance (au) and speed (radians per day).
    r = da * (1.0 - de * cos(ae));
    v = GAUSSK * sqrt((1.0 + 1.0 / amas[np] ) / (da * da * da));

    si2   = sin(di / 2.0);
    xq    = si2 * cos(doh);
    xp    = si2 * sin(doh);
    tl    = at + dp;
    xsw   = sin(tl);
    xcw   = cos(tl);
    xm2   = 2.0 * (xp * xcw - xq * xsw );
    xf    = da / sqrt(1.0 - de*de);
    ci2   = cos(di / 2.0);
    xms   = (de * sin(dp) + xsw) * xf;
    xmc   = (de * cos(dp) + xcw) * xf;
    xpxq2 = 2.0 * xp * xq;

    // position (j2000 ecliptic x,y,z in au).
    x = r * (xcw - xm2 * xp);
    y = r * (xsw + xm2 * xq);
    z = r * (-xm2 * ci2);

    // rotate to equatorial.
    pv[0][0] = x;
    pv[0][1] = y * coseps - z * sineps;
    pv[0][2] = y * sineps + z * coseps;

    // velocity (j2000 ecliptic xdot,ydot,zdot in au/d).
    x = v * ((-1.0 + 2.0 * xp * xp) * xms + xpxq2 * xmc);
    y = v * (( 1.0 - 2.0 * xq * xq ) * xmc - xpxq2 * xms);
    z = v * (2.0 * ci2 * (xp * xms + xq * xmc));

    // rotate to equatorial.
    pv[1][0] = x;
    pv[1][1] = y * coseps - z * sineps;
    pv[1][2] = y * sineps + z * coseps;
}

//---------------------------------------------------------------------------
// Computes RA, Declination, and distance from a state vector returned by
// planetpv.
void radecdist(double state[2][3], double rdd[3])
{
    // distance
    rdd[2] = sqrt(state[0][0] * state[0][0] + state[0][1] * state[0][1] + state[0][2] * state[0][2]);

    // RA
    rdd[0] = atan2(state[0][1], state[0][0]) * R2H;
    if (rdd[0] < 0.0) rdd[0] += 24.0;

    // Declination
    rdd[1] = asin(state[0][2] / rdd[2]) * R2D;
}

//---------------------------------------------------------------------------
// Entry point
// Calculate RA and Dec for noon on every day in 1900-2100
void d_al(double *position)
{
 
    // double position[8][3];
    // for(int j = 0; j < 8; j++) {
    //     position[j][0] = *(positionp+j*3+0);
    //     position[j][1] = *(positionp+j*3+1);
    //     position[j][2] = *(positionp+j*3+2);
    // }
    int i, n, p;
    double jd[2];
    double pv[2][3];

    
    
    // do we have verbose output?
    
    // get starting time    
    
    // main loop
    for (i = 0; i < TEST_LOOPS; ++i)
    {
        jd[0] = J2000;
        jd[1] = 0.0;

        for (n = 0; n < TEST_LENGTH; ++n)
        {
            jd[0] += 1.0;
            
            for (p = 0; p < 8; ++p)
            {
                planetpv(jd,p,pv);
                radecdist(pv,position + p * 3);
            }
        }
    }

    

  
    // get final time

    // report runtime
    
    // fflush(stdout);
    
    
    return;
}