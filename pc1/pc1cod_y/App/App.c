#include "../Include/pc1cod.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}


int main(int argc, const char **argv){
  clock_t start_time = clock();
    if(initialize_enclave() < 0){
    return -1;
  }
  int NumInput = 20000;
  if (argc == 2) NumInput = atoi(argv[1]);
  printf("PC1 Cipher 256 bits \nENCRYPT file IN.BIN to OUT.BIN\n");
  d_pc1(global_eid,&NumInput);
    sgx_destroy_enclave(global_eid);
  clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
  return (0);
}


