#include "../Include/nsieve-bits.h"
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

  uint32_t _71;    /* Address-exposed local */
  uint64_t _72;    /* Address-exposed local */
  struct l_array_3_uint32_t _73;    /* Address-exposed local */
  struct l_array_3_uint32_t _74;    /* Address-exposed local */
  uint32_t _75;    /* Address-exposed local */
  uint64_t _76;    /* Address-exposed local */
  double _77;    /* Address-exposed local */
  uint64_t _78;
  uint32_t _79;
  uint32_t _80;
  uint32_t _81;
  uint32_t _82;
  uint32_t _83;
  uint32_t _84;
  uint32_t _85;
  uint64_t _86;
  uint64_t _87;
  uint64_t _88;
  double _89;
  uint32_t _90;
  uint32_t _91;

  _71 = 0;
#line 45 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  _78 = clock();
  _72 = _78;
#line 46 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  ;
#line 47 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  d_ns(global_eid, (((&(&_73)->array[((int64_t)0)]))), (((&(&_74)->array[((int64_t)0)]))));
#line 48 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  _75 = 0;
  goto _92;

  do {     /* Syntactic loop '' to make GCC happy */
_92:
  _79 = _75;
  if ((((int32_t)_79) < ((int32_t)3u))) {
    goto _93;
  } else {
    goto _94;
  }

_93:
#line 49 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _80 = _75;
  _81 = *(uint32_t*)(((&(&_73)->array[((int64_t)(((int64_t)(int32_t)_80)))])));
  _82 = _75;
  _83 = *(uint32_t*)(((&(&_74)->array[((int64_t)(((int64_t)(int32_t)_82)))])));
  _84 = printf((&_OC_str_OC_4), _81, _83);
  goto _95;

_95:
#line 48 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _85 = _75;
  _75 = (llvm_add_u32(_85, 1));
  goto _92;

  } while (1); /* end of syntactic loop '' */
_94:
#line 52 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  _86 = clock();
  _76 = _86;
#line 53 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  _87 = _76;
  _88 = _72;
  _77 = (((((double)(int64_t)(llvm_sub_u64(_87, _88)))) / 1.0E+6) * 1000);
#line 54 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _89 = _77;
  _90 = printf((&_OC_str_OC_5), _89);
#line 55 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _91 = printf((&_OC_str_OC_6));

  sgx_destroy_enclave(global_eid);
  return 0;
}

