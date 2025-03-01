#include "../Include/matrix.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}



  
int main(int argc, char *argv[]) {
    clock_t start_time = clock();
    if(initialize_enclave() < 0){
    return -1;
  }
    #define LENGTH 300000
    int n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    int mv[4];
    d_ma(global_eid,mv, &n);
    printf("%d %d %d %d\n", mv[0], mv[1], mv[2], mv[3]);

    sgx_destroy_enclave(global_eid);
    clock_t end_time = clock();
    double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
    printf("use time: %.3f ms\n", time_taken_ms);
    printf("**********************************************\n");
    return 0;
}


