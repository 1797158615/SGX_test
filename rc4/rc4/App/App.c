#include "../Include/rc4.h"
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

  uint32_t _141 = (uint32_t)argc;
  void* _142 = (void*)argv;
  uint32_t _143;    /* Address-exposed local */
  uint32_t _144;    /* Address-exposed local */
  void* _145;    /* Address-exposed local */
  uint32_t _146;    /* Address-exposed local */
  uint64_t _147;    /* Address-exposed local */
  uint32_t _148;    /* Address-exposed local */
  uint32_t _149;    /* Address-exposed local */
  uint64_t _150;    /* Address-exposed local */
  double _151;    /* Address-exposed local */
  uint64_t _152;
  uint32_t _153;
  void* _154;
  void* _155;
  uint32_t _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t _159;
  uint32_t _160;
  uint32_t _161;
  uint32_t _162;
  uint32_t _163;
  uint32_t _164;
  uint32_t _165;
  uint64_t _166;
  uint64_t _167;
  uint64_t _168;
  double _169;
  uint32_t _170;
  uint32_t _171;

  _143 = 0;
  _144 = _141;
#line 160 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _145 = _142;
  ;
#line 162 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _146 = 0;
#line 163 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _152 = clock();
  _147 = _152;
#line 164 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _148 = 200000;
#line 165 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _153 = _144;
  if ((_153 == 2u)) {
    goto _172;
  } else {
    goto _173;
  }

_172:
  _154 = _145;
  _155 = *(void**)(((&((void**)_154)[((int64_t)1)])));
  _156 = atoi(_155);
  _148 = _156;
  goto _173;

_173:
#line 166 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _157 = printf((&_OC_str_OC_4));
#line 167 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _149 = 0;
  goto _174;

  do {     /* Syntactic loop '' to make GCC happy */
_174:
  _158 = _149;
  if ((((int32_t)_158) < ((int32_t)6u))) {
    goto _175;
  } else {
    goto _176;
  }

_175:
#line 168 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _159 = _149;
  _160 = printf((&_OC_str_OC_5), (llvm_add_u32(_159, 1)));
#line 169 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  d_rc4(global_eid, (&_148), (&_146), (&_149));
#line 170 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _161 = _146;
  if ((_161 == 0u)) {
    goto _177;
  } else {
    goto _178;
  }

_178:
#line 173 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _163 = printf((&_OC_str_OC_7));
  goto _179;

_177:
#line 171 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _162 = printf((&_OC_str_OC_6));
  goto _179;

_179:
  goto _180;

_180:
#line 167 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _164 = _149;
  _149 = (llvm_add_u32(_164, 1));
  goto _174;

  } while (1); /* end of syntactic loop '' */
_176:
#line 176 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _165 = printf((&_OC_str_OC_8));
#line 177 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _166 = clock();
  _150 = _166;
#line 178 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _167 = _150;
  _168 = _147;
  _151 = (((((double)(int64_t)(llvm_sub_u64(_167, _168)))) / 1.0E+6) * 1000);
#line 179 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _169 = _151;
  _170 = printf((&_OC_str_OC_9), _169);
#line 180 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _171 = printf((&_OC_str_OC_10));

  sgx_destroy_enclave(global_eid);
  return 0;
}

