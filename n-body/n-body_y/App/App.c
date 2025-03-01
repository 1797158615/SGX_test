#include "../Include/n-body.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}

int main(int argc, char ** argv){
  clock_t start_time = clock();
    if(initialize_enclave() < 0){
    return -1;
  }
  double f1, f2;
  d_n(global_eid,&f1, &f2);
  printf ("%.9f\n", f1);
  printf ("%.9f\n", f2);
  sgx_destroy_enclave(global_eid);
  clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
  return 0;
}


