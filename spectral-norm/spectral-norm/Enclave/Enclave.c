#include "../Include/spectral-norm.h"
#include "Enclave.h"
#include "Enclave_t.h"


double eval_A(uint32_t _1, uint32_t _2) {
  uint32_t _3;    /* Address-exposed local */
  uint32_t _4;    /* Address-exposed local */
  uint32_t _5;
  uint32_t _6;
  uint32_t _7;
  uint32_t _8;
  uint32_t _9;

  _3 = _1;
#line 15 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _4 = _2;
  ;
  _5 = _3;
  _6 = _4;
  _7 = _3;
  _8 = _4;
  _9 = _3;
  return (1 / (((double)(int32_t)(llvm_add_u32((llvm_add_u32((llvm_sdiv_u32((llvm_mul_u32((llvm_add_u32(_5, _6)), (llvm_add_u32((llvm_add_u32(_7, _8)), 1)))), 2)), _9)), 1)))));
}


void eval_A_times_u(uint32_t _10, void* _11, void* _12) {
  uint32_t _13;    /* Address-exposed local */
  void* _14;    /* Address-exposed local */
  void* _15;    /* Address-exposed local */
  uint32_t _16;    /* Address-exposed local */
  uint32_t _17;    /* Address-exposed local */
  uint32_t _18;
  uint32_t _19;
  void* _20;
  uint32_t _21;
  uint32_t _22;
  uint32_t _23;
  uint32_t _24;
  uint32_t _25;
  double _26;
  void* _27;
  uint32_t _28;
  double _29;
  void* _30;
  uint32_t _31;
  void* _32;
  double _33;
  double _34;
  uint32_t _35;
  uint32_t _36;

  _13 = _10;
#line 18 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _14 = _11;
  ;
  _15 = _12;
  ;
#line 20 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  ;
#line 21 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _16 = 0;
  goto _37;

  do {     /* Syntactic loop '' to make GCC happy */
_37:
  _18 = _16;
  _19 = _13;
  if ((((int32_t)_18) < ((int32_t)_19))) {
    goto _38;
  } else {
    goto _39;
  }

_38:
#line 23 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _20 = _15;
  _21 = _16;
  *(double*)(((&((double*)_20)[((int64_t)(((int64_t)(int32_t)_21)))]))) = 0;
#line 24 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _17 = 0;
  goto _40;

  do {     /* Syntactic loop '' to make GCC happy */
_40:
  _22 = _17;
  _23 = _13;
  if ((((int32_t)_22) < ((int32_t)_23))) {
    goto _41;
  } else {
    goto _42;
  }

_41:
  _24 = _16;
  _25 = _17;
  _26 = eval_A(_24, _25);
  _27 = _14;
  _28 = _17;
  _29 = *(double*)(((&((double*)_27)[((int64_t)(((int64_t)(int32_t)_28)))])));
  _30 = _15;
  _31 = _16;
  _32 = ((&((double*)_30)[((int64_t)(((int64_t)(int32_t)_31)))]));
  _33 = *(double*)_32;
  _34 = llvm_OC_fmuladd_OC_f64(_26, _29, _33);
  *(double*)_32 = _34;
  goto _43;

_43:
  _35 = _17;
  _17 = (llvm_add_u32(_35, 1));
  goto _40;

  } while (1); /* end of syntactic loop '' */
_42:
  goto _44;

_44:
#line 21 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _36 = _16;
  _16 = (llvm_add_u32(_36, 1));
  goto _37;

  } while (1); /* end of syntactic loop '' */
_39:
  return;
}


