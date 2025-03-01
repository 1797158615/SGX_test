#include "../Include/md5.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}


int main( int argc, char *argv[] )
{
    int repeat = 1;
    if (argc == 2) repeat = atoi(argv[1]);
    unsigned char md5sum[16];

    clock_t start_time = clock();
      if(initialize_enclave() < 0){
    return -1;
  }
    for (; repeat; --repeat) {
    d_md5(global_eid,&repeat, md5sum);
    for(int j = 0; j < 16; j++ )
        {
            printf( "%02x", md5sum[j] );
        }
        printf( "\n" );
    }

    sgx_destroy_enclave(global_eid);
    clock_t end_time = clock();
    double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
    printf("use time: %.3f ms\n", time_taken_ms);
    printf("**********************************************\n");
    return 0;
}
  

