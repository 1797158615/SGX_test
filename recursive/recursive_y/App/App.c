#include "../Include/recursive.h"
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
  int n = 10;
  int mi[3];
  double md[2];
  d_re(global_eid,mi, md);
  printf("Ack(3,%d): %d\n", n + 1, mi[0]);
  printf("Fib(%.1f): %.1f\n", 28.0 + n, md[0]);
  printf("Tak(%d,%d,%d): %d\n", 3 * n, 2 * n, n, mi[1]);
  printf("Fib(3): %d\n", mi[2]);
  printf("Tak(3.0,2.0,1.0): %.1f\n", md[1]);

 sgx_destroy_enclave(global_eid);
  clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
  return 0;
}

