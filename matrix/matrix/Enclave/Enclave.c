#include "../Include/matrix.h"
#include "Enclave.h"
#include "Enclave_t.h"


void* mkmatrix(uint32_t _1, uint32_t _2) {
  uint32_t _3;    /* Address-exposed local */
  uint32_t _4;    /* Address-exposed local */
  uint32_t _5;    /* Address-exposed local */
  uint32_t _6;    /* Address-exposed local */
  uint32_t _7;    /* Address-exposed local */
  void* _8;    /* Address-exposed local */
  uint32_t _9;
  void* _10;
  uint32_t _11;
  uint32_t _12;
  uint32_t _13;
  void* _14;
  void* _15;
  uint32_t _16;
  uint32_t _17;
  uint32_t _18;
  uint32_t _19;
  void* _20;
  uint32_t _21;
  void* _22;
  uint32_t _23;
  uint32_t _24;
  uint32_t _25;
  void* _26;

  _3 = _1;
#line 14 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _4 = _2;
  ;
#line 15 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  ;
  ;
  _7 = 1;
#line 16 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _9 = _3;
  _10 = malloc((llvm_mul_u64((((int64_t)(int32_t)_9)), 8)));
  _8 = _10;
#line 17 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _5 = 0;
  goto _27;

  do {     /* Syntactic loop '' to make GCC happy */
_27:
  _11 = _5;
  _12 = _3;
  if ((((int32_t)_11) < ((int32_t)_12))) {
    goto _28;
  } else {
    goto _29;
  }

_28:
#line 18 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _13 = _4;
  _14 = malloc((llvm_mul_u64((((int64_t)(int32_t)_13)), 4)));
  _15 = _8;
  _16 = _5;
  *(void**)(((&((void**)_15)[((int64_t)(((int64_t)(int32_t)_16)))]))) = _14;
#line 19 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _6 = 0;
  goto _30;

  do {     /* Syntactic loop '' to make GCC happy */
_30:
  _17 = _6;
  _18 = _4;
  if ((((int32_t)_17) < ((int32_t)_18))) {
    goto _31;
  } else {
    goto _32;
  }

_31:
#line 20 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _19 = _7;
  _7 = (llvm_add_u32(_19, 1));
  _20 = _8;
  _21 = _5;
  _22 = *(void**)(((&((void**)_20)[((int64_t)(((int64_t)(int32_t)_21)))])));
  _23 = _6;
  *(uint32_t*)(((&((uint32_t*)_22)[((int64_t)(((int64_t)(int32_t)_23)))]))) = _19;
  goto _33;

_33:
#line 19 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _24 = _6;
  _6 = (llvm_add_u32(_24, 1));
  goto _30;

  } while (1); /* end of syntactic loop '' */
_32:
  goto _34;

_34:
#line 17 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _25 = _5;
  _5 = (llvm_add_u32(_25, 1));
  goto _27;

  } while (1); /* end of syntactic loop '' */
_29:
#line 23 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _26 = _8;
  return _26;
}


void zeromatrix(uint32_t _35, uint32_t _36, void* _37) {
  uint32_t _38;    /* Address-exposed local */
  uint32_t _39;    /* Address-exposed local */
  void* _40;    /* Address-exposed local */
  uint32_t _41;    /* Address-exposed local */
  uint32_t _42;    /* Address-exposed local */
  uint32_t _43;
  uint32_t _44;
  uint32_t _45;
  uint32_t _46;
  void* _47;
  uint32_t _48;
  void* _49;
  uint32_t _50;
  uint32_t _51;
  uint32_t _52;

  _38 = _35;
#line 27 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _39 = _36;
  ;
  _40 = _37;
  ;
#line 28 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  ;
#line 29 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _41 = 0;
  goto _53;

  do {     /* Syntactic loop '' to make GCC happy */
_53:
  _43 = _41;
  _44 = _38;
  if ((((int32_t)_43) < ((int32_t)_44))) {
    goto _54;
  } else {
    goto _55;
  }

_54:
#line 30 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _42 = 0;
  goto _56;

  do {     /* Syntactic loop '' to make GCC happy */
_56:
  _45 = _42;
  _46 = _39;
  if ((((int32_t)_45) < ((int32_t)_46))) {
    goto _57;
  } else {
    goto _58;
  }

_57:
#line 31 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _47 = _40;
  _48 = _41;
  _49 = *(void**)(((&((void**)_47)[((int64_t)(((int64_t)(int32_t)_48)))])));
  _50 = _42;
  *(uint32_t*)(((&((uint32_t*)_49)[((int64_t)(((int64_t)(int32_t)_50)))]))) = 0;
  goto _59;

_59:
#line 30 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _51 = _42;
  _42 = (llvm_add_u32(_51, 1));
  goto _56;

  } while (1); /* end of syntactic loop '' */
_58:
  goto _60;

_60:
#line 29 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _52 = _41;
  _41 = (llvm_add_u32(_52, 1));
  goto _53;

  } while (1); /* end of syntactic loop '' */
_55:
  return;
}


