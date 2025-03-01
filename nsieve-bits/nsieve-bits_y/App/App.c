#include "../Include/nsieve-bits.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}


int main(){
  clock_t start_time = clock();
    if(initialize_enclave() < 0){
    return -1;
  }
  unsigned int mn[3], mc[3];
  d_ns(global_eid,mn,mc);
  for(int i = 0; i < 3; i++){
    printf("Primes up to %8d %8d\n", mn[i], mc[i]);
  }
    sgx_destroy_enclave(global_eid);
  clock_t end_time = clock();
    double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
    printf("use time: %.3f ms\n", time_taken_ms);
    printf("**********************************************\n");
  return 0;
}


