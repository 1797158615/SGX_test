#include "../Include/des.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}



  int main (int argc, char **argv){
    int NumDelay, m, n;
    int index = 0;
    if (argc == 2) NumDelay = atoi(argv[1]);
clock_t start_time = clock();

  if(initialize_enclave() < 0){
    return -1;
  }
    for( m = 0; m < 2; m++ )
    {
        printf( "\n Triple-DES Monte Carlo Test (ECB mode) - " );

        if( m == 0 ) printf( "encryption\n\n" );
        if( m == 1 ) printf( "decryption\n\n" );

        for( n = 0; n < 3; n++ )
        {
            printf( " Test %d, key size = %3d bits: ",
                    n + 1, 64 + n * 64 );
            d_des(global_eid, &m, &NumDelay, &index, &n);
            if(index == 0){
                printf( "failed!\n" );
            }else {
                 printf( "passed.\n" );
            }
        }
    }
    printf( "\n" );
    sgx_destroy_enclave(global_eid);
    clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
    return 0;
}

  

