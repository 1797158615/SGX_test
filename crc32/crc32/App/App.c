#include "../Include/crc32.h"
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

  uint32_t _105 = (uint32_t)argc;
  void* _106 = (void*)argv;
  uint32_t _107;    /* Address-exposed local */
  uint32_t _108;    /* Address-exposed local */
  void* _109;    /* Address-exposed local */
  uint32_t _110;    /* Address-exposed local */
  uint64_t _111;    /* Address-exposed local */
  uint64_t _112;    /* Address-exposed local */
  uint64_t _113;    /* Address-exposed local */
  double _114;    /* Address-exposed local */
  uint32_t _115;
  uint32_t _116;
  void* _117;
  void* _118;
  uint32_t _119;
  uint64_t _120;
  uint32_t _121;
  uint32_t _122;
  uint64_t _123;
  uint32_t _124;
  uint64_t _125;
  uint64_t _126;
  uint64_t _127;
  double _128;
  uint32_t _129;
  uint32_t _130;

  _107 = 0;
  _108 = _105;
#line 207 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _109 = _106;
  ;
#line 209 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 210 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 211 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _115 = _108;
  if ((_115 != 2u)) {
    goto _131;
  } else {
    goto _132;
  }

_131:
#line 213 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _116 = printf((&_OC_str_OC_4));
#line 214 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  exit(0);
  __builtin_unreachable();

_132:
#line 217 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _117 = _109;
  _118 = *(void**)(((&((void**)_117)[((int64_t)1)])));
  _119 = atoi(_118);
  _110 = _119;
  goto _133;

_133:
#line 219 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _120 = clock();
  _112 = _120;
#line 220 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  d_crc32(global_eid, (&_110), (&_111));
#line 221 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _121 = _110;
  _122 = printf((&_OC_str_OC_5), _121);
#line 222 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _123 = _111;
  _124 = printf((&_OC_str_OC_6), (((uint32_t)_123)));
#line 224 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _125 = clock();
  _113 = _125;
#line 225 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _126 = _113;
  _127 = _112;
  _114 = (((((double)(int64_t)(llvm_sub_u64(_126, _127)))) / 1.0E+6) * 1000);
#line 226 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _128 = _114;
  _129 = printf((&_OC_str_OC_7), _128);
#line 227 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _130 = printf((&_OC_str_OC_8));

  sgx_destroy_enclave(global_eid);
  return 0;
}

