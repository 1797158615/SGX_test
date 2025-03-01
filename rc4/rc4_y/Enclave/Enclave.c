#include "../Include/rc4.h"
#include "Enclave.h"
#include "Enclave_t.h"

    
__attribute__((__annotate__("SGX")))
void rc4_setup( struct rc4_state *s, unsigned char *key,  int length )
{
    int i, j, k, *m, a;

    s->x = 0;
    s->y = 0;
    m = s->m;

    for( i = 0; i < 256; i++ )
    {
        m[i] = i;
    }

    j = k = 0;

    for( i = 0; i < 256; i++ )
    {
        a = m[i];
        j = (unsigned char) ( j + a + key[k] );
        m[i] = m[j]; m[j] = a;
        if( ++k >= length ) k = 0;
    }
}

__attribute__((__annotate__("SGX")))
void rc4_crypt( struct rc4_state *s, unsigned char *data, int length )
{ 
    int i, x, y, *m, a, b;

    x = s->x;
    y = s->y;
    m = s->m;

    for( i = 0; i < length; i++ )
    {
        x = (unsigned char) ( x + 1 ); a = m[x];
        y = (unsigned char) ( y + a );
        m[x] = b = m[y];
        m[y] = a;
        data[i] ^= m[(unsigned char) ( a + b )];
    }

    s->x = x;
    s->y = y;
}



__attribute__((__annotate__("SGX"), __annotate__("memsize(4, 4, 4)"), __annotate__("TAFUN")))
void d_rc4( int *countp, int *index, int *ip )
{
    int j, i = *ip;
    struct rc4_state s;
    unsigned char buffer[30];
  
    int count = *countp;

    


        

        for( j = 0; j < count; j++ ) 
        {
        
        memcpy( buffer, data[i], data_len[i] );
        
        rc4_setup( &s, &keys[i][1], keys[i][0] );
        rc4_crypt( &s, buffer, data_len[i] );
        
        }

        if( memcmp( buffer, output[i], data_len[i] ) )
        {
        *index = 0;
        return;
        }

        *index = 1;
    

    

    

    return;
}