void freematrix(uint32_t _61, void* _62) {
  uint32_t _63;    /* Address-exposed local */
  void* _64;    /* Address-exposed local */
  uint32_t _65;
  uint32_t _66;
  void* _67;
  uint32_t _68;
  void* _69;
  void* _70;

  _63 = _61;
#line 35 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _64 = _62;
  ;
  goto _71;

  do {     /* Syntactic loop '' to make GCC happy */
_71:
#line 36 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _65 = _63;
  _66 = llvm_add_u32(_65, -1);
  _63 = _66;
  if ((((int32_t)_66) > ((int32_t)4294967295u))) {
    goto _72;
  } else {
    goto _73;
  }

_72:
  _67 = _64;
  _68 = _63;
  _69 = *(void**)(((&((void**)_67)[((int64_t)(((int64_t)(int32_t)_68)))])));
  free(_69);
  goto _71;

  } while (1); /* end of syntactic loop '' */
_73:
#line 37 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _70 = _64;
  free(_70);
}


void* mmult(uint32_t _74, uint32_t _75, void* _76, void* _77, void* _78) {
  uint32_t _79;    /* Address-exposed local */
  uint32_t _80;    /* Address-exposed local */
  void* _81;    /* Address-exposed local */
  void* _82;    /* Address-exposed local */
  void* _83;    /* Address-exposed local */
  uint32_t _84;    /* Address-exposed local */
  uint32_t _85;    /* Address-exposed local */
  uint32_t _86;    /* Address-exposed local */
  uint32_t _87;    /* Address-exposed local */
  uint32_t _88;
  uint32_t _89;
  uint32_t _90;
  uint32_t _91;
  uint32_t _92;
  uint32_t _93;
  void* _94;
  uint32_t _95;
  void* _96;
  uint32_t _97;
  uint32_t _98;
  void* _99;
  uint32_t _100;
  void* _101;
  uint32_t _102;
  uint32_t _103;
  uint32_t _104;
  uint32_t _105;
  uint32_t _106;
  void* _107;
  uint32_t _108;
  void* _109;
  uint32_t _110;
  uint32_t _111;
  uint32_t _112;
  void* _113;

  _79 = _74;
#line 41 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _80 = _75;
  ;
  _81 = _76;
  ;
  _82 = _77;
  ;
  _83 = _78;
  ;
#line 42 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  ;
  ;
  ;
#line 43 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _84 = 0;
  goto _114;

  do {     /* Syntactic loop '' to make GCC happy */
_114:
  _88 = _84;
  _89 = _79;
  if ((((int32_t)_88) < ((int32_t)_89))) {
    goto _115;
  } else {
    goto _116;
  }

_115:
#line 44 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _85 = 0;
  goto _117;

  do {     /* Syntactic loop '' to make GCC happy */
_117:
  _90 = _85;
  _91 = _80;
  if ((((int32_t)_90) < ((int32_t)_91))) {
    goto _118;
  } else {
    goto _119;
  }

_118:
#line 45 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _87 = 0;
#line 46 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _86 = 0;
  goto _120;

  do {     /* Syntactic loop '' to make GCC happy */
_120:
  _92 = _86;
  _93 = _80;
  if ((((int32_t)_92) < ((int32_t)_93))) {
    goto _121;
  } else {
    goto _122;
  }

_121:
#line 47 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _94 = _81;
  _95 = _84;
  _96 = *(void**)(((&((void**)_94)[((int64_t)(((int64_t)(int32_t)_95)))])));
  _97 = _86;
  _98 = *(uint32_t*)(((&((uint32_t*)_96)[((int64_t)(((int64_t)(int32_t)_97)))])));
  _99 = _82;
  _100 = _86;
  _101 = *(void**)(((&((void**)_99)[((int64_t)(((int64_t)(int32_t)_100)))])));
  _102 = _85;
  _103 = *(uint32_t*)(((&((uint32_t*)_101)[((int64_t)(((int64_t)(int32_t)_102)))])));
  _104 = _87;
  _87 = (llvm_add_u32(_104, (llvm_mul_u32(_98, _103))));
  goto _123;

_123:
#line 46 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _105 = _86;
  _86 = (llvm_add_u32(_105, 1));
  goto _120;

  } while (1); /* end of syntactic loop '' */
_122:
#line 49 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _106 = _87;
  _107 = _83;
  _108 = _84;
  _109 = *(void**)(((&((void**)_107)[((int64_t)(((int64_t)(int32_t)_108)))])));
  _110 = _85;
  *(uint32_t*)(((&((uint32_t*)_109)[((int64_t)(((int64_t)(int32_t)_110)))]))) = _106;
  goto _124;

_124:
#line 44 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _111 = _85;
  _85 = (llvm_add_u32(_111, 1));
  goto _117;

  } while (1); /* end of syntactic loop '' */
_119:
  goto _125;

_125:
#line 43 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _112 = _84;
  _84 = (llvm_add_u32(_112, 1));
  goto _114;

  } while (1); /* end of syntactic loop '' */
_116:
#line 52 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _113 = _83;
  return _113;
}


