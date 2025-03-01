#include "../Include/almabench.h"
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

    
    double position[8][3];
    bool   ga_testing = false;
    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            if (!strcmp(argv[1],"-ga"))
            {
                ga_testing = true;
                break;
            }
        }
    }
    
    d_al(global_eid, (double *)position);
    for (int p = 0; p < 8; ++p)
      printf("%f %f %f\n", position[p][0], position[p][1], position[p][2]);
    
    
    sgx_destroy_enclave(global_eid);
    clock_t end_time = clock();
    double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
    printf("use time: %.3f ms\n", time_taken_ms);
    printf("**********************************************\n");
    
    
    return 0;
}

