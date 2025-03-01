#include "../Include/spectral-norm.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}
int main(int argc, char ** argv) {

  if(initialize_enclave() < 0){
    return -1;
  }

  uint32_t _155 = (uint32_t)argc;
  void* _156 = (void*)argv;
  uint32_t _157;    /* Address-exposed local */
  uint32_t _158;    /* Address-exposed local */
  void* _159;    /* Address-exposed local */
  uint64_t _160;    /* Address-exposed local */
  uint32_t _161;    /* Address-exposed local */
  double _162;    /* Address-exposed local */
  uint64_t _163;    /* Address-exposed local */
  double _164;    /* Address-exposed local */
  uint64_t _165;
  uint32_t _166;
  void* _167;
  void* _168;
  uint32_t _169;
  uint32_t _170;
  uint32_t _170__PHI_TEMPORARY;
  double _171;
  uint32_t _172;
  uint64_t _173;
  uint64_t _174;
  uint64_t _175;
  double _176;
  uint32_t _177;
  uint32_t _178;

  _157 = 0;
  _158 = _155;
#line 65 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _159 = _156;
  ;
#line 67 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _165 = clock();
  _160 = _165;
#line 68 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _166 = _158;
  if ((_166 == 2u)) {
    goto _179;
  } else {
    goto _180;
  }

_179:
  _167 = _159;
  _168 = *(void**)(((&((void**)_167)[((int64_t)1)])));
  _169 = atoi(_168);
  _170__PHI_TEMPORARY = _169;   /* for PHI node */
  goto _181;

_180:
  _170__PHI_TEMPORARY = 2000;   /* for PHI node */
  goto _181;

_181:
  _170 = _170__PHI_TEMPORARY;
  _161 = _170;
#line 69 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
#line 70 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  d_sp(global_eid, (&_161), (&_162));
#line 71 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _171 = _162;
  _172 = printf((&_OC_str_OC_4), _171);
#line 72 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _173 = clock();
  _163 = _173;
#line 73 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _174 = _163;
  _175 = _160;
  _164 = (((((double)(int64_t)(llvm_sub_u64(_174, _175)))) / 1.0E+6) * 1000);
#line 74 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _176 = _164;
  _177 = printf((&_OC_str_OC_5), _176);
#line 75 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _178 = printf((&_OC_str_OC_6));

  sgx_destroy_enclave(global_eid);
  return 0;
}