void d_ma(void* _126, void* _127) {
  void* _128;    /* Address-exposed local */
  void* _129;    /* Address-exposed local */
  uint32_t _130;    /* Address-exposed local */
  void* _131;    /* Address-exposed local */
  void* _132;    /* Address-exposed local */
  void* _133;    /* Address-exposed local */
  void* _134;
  void* _135;
  void* _136;
  uint32_t _137;
  void* _138;
  uint32_t _139;
  void* _140;
  void* _141;
  void* _142;
  void* _143;
  uint32_t _144;
  void* _145;
  void* _146;
  uint32_t _147;
  void* _148;
  void* _149;
  void* _150;
  uint32_t _151;
  void* _152;
  void* _153;
  void* _154;
  uint32_t _155;
  void* _156;
  void* _157;
  void* _158;
  uint32_t _159;
  void* _160;
  void* _161;
  void* _162;
  void* _163;

  _128 = _126;
#line 56 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _129 = _127;
  ;
#line 59 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
#line 61 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _134 = mkmatrix(10, 10);
  _131 = _134;
#line 62 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _135 = mkmatrix(10, 10);
  _132 = _135;
#line 63 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  ;
  _136 = mkmatrix(10, 10);
  _133 = _136;
#line 65 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _130 = 0;
  goto _164;

  do {     /* Syntactic loop '' to make GCC happy */
_164:
  _137 = _130;
  _138 = _129;
  _139 = *(uint32_t*)_138;
  if ((((int32_t)_137) < ((int32_t)_139))) {
    goto _165;
  } else {
    goto _166;
  }

_165:
#line 66 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _140 = _131;
  _141 = _132;
  _142 = _133;
  _143 = mmult(10, 10, _140, _141, _142);
  _133 = _143;
  goto _167;

_167:
#line 65 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _144 = _130;
  _130 = (llvm_add_u32(_144, 1));
  goto _164;

  } while (1); /* end of syntactic loop '' */
_166:
#line 69 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _145 = _133;
  _146 = *(void**)((((void**)_145)));
  _147 = *(uint32_t*)((((uint32_t*)_146)));
  _148 = _128;
  *(uint32_t*)_148 = _147;
#line 70 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _149 = _133;
  _150 = *(void**)(((&((void**)_149)[((int64_t)2)])));
  _151 = *(uint32_t*)(((&((uint32_t*)_150)[((int64_t)3)])));
  _152 = _128;
  *(uint32_t*)(((&((uint32_t*)_152)[((int64_t)1)]))) = _151;
#line 71 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _153 = _133;
  _154 = *(void**)(((&((void**)_153)[((int64_t)3)])));
  _155 = *(uint32_t*)(((&((uint32_t*)_154)[((int64_t)2)])));
  _156 = _128;
  *(uint32_t*)(((&((uint32_t*)_156)[((int64_t)2)]))) = _155;
#line 72 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _157 = _133;
  _158 = *(void**)(((&((void**)_157)[((int64_t)4)])));
  _159 = *(uint32_t*)(((&((uint32_t*)_158)[((int64_t)4)])));
  _160 = _128;
  *(uint32_t*)(((&((uint32_t*)_160)[((int64_t)3)]))) = _159;
#line 74 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _161 = _131;
  freematrix(10, _161);
#line 75 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _162 = _132;
  freematrix(10, _162);
#line 76 "/home/yxk/test-sgx/SGX-test/matrix/matrix.c"
  _163 = _133;
  freematrix(10, _163);
}