void eval_At_times_u(uint32_t _45, void* _46, void* _47) {
  uint32_t _48;    /* Address-exposed local */
  void* _49;    /* Address-exposed local */
  void* _50;    /* Address-exposed local */
  uint32_t _51;    /* Address-exposed local */
  uint32_t _52;    /* Address-exposed local */
  uint32_t _53;
  uint32_t _54;
  void* _55;
  uint32_t _56;
  uint32_t _57;
  uint32_t _58;
  uint32_t _59;
  uint32_t _60;
  double _61;
  void* _62;
  uint32_t _63;
  double _64;
  void* _65;
  uint32_t _66;
  void* _67;
  double _68;
  double _69;
  uint32_t _70;
  uint32_t _71;

  _48 = _45;
#line 29 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _49 = _46;
  ;
  _50 = _47;
  ;
#line 31 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  ;
#line 32 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _51 = 0;
  goto _72;

  do {     /* Syntactic loop '' to make GCC happy */
_72:
  _53 = _51;
  _54 = _48;
  if ((((int32_t)_53) < ((int32_t)_54))) {
    goto _73;
  } else {
    goto _74;
  }

_73:
#line 34 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _55 = _50;
  _56 = _51;
  *(double*)(((&((double*)_55)[((int64_t)(((int64_t)(int32_t)_56)))]))) = 0;
#line 35 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _52 = 0;
  goto _75;

  do {     /* Syntactic loop '' to make GCC happy */
_75:
  _57 = _52;
  _58 = _48;
  if ((((int32_t)_57) < ((int32_t)_58))) {
    goto _76;
  } else {
    goto _77;
  }

_76:
  _59 = _52;
  _60 = _51;
  _61 = eval_A(_59, _60);
  _62 = _49;
  _63 = _52;
  _64 = *(double*)(((&((double*)_62)[((int64_t)(((int64_t)(int32_t)_63)))])));
  _65 = _50;
  _66 = _51;
  _67 = ((&((double*)_65)[((int64_t)(((int64_t)(int32_t)_66)))]));
  _68 = *(double*)_67;
  _69 = llvm_OC_fmuladd_OC_f64(_61, _64, _68);
  *(double*)_67 = _69;
  goto _78;

_78:
  _70 = _52;
  _52 = (llvm_add_u32(_70, 1));
  goto _75;

  } while (1); /* end of syntactic loop '' */
_77:
  goto _79;

_79:
#line 32 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _71 = _51;
  _51 = (llvm_add_u32(_71, 1));
  goto _72;

  } while (1); /* end of syntactic loop '' */
_74:
  return;
}


void eval_AtA_times_u(uint32_t _80, void* _81, void* _82) {
  uint32_t _83;    /* Address-exposed local */
  void* _84;    /* Address-exposed local */
  void* _85;    /* Address-exposed local */
  void* _86;    /* Address-exposed local */
  uint64_t _87;    /* Address-exposed local */
  uint32_t _88;
  uint64_t _89;
  void* _90;
  uint32_t _91;
  void* _92;
  uint32_t _93;
  void* _94;
  void* _95;

  _83 = _80;
#line 40 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _84 = _81;
  ;
  _85 = _82;
  ;
#line 41 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _88 = _83;
  _89 = ((uint64_t)(uint32_t)_88);
  _86 = ((void*)/*NULL*/0);
  _90 = (void*) alloca(sizeof(double) * (_89));
  _87 = _89;
  ;
  ;
  _91 = _83;
  _92 = _84;
  eval_A_times_u(_91, _92, _90);
  _93 = _83;
  _94 = _85;
  eval_At_times_u(_93, _90, _94);
  _95 = _86;
}


