#include "../Include/recursive.h"
#include "Enclave.h"
#include "Enclave_t.h"


uint32_t ack(uint32_t _1, uint32_t _2) {
  uint32_t _3;    /* Address-exposed local */
  uint32_t _4;    /* Address-exposed local */
  uint32_t _5;    /* Address-exposed local */
  uint32_t _6;
  uint32_t _7;
  uint32_t _8;
  uint32_t _9;
  uint32_t _10;
  uint32_t _11;
  uint32_t _12;
  uint32_t _13;
  uint32_t _14;
  uint32_t _14__PHI_TEMPORARY;
  uint32_t _15;
  uint32_t _16;

  _4 = _1;
#line 12 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _5 = _2;
  ;
#line 13 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _6 = _4;
  if ((_6 == 0u)) {
    goto _17;
  } else {
    goto _18;
  }

_17:
#line 14 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _7 = _5;
  _3 = (llvm_add_u32(_7, 1));
  goto _19;

_18:
#line 17 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _8 = _4;
  _9 = llvm_sub_u32(_8, 1);
  _10 = _5;
  if (((_10 | 0) != 0u)) {
    goto _20;
  } else {
    goto _21;
  }

_20:
  _11 = _4;
  _12 = _5;
  _13 = ack(_11, (llvm_sub_u32(_12, 1)));
  _14__PHI_TEMPORARY = _13;   /* for PHI node */
  goto _22;

_21:
  _14__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _22;

_22:
  _14 = _14__PHI_TEMPORARY;
  _15 = ack(_9, _14);
  _3 = _15;
  goto _19;

_19:
#line 18 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _16 = _3;
  return _16;
}


uint32_t fib(uint32_t _23) {
  uint32_t _24;    /* Address-exposed local */
  uint32_t _25;    /* Address-exposed local */
  uint32_t _26;
  uint32_t _27;
  uint32_t _28;
  uint32_t _29;
  uint32_t _30;
  uint32_t _31;

  _25 = _23;
#line 21 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
#line 22 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _26 = _25;
  if ((((int32_t)_26) < ((int32_t)2u))) {
    goto _32;
  } else {
    goto _33;
  }

_32:
#line 23 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _24 = 1;
  goto _34;

_33:
#line 25 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _27 = _25;
  _28 = fib((llvm_sub_u32(_27, 2)));
  _29 = _25;
  _30 = fib((llvm_sub_u32(_29, 1)));
  _24 = (llvm_add_u32(_28, _30));
  goto _34;

_34:
#line 26 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _31 = _24;
  return _31;
}


double fibFP(double _35) {
  double _36;    /* Address-exposed local */
  double _37;    /* Address-exposed local */
  double _38;
  double _39;
  double _40;
  double _41;
  double _42;
  double _43;

  _37 = _35;
#line 29 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
#line 30 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _38 = _37;
  if ((llvm_fcmp_olt(_38, 2))) {
    goto _44;
  } else {
    goto _45;
  }

_44:
#line 31 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _36 = 1;
  goto _46;

_45:
#line 33 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _39 = _37;
  _40 = fibFP((_39 - 2));
  _41 = _37;
  _42 = fibFP((_41 - 1));
  _36 = (_40 + _42);
  goto _46;

_46:
#line 34 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _43 = _36;
  return _43;
}


