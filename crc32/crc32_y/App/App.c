#include "../Include/crc32.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}

int main (int argc, char **argv)
{
  int numpackets;
  unsigned long crc_accum;
  if (argc != 2)
    {
      printf ("Usage: crc #numpackets\n");
      exit (0);
    }
  else 
    numpackets = atoi (argv[1]);
  if(initialize_enclave() < 0){
    return -1;
  }
  clock_t start_time = clock();
  d_crc32(global_eid,&numpackets, &crc_accum);
  printf ("CRC completed for %d packets \n", numpackets);
  printf ("crc_accum is %u\n", (unsigned) crc_accum);
  sgx_destroy_enclave(global_eid);
  clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
  return 0;
}