void d_sp(void* _96, void* _97) {
  void* _98;    /* Address-exposed local */
  void* _99;    /* Address-exposed local */
  uint32_t _100;    /* Address-exposed local */
  uint32_t _101;    /* Address-exposed local */
  void* _102;    /* Address-exposed local */
  uint64_t _103;    /* Address-exposed local */
  uint64_t _104;    /* Address-exposed local */
  double _105;    /* Address-exposed local */
  double _106;    /* Address-exposed local */
  void* _107;
  uint32_t _108;
  uint32_t _109;
  uint64_t _110;
  void* _111;
  uint32_t _112;
  uint64_t _113;
  void* _114;
  uint32_t _115;
  uint32_t _116;
  uint32_t _117;
  uint32_t _118;
  uint32_t _119;
  uint32_t _120;
  uint32_t _121;
  uint32_t _122;
  uint32_t _123;
  uint32_t _124;
  uint32_t _125;
  double _126;
  uint32_t _127;
  double _128;
  double _129;
  double _130;
  uint32_t _131;
  double _132;
  uint32_t _133;
  double _134;
  double _135;
  double _136;
  uint32_t _137;
  double _138;
  double _139;
  double _140;
  void* _141;
  void* _142;

  _98 = _96;
#line 44 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _99 = _97;
  ;
#line 48 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
#line 49 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  ;
  _107 = _98;
  _108 = *(uint32_t*)_107;
  _101 = _108;
#line 50 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _109 = _101;
  _110 = ((uint64_t)(uint32_t)_109);
  _102 = ((void*)/*NULL*/0);
  _111 = (void*) alloca(sizeof(double) * (_110));
  _103 = _110;
  ;
  ;
  _112 = _101;
  _113 = ((uint64_t)(uint32_t)_112);
  _114 = (void*) alloca(sizeof(double) * (_113));
  _104 = _113;
  ;
  ;
  ;
  ;
#line 51 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _100 = 0;
  goto _143;

  do {     /* Syntactic loop '' to make GCC happy */
_143:
  _115 = _100;
  _116 = _101;
  if ((((int32_t)_115) < ((int32_t)_116))) {
    goto _144;
  } else {
    goto _145;
  }

_144:
  _117 = _100;
  *(double*)(((&((double*)_111)[((int64_t)(((int64_t)(int32_t)_117)))]))) = 1;
  goto _146;

_146:
  _118 = _100;
  _100 = (llvm_add_u32(_118, 1));
  goto _143;

  } while (1); /* end of syntactic loop '' */
_145:
#line 52 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _100 = 0;
  goto _147;

  do {     /* Syntactic loop '' to make GCC happy */
_147:
  _119 = _100;
  if ((((int32_t)_119) < ((int32_t)10u))) {
    goto _148;
  } else {
    goto _149;
  }

_148:
#line 54 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _120 = _101;
  eval_AtA_times_u(_120, _111, _114);
#line 55 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _121 = _101;
  eval_AtA_times_u(_121, _114, _111);
  goto _150;

_150:
#line 52 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _122 = _100;
  _100 = (llvm_add_u32(_122, 1));
  goto _147;

  } while (1); /* end of syntactic loop '' */
_149:
#line 57 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _106 = 0;
  _105 = 0;
#line 58 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _100 = 0;
  goto _151;

  do {     /* Syntactic loop '' to make GCC happy */
_151:
  _123 = _100;
  _124 = _101;
  if ((((int32_t)_123) < ((int32_t)_124))) {
    goto _152;
  } else {
    goto _153;
  }

_152:
  _125 = _100;
  _126 = *(double*)(((&((double*)_111)[((int64_t)(((int64_t)(int32_t)_125)))])));
  _127 = _100;
  _128 = *(double*)(((&((double*)_114)[((int64_t)(((int64_t)(int32_t)_127)))])));
  _129 = _105;
  _130 = llvm_OC_fmuladd_OC_f64(_126, _128, _129);
  _105 = _130;
  _131 = _100;
  _132 = *(double*)(((&((double*)_114)[((int64_t)(((int64_t)(int32_t)_131)))])));
  _133 = _100;
  _134 = *(double*)(((&((double*)_114)[((int64_t)(((int64_t)(int32_t)_133)))])));
  _135 = _106;
  _136 = llvm_OC_fmuladd_OC_f64(_132, _134, _135);
  _106 = _136;
  goto _154;

_154:
  _137 = _100;
  _100 = (llvm_add_u32(_137, 1));
  goto _151;

  } while (1); /* end of syntactic loop '' */
_153:
#line 59 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _138 = _105;
  _139 = _106;
  _140 = sqrt((_138 / _139));
  _141 = _99;
  *(double*)_141 = _140;
#line 63 "/home/yxk/test-sgx/SGX-test/spectral-norm/spectral-norm.c"
  _142 = _102;
}