uint32_t tak(uint32_t _47, uint32_t _48, uint32_t _49) {
  uint32_t _50;    /* Address-exposed local */
  uint32_t _51;    /* Address-exposed local */
  uint32_t _52;    /* Address-exposed local */
  uint32_t _53;    /* Address-exposed local */
  uint32_t _54;
  uint32_t _55;
  uint32_t _56;
  uint32_t _57;
  uint32_t _58;
  uint32_t _59;
  uint32_t _60;
  uint32_t _61;
  uint32_t _62;
  uint32_t _63;
  uint32_t _64;
  uint32_t _65;
  uint32_t _66;
  uint32_t _67;
  uint32_t _68;
  uint32_t _69;
  uint32_t _70;

  _51 = _47;
#line 37 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _52 = _48;
  ;
  _53 = _49;
  ;
#line 38 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _54 = _52;
  _55 = _51;
  if ((((int32_t)_54) < ((int32_t)_55))) {
    goto _71;
  } else {
    goto _72;
  }

_71:
#line 39 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _56 = _51;
  _57 = _52;
  _58 = _53;
  _59 = tak((llvm_sub_u32(_56, 1)), _57, _58);
  _60 = _52;
  _61 = _53;
  _62 = _51;
  _63 = tak((llvm_sub_u32(_60, 1)), _61, _62);
  _64 = _53;
  _65 = _51;
  _66 = _52;
  _67 = tak((llvm_sub_u32(_64, 1)), _65, _66);
  _68 = tak(_59, _63, _67);
  _50 = _68;
  goto _73;

_72:
#line 41 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _69 = _53;
  _50 = _69;
  goto _73;

_73:
#line 42 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _70 = _50;
  return _70;
}


double takFP(double _74, double _75, double _76) {
  double _77;    /* Address-exposed local */
  double _78;    /* Address-exposed local */
  double _79;    /* Address-exposed local */
  double _80;    /* Address-exposed local */
  double _81;
  double _82;
  double _83;
  double _84;
  double _85;
  double _86;
  double _87;
  double _88;
  double _89;
  double _90;
  double _91;
  double _92;
  double _93;
  double _94;
  double _95;
  double _96;
  double _97;

  _78 = _74;
#line 45 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _79 = _75;
  ;
  _80 = _76;
  ;
#line 46 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _81 = _79;
  _82 = _78;
  if ((llvm_fcmp_olt(_81, _82))) {
    goto _98;
  } else {
    goto _99;
  }

_98:
#line 47 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _83 = _78;
  _84 = _79;
  _85 = _80;
  _86 = takFP((_83 - 1), _84, _85);
  _87 = _79;
  _88 = _80;
  _89 = _78;
  _90 = takFP((_87 - 1), _88, _89);
  _91 = _80;
  _92 = _78;
  _93 = _79;
  _94 = takFP((_91 - 1), _92, _93);
  _95 = takFP(_86, _90, _94);
  _77 = _95;
  goto _100;

_99:
#line 48 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _96 = _80;
  _77 = _96;
  goto _100;

_100:
#line 49 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _97 = _77;
  return _97;
}


void d_re(void* _101, void* _102) {
  void* _103;    /* Address-exposed local */
  void* _104;    /* Address-exposed local */
  uint32_t _105;    /* Address-exposed local */
  uint32_t _106;
  uint32_t _107;
  void* _108;
  uint32_t _109;
  double _110;
  void* _111;
  uint32_t _112;
  uint32_t _113;
  uint32_t _114;
  uint32_t _115;
  void* _116;
  uint32_t _117;
  void* _118;
  double _119;
  void* _120;

  _103 = _101;
#line 52 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _104 = _102;
  ;
#line 53 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  ;
  _105 = 6;
#line 55 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _106 = _105;
  _107 = ack(3, (llvm_add_u32(_106, 1)));
  _108 = _103;
  *(uint32_t*)_108 = _107;
#line 56 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _109 = _105;
  _110 = fibFP((28 + (((double)(int32_t)_109))));
  _111 = _104;
  *(double*)_111 = _110;
#line 57 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _112 = _105;
  _113 = _105;
  _114 = _105;
  _115 = tak((llvm_mul_u32(3, _112)), (llvm_mul_u32(2, _113)), _114);
  _116 = _103;
  *(uint32_t*)(((&((uint32_t*)_116)[((int64_t)1)]))) = _115;
#line 58 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _117 = fib(3);
  _118 = _103;
  *(uint32_t*)(((&((uint32_t*)_118)[((int64_t)2)]))) = _117;
#line 59 "/home/yxk/test-sgx/SGX-test/recursive/recursive.c"
  _119 = takFP(3, 2, 1);
  _120 = _104;
  *(double*)(((&((double*)_120)[((int64_t)1)]))) = _119;
}


