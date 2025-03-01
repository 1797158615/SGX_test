#include "../Include/pc1cod.h"
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

  uint32_t _189 = (uint32_t)argc;
  void* _190 = (void*)argv;
  uint32_t _191;    /* Address-exposed local */
  uint32_t _192;    /* Address-exposed local */
  void* _193;    /* Address-exposed local */
  uint64_t _194;    /* Address-exposed local */
  uint32_t _195;    /* Address-exposed local */
  uint64_t _196;    /* Address-exposed local */
  double _197;    /* Address-exposed local */
  uint64_t _198;
  uint32_t _199;
  void* _200;
  void* _201;
  uint32_t _202;
  uint32_t _203;
  uint64_t _204;
  uint64_t _205;
  uint64_t _206;
  double _207;
  uint32_t _208;
  uint32_t _209;

  _191 = 0;
  _192 = _189;
#line 336 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _193 = _190;
  ;
#line 337 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _198 = clock();
  _194 = _198;
#line 338 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _195 = 20000;
#line 339 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _199 = _192;
  if ((_199 == 2u)) {
    goto _210;
  } else {
    goto _211;
  }

_210:
  _200 = _193;
  _201 = *(void**)(((&((void**)_200)[((int64_t)1)])));
  _202 = atoi(_201);
  _195 = _202;
  goto _211;

_211:
#line 340 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _203 = printf((&_OC_str_OC_5));
#line 341 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  d_pc1(global_eid, (&_195));
#line 342 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _204 = clock();
  _196 = _204;
#line 343 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _205 = _196;
  _206 = _194;
  _197 = (((((double)(int64_t)(llvm_sub_u64(_205, _206)))) / 1.0E+6) * 1000);
#line 344 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _207 = _197;
  _208 = printf((&_OC_str_OC_6), _207);
#line 345 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _209 = printf((&_OC_str_OC_7));

  sgx_destroy_enclave(global_eid);
  return 0;
}

