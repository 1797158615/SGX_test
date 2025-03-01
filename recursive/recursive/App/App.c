#include "../Include/recursive.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}
int main(void) {

  if(initialize_enclave() < 0){
    return -1;
  }

  uint32_t _121;    /* Address-exposed local */
  uint64_t _122;    /* Address-exposed local */
  uint32_t _123;    /* Address-exposed local */
  struct l_array_3_uint32_t _124;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_2_double _125 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _126;    /* Address-exposed local */
  double _127;    /* Address-exposed local */
  uint64_t _128;
  uint32_t _129;
  uint32_t _130;
  uint32_t _131;
  uint32_t _132;
  double _133;
  uint32_t _134;
  uint32_t _135;
  uint32_t _136;
  uint32_t _137;
  uint32_t _138;
  uint32_t _139;
  uint32_t _140;
  uint32_t _141;
  double _142;
  uint32_t _143;
  uint64_t _144;
  uint64_t _145;
  uint64_t _146;
  double _147;
  uint32_t _148;
  uint32_t _149;

  _121 = 0;
#line 66 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _128 = clock();
  _122 = _128;
#line 67 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _123 = 10;
#line 68 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
#line 69 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
#line 70 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  d_re(global_eid, (((&(&_124)->array[((int64_t)0)]))), (((&(&_125)->array[((int64_t)0)]))));
#line 71 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _129 = _123;
  _130 = *(uint32_t*)(((&(&_124)->array[((int64_t)0)])));
  _131 = printf((&_OC_str_OC_4), (llvm_add_u32(_129, 1)), _130);
#line 72 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _132 = _123;
  _133 = *(double*)(((&(&_125)->array[((int64_t)0)])));
  _134 = printf((&_OC_str_OC_5), (28 + (((double)(int32_t)_132))), _133);
#line 73 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _135 = _123;
  _136 = _123;
  _137 = _123;
  _138 = *(uint32_t*)(((&(&_124)->array[((int64_t)1)])));
  _139 = printf((&_OC_str_OC_6), (llvm_mul_u32(3, _135)), (llvm_mul_u32(2, _136)), _137, _138);
#line 74 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _140 = *(uint32_t*)(((&(&_124)->array[((int64_t)2)])));
  _141 = printf((&_OC_str_OC_7), _140);
#line 75 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _142 = *(double*)(((&(&_125)->array[((int64_t)1)])));
  _143 = printf((&_OC_str_OC_8), _142);
#line 77 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _144 = clock();
  _126 = _144;
#line 78 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _145 = _126;
  _146 = _122;
  _127 = (((((double)(int64_t)(llvm_sub_u64(_145, _146)))) / 1.0E+6) * 1000);
#line 79 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _147 = _127;
  _148 = printf((&_OC_str_OC_9), _147);
#line 80 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _149 = printf((&_OC_str_OC_10));

  sgx_destroy_enclave(global_eid);
  return 0;
}

