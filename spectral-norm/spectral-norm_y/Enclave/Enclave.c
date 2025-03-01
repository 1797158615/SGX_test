#include "../Include/spectral-norm.h"
#include "Enclave.h"
#include "Enclave_t.h"


__attribute__((__annotate__("SGX")))
double eval_A(int i, int j) { return 1.0/((i+j)*(i+j+1)/2+i+1); }

__attribute__((__annotate__("SGX")))
void eval_A_times_u(int N, const double u[], double Au[])
{
  int i,j;
  for(i=0;i<N;i++)
    {
      Au[i]=0;
      for(j=0;j<N;j++) Au[i]+=eval_A(i,j)*u[j];
    }
}

__attribute__((__annotate__("SGX")))
void eval_At_times_u(int N, const double u[], double Au[])
{
  int i,j;
  for(i=0;i<N;i++)
    {
      Au[i]=0;
      for(j=0;j<N;j++) Au[i]+=eval_A(j,i)*u[j];
    }
}

__attribute__((__annotate__("SGX")))
void eval_AtA_times_u(int N, const double u[], double AtAu[])
{ double v[N]; eval_A_times_u(N,u,v); eval_At_times_u(N,v,AtAu); }

__attribute__((__annotate__("SGX"), __annotate__("memsize(4, 8)"), __annotate__("TAFUN")))
void d_sp(int *Np, double *d)
{
  

  int i;
  int N = *Np;
  double u[N],v[N],vBv,vv;
  for(i=0;i<N;i++) u[i]=1;
  for(i=0;i<10;i++)
    {
      eval_AtA_times_u(N,u,v);
      eval_AtA_times_u(N,v,u);
    }
  vBv=vv=0;
  for(i=0;i<N;i++) { vBv+=u[i]*v[i]; vv+=v[i]*v[i]; }
  *d = sqrt(vBv/vv);

  
  return;
}

