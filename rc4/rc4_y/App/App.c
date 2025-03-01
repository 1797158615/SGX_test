#include "../Include/rc4.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}

int main( int argc, const char **argv )
{
    int index = 0;
    clock_t start_time = clock();
      if(initialize_enclave() < 0){
    return -1;
  }
    int count = 200000;
    if (argc == 2) count = atoi(argv[1]); 
    printf( "\n RC4 Validation Tests:\n\n" );
    for(int i = 0; i < 6; i++) {
        printf( " Test %d ", i + 1 );
        d_rc4(global_eid,&count, &index, &i);
        if(index == 0) {
            printf( "failed!\n" );
        } else {
            printf( "passed.\n" );
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


