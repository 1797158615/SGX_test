#include "../Include/matrix.h"
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

  uint32_t _168 = (uint32_t)argc;
  void* _169 = (void*)argv;
  uint32_t _170;    /* Address-exposed local */
  uint32_t _171;    /* Address-exposed local */
  void* _172;    /* Address-exposed local */
  uint64_t _173;    /* Address-exposed local */
  uint32_t _174;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_4_uint32_t _175 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _176;    /* Address-exposed local */
  double _177;    /* Address-exposed local */
  uint64_t _178;
  uint32_t _179;
  void* _180;
  void* _181;
  uint32_t _182;
  uint32_t _183;
  uint32_t _183__PHI_TEMPORARY;
  uint32_t _184;
  uint32_t _185;
  uint32_t _186;
  uint32_t _187;
  uint32_t _188;
  uint64_t _189;
  uint64_t _190;
  uint64_t _191;
  double _192;
  uint32_t _193;
  uint32_t _194;

  _170 = 0;
  _171 = _168;
#line 82 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _172 = _169;
  ;
#line 83 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _178 = clock();
  _173 = _178;
#line 85 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _179 = _171;
  if ((_179 == 2u)) {
    goto _195;
  } else {
    goto _196;
  }

_195:
  _180 = _172;
  _181 = *(void**)(((&((void**)_180)[((int64_t)1)])));
  _182 = atoi(_181);
  _183__PHI_TEMPORARY = _182;   /* for PHI node */
  goto _197;

_196:
  _183__PHI_TEMPORARY = 300000;   /* for PHI node */
  goto _197;

_197:
  _183 = _183__PHI_TEMPORARY;
  _174 = _183;
#line 86 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
#line 87 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  d_ma(global_eid, (((&(&_175)->array[((int64_t)0)]))), (&_174));
#line 88 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _184 = *(uint32_t*)(((&(&_175)->array[((int64_t)0)])));
  _185 = *(uint32_t*)(((&(&_175)->array[((int64_t)1)])));
  _186 = *(uint32_t*)(((&(&_175)->array[((int64_t)2)])));
  _187 = *(uint32_t*)(((&(&_175)->array[((int64_t)3)])));
  _188 = printf((&_OC_str_OC_4), _184, _185, _186, _187);
#line 90 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _189 = clock();
  _176 = _189;
#line 91 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _190 = _176;
  _191 = _173;
  _177 = (((((double)(int64_t)(llvm_sub_u64(_190, _191)))) / 1.0E+6) * 1000);
#line 92 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _192 = _177;
  _193 = printf((&_OC_str_OC_5), _192);
#line 93 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _194 = printf((&_OC_str_OC_6));

  sgx_destroy_enclave(global_eid);
  return 0;
}

