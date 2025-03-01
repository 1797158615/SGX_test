#include "../Include/nsieve-bits.h"
#include "Enclave.h"
#include "Enclave_t.h"


void d_ns(void* _1, void* _2) {
  void* _3;    /* Address-exposed local */
  void* _4;    /* Address-exposed local */
  uint32_t _5;    /* Address-exposed local */
  uint32_t _6;    /* Address-exposed local */
  void* _7;    /* Address-exposed local */
  uint32_t _8;    /* Address-exposed local */
  uint32_t _9;    /* Address-exposed local */
  uint32_t _10;    /* Address-exposed local */
  uint32_t _11;    /* Address-exposed local */
  uint32_t _12;
  void* _13;
  void* _14;
  uint32_t _15;
  uint32_t _16;
  uint32_t _17;
  void* _18;
  uint32_t _19;
  void* _20;
  uint32_t _21;
  uint32_t _22;
  void* _23;
  uint32_t _24;
  uint32_t _25;
  uint32_t _26;
  uint32_t _27;
  uint32_t _28;
  uint32_t _29;
  uint32_t _30;
  uint32_t _31;
  void* _32;
  uint32_t _33;
  uint32_t _34;
  uint32_t _35;
  uint32_t _36;
  void* _37;
  uint32_t _38;
  void* _39;
  uint32_t _40;
  uint32_t _41;
  uint32_t _42;
  uint32_t _43;
  uint32_t _44;
  void* _45;
  uint32_t _46;
  uint32_t _47;
  void* _48;
  uint32_t _49;
  uint32_t _50;
  void* _51;

  _3 = _1;
#line 20 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  _4 = _2;
  ;
#line 23 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  ;
  _6 = 40960000;
#line 24 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  _12 = _6;
  _13 = malloc((llvm_add_u64((((uint64_t)(uint32_t)(llvm_udiv_u32(_12, 8)))), 4)));
  _7 = _13;
#line 25 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _14 = _7;
  if ((_14 != ((void*)/*NULL*/0))) {
    goto _52;
  } else {
    goto _53;
  }

_53:
  goto _54;

_52:
#line 26 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _5 = 0;
  goto _55;

  do {     /* Syntactic loop '' to make GCC happy */
_55:
  _15 = _5;
  if ((((uint32_t)_15) <= ((uint32_t)2u))) {
    goto _56;
  } else {
    goto _57;
  }

_56:
#line 27 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  ;
  ;
  ;
  _10 = 0;
  ;
  _16 = _6;
  _17 = _5;
  _11 = (llvm_lshr_u32(_16, _17));
#line 28 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _18 = _7;
  _19 = _11;
  _20 = memset(_18, 255, (llvm_add_u64((((uint64_t)(uint32_t)(llvm_udiv_u32(_19, 8)))), 4)));
#line 29 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _8 = 2;
  goto _58;

  do {     /* Syntactic loop '' to make GCC happy */
_58:
  _21 = _8;
  _22 = _11;
  if ((((uint32_t)_21) <= ((uint32_t)_22))) {
    goto _59;
  } else {
    goto _60;
  }

_59:
#line 30 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _23 = _7;
  _24 = _8;
  _25 = *(uint32_t*)(((&((uint32_t*)_23)[((int64_t)(llvm_udiv_u64((((uint64_t)(uint32_t)_24)), 32)))])));
  _26 = _8;
  if (((_25 & (1 << (((uint32_t)(llvm_urem_u64((((uint64_t)(uint32_t)_26)), 32)))))) != 0u)) {
    goto _61;
  } else {
    goto _62;
  }

_61:
#line 31 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _27 = _10;
  _10 = (llvm_add_u32(_27, 1));
#line 32 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _28 = _8;
  _29 = _8;
  _9 = (llvm_add_u32(_28, _29));
  goto _63;

  do {     /* Syntactic loop '' to make GCC happy */
_63:
  _30 = _9;
  _31 = _11;
  if ((((uint32_t)_30) <= ((uint32_t)_31))) {
    goto _64;
  } else {
    goto _65;
  }

_64:
#line 33 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _32 = _7;
  _33 = _9;
  _34 = *(uint32_t*)(((&((uint32_t*)_32)[((int64_t)(llvm_udiv_u64((((uint64_t)(uint32_t)_33)), 32)))])));
  _35 = _9;
  if (((_34 & (1 << (((uint32_t)(llvm_urem_u64((((uint64_t)(uint32_t)_35)), 32)))))) != 0u)) {
    goto _66;
  } else {
    goto _67;
  }

_66:
  _36 = _9;
  _37 = _7;
  _38 = _9;
  _39 = ((&((uint32_t*)_37)[((int64_t)(llvm_udiv_u64((((uint64_t)(uint32_t)_38)), 32)))]));
  _40 = *(uint32_t*)_39;
  *(uint32_t*)_39 = (_40 ^ (1 << (((uint32_t)(llvm_urem_u64((((uint64_t)(uint32_t)_36)), 32))))));
  goto _67;

_67:
  goto _68;

_68:
#line 32 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _41 = _8;
  _42 = _9;
  _9 = (llvm_add_u32(_42, _41));
  goto _63;

  } while (1); /* end of syntactic loop '' */
_65:
  goto _62;

_62:
  goto _69;

_69:
#line 29 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _43 = _8;
  _8 = (llvm_add_u32(_43, 1));
  goto _58;

  } while (1); /* end of syntactic loop '' */
_60:
#line 35 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _44 = _11;
  _45 = _3;
  _46 = _5;
  *(uint32_t*)(((&((uint32_t*)_45)[((int64_t)(((uint64_t)(uint32_t)_46)))]))) = _44;
#line 36 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _47 = _10;
  _48 = _4;
  _49 = _5;
  *(uint32_t*)(((&((uint32_t*)_48)[((int64_t)(((uint64_t)(uint32_t)_49)))]))) = _47;
  goto _70;

_70:
#line 26 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _50 = _5;
  _5 = (llvm_add_u32(_50, 1));
  goto _55;

  } while (1); /* end of syntactic loop '' */
_57:
#line 39 "/home/yxk/test-sgx/SGX-test/nsieve-bits/nsieve-bits.c"
  _51 = _7;
  free(_51);
  goto _54;

_54:
  return;
}


