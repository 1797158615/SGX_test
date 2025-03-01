#include "../Include/rc4.h"
#include "Enclave.h"
#include "Enclave_t.h"


void rc4_setup(void* _1, void* _2, uint32_t _3) {
  void* _4;    /* Address-exposed local */
  void* _5;    /* Address-exposed local */
  uint32_t _6;    /* Address-exposed local */
  uint32_t _7;    /* Address-exposed local */
  uint32_t _8;    /* Address-exposed local */
  uint32_t _9;    /* Address-exposed local */
  void* _10;    /* Address-exposed local */
  uint32_t _11;    /* Address-exposed local */
  void* _12;
  void* _13;
  void* _14;
  uint32_t _15;
  uint32_t _16;
  void* _17;
  uint32_t _18;
  uint32_t _19;
  uint32_t _20;
  void* _21;
  uint32_t _22;
  uint32_t _23;
  uint32_t _24;
  uint32_t _25;
  void* _26;
  uint32_t _27;
  uint8_t _28;
  void* _29;
  uint32_t _30;
  uint32_t _31;
  void* _32;
  uint32_t _33;
  uint32_t _34;
  void* _35;
  uint32_t _36;
  uint32_t _37;
  uint32_t _38;
  uint32_t _39;
  uint32_t _40;

  _4 = _1;
#line 72 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _5 = _2;
  ;
  _6 = _3;
  ;
#line 74 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  ;
  ;
  ;
  ;
#line 76 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _12 = _4;
  *(uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_12)->field0)))) = 0;
#line 77 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _13 = _4;
  *(uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_13)->field1)))) = 0;
#line 78 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _14 = _4;
  _10 = (((&((struct l_array_256_uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_14)->field2)))))->array[((int64_t)0)])));
#line 80 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _7 = 0;
  goto _41;

  do {     /* Syntactic loop '' to make GCC happy */
_41:
  _15 = _7;
  if ((((int32_t)_15) < ((int32_t)256u))) {
    goto _42;
  } else {
    goto _43;
  }

_42:
#line 82 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _16 = _7;
  _17 = _10;
  _18 = _7;
  *(uint32_t*)(((&((uint32_t*)_17)[((int64_t)(((int64_t)(int32_t)_18)))]))) = _16;
  goto _44;

_44:
#line 80 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _19 = _7;
  _7 = (llvm_add_u32(_19, 1));
  goto _41;

  } while (1); /* end of syntactic loop '' */
_43:
#line 85 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _9 = 0;
  _8 = 0;
#line 87 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _7 = 0;
  goto _45;

  do {     /* Syntactic loop '' to make GCC happy */
_45:
  _20 = _7;
  if ((((int32_t)_20) < ((int32_t)256u))) {
    goto _46;
  } else {
    goto _47;
  }

_46:
#line 89 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _21 = _10;
  _22 = _7;
  _23 = *(uint32_t*)(((&((uint32_t*)_21)[((int64_t)(((int64_t)(int32_t)_22)))])));
  _11 = _23;
#line 90 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _24 = _8;
  _25 = _11;
  _26 = _5;
  _27 = _9;
  _28 = *(uint8_t*)(((&((uint8_t*)_26)[((int64_t)(((int64_t)(int32_t)_27)))])));
  _8 = (((uint32_t)(uint8_t)(((uint8_t)(llvm_add_u32((llvm_add_u32(_24, _25)), (((uint32_t)(uint8_t)_28))))))));
#line 91 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _29 = _10;
  _30 = _8;
  _31 = *(uint32_t*)(((&((uint32_t*)_29)[((int64_t)(((int64_t)(int32_t)_30)))])));
  _32 = _10;
  _33 = _7;
  *(uint32_t*)(((&((uint32_t*)_32)[((int64_t)(((int64_t)(int32_t)_33)))]))) = _31;
  _34 = _11;
  _35 = _10;
  _36 = _8;
  *(uint32_t*)(((&((uint32_t*)_35)[((int64_t)(((int64_t)(int32_t)_36)))]))) = _34;
#line 92 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _37 = _9;
  _38 = llvm_add_u32(_37, 1);
  _9 = _38;
  _39 = _6;
  if ((((int32_t)_38) >= ((int32_t)_39))) {
    goto _48;
  } else {
    goto _49;
  }

_48:
  _9 = 0;
  goto _49;

_49:
  goto _50;

_50:
#line 87 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _40 = _7;
  _7 = (llvm_add_u32(_40, 1));
  goto _45;

  } while (1); /* end of syntactic loop '' */
_47:
  return;
}


void rc4_crypt(void* _51, void* _52, uint32_t _53) {
  void* _54;    /* Address-exposed local */
  void* _55;    /* Address-exposed local */
  uint32_t _56;    /* Address-exposed local */
  uint32_t _57;    /* Address-exposed local */
  uint32_t _58;    /* Address-exposed local */
  uint32_t _59;    /* Address-exposed local */
  void* _60;    /* Address-exposed local */
  uint32_t _61;    /* Address-exposed local */
  uint32_t _62;    /* Address-exposed local */
  void* _63;
  uint32_t _64;
  void* _65;
  uint32_t _66;
  void* _67;
  uint32_t _68;
  uint32_t _69;
  uint32_t _70;
  void* _71;
  uint32_t _72;
  uint32_t _73;
  uint32_t _74;
  uint32_t _75;
  void* _76;
  uint32_t _77;
  uint32_t _78;
  void* _79;
  uint32_t _80;
  uint32_t _81;
  void* _82;
  uint32_t _83;
  void* _84;
  uint32_t _85;
  uint32_t _86;
  uint32_t _87;
  void* _88;
  uint32_t _89;
  void* _90;
  uint8_t _91;
  uint32_t _92;
  uint32_t _93;
  void* _94;
  uint32_t _95;
  void* _96;

  _54 = _51;
#line 97 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _55 = _52;
  ;
  _56 = _53;
  ;
#line 99 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  ;
  ;
  ;
  ;
  ;
#line 101 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _63 = _54;
  _64 = *(uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_63)->field0))));
  _58 = _64;
#line 102 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _65 = _54;
  _66 = *(uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_65)->field1))));
  _59 = _66;
#line 103 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _67 = _54;
  _60 = (((&((struct l_array_256_uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_67)->field2)))))->array[((int64_t)0)])));
#line 105 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _57 = 0;
  goto _97;

  do {     /* Syntactic loop '' to make GCC happy */
_97:
  _68 = _57;
  _69 = _56;
  if ((((int32_t)_68) < ((int32_t)_69))) {
    goto _98;
  } else {
    goto _99;
  }

_98:
#line 107 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _70 = _58;
  _58 = (((uint32_t)(uint8_t)(((uint8_t)(llvm_add_u32(_70, 1))))));
  _71 = _60;
  _72 = _58;
  _73 = *(uint32_t*)(((&((uint32_t*)_71)[((int64_t)(((int64_t)(int32_t)_72)))])));
  _61 = _73;
#line 108 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _74 = _59;
  _75 = _61;
  _59 = (((uint32_t)(uint8_t)(((uint8_t)(llvm_add_u32(_74, _75))))));
#line 109 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _76 = _60;
  _77 = _59;
  _78 = *(uint32_t*)(((&((uint32_t*)_76)[((int64_t)(((int64_t)(int32_t)_77)))])));
  _62 = _78;
  _79 = _60;
  _80 = _58;
  *(uint32_t*)(((&((uint32_t*)_79)[((int64_t)(((int64_t)(int32_t)_80)))]))) = _78;
#line 110 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _81 = _61;
  _82 = _60;
  _83 = _59;
  *(uint32_t*)(((&((uint32_t*)_82)[((int64_t)(((int64_t)(int32_t)_83)))]))) = _81;
#line 111 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _84 = _60;
  _85 = _61;
  _86 = _62;
  _87 = *(uint32_t*)(((&((uint32_t*)_84)[((int64_t)(((uint64_t)(uint8_t)(((uint8_t)(llvm_add_u32(_85, _86)))))))])));
  _88 = _55;
  _89 = _57;
  _90 = ((&((uint8_t*)_88)[((int64_t)(((int64_t)(int32_t)_89)))]));
  _91 = *(uint8_t*)_90;
  *(uint8_t*)_90 = (((uint8_t)((((uint32_t)(uint8_t)_91)) ^ _87)));
  goto _100;

_100:
#line 105 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _92 = _57;
  _57 = (llvm_add_u32(_92, 1));
  goto _97;

  } while (1); /* end of syntactic loop '' */
_99:
#line 114 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _93 = _58;
  _94 = _54;
  *(uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_94)->field0)))) = _93;
#line 115 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _95 = _59;
  _96 = _54;
  *(uint32_t*)(((&(((struct l_struct_struct_OC_rc4_state*)_96)->field1)))) = _95;
}


void d_rc4(void* _101, void* _102, void* _103) {
  void* _104;    /* Address-exposed local */
  void* _105;    /* Address-exposed local */
  void* _106;    /* Address-exposed local */
  uint32_t _107;    /* Address-exposed local */
  uint32_t _108;    /* Address-exposed local */
  struct l_struct_struct_OC_rc4_state _109;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_30_uint8_t _110 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _111;    /* Address-exposed local */
  void* _112;
  uint32_t _113;
  void* _114;
  uint32_t _115;
  uint32_t _116;
  uint32_t _117;
  uint32_t _118;
  uint32_t _119;
  uint8_t _120;
  void* _121;
  uint32_t _122;
  uint32_t _123;
  uint8_t _124;
  uint32_t _125;
  uint8_t _126;
  uint32_t _127;
  uint32_t _128;
  uint32_t _129;
  uint8_t _130;
  uint32_t _131;
  void* _132;
  void* _133;

  _104 = _101;
#line 121 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _105 = _102;
  ;
  _106 = _103;
  ;
#line 123 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  ;
  _112 = _106;
  _113 = *(uint32_t*)_112;
  _108 = _113;
#line 124 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
#line 125 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
#line 127 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  ;
  _114 = _104;
  _115 = *(uint32_t*)_114;
  _111 = _115;
#line 134 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _107 = 0;
  goto _134;

  do {     /* Syntactic loop '' to make GCC happy */
_134:
  _116 = _107;
  _117 = _111;
  if ((((int32_t)_116) < ((int32_t)_117))) {
    goto _135;
  } else {
    goto _136;
  }

_135:
#line 137 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _118 = _108;
  _119 = _108;
  _120 = *(uint8_t*)(((&(&data_len)->array[((int64_t)(((int64_t)(int32_t)_119)))])));
  _121 = memcpy((((&(&_110)->array[((int64_t)0)]))), (((&((struct l_array_30_uint8_t*)(((&((struct l_array_7_struct_AC_l_array_30_uint8_t*)&data)->array[((int64_t)(((int64_t)(int32_t)_118)))]))))->array[((int64_t)0)]))), (((uint64_t)(uint8_t)_120)));
#line 139 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _122 = _108;
  _123 = _108;
  _124 = *(uint8_t*)(((&((struct l_array_30_uint8_t*)(((&((struct l_array_7_struct_AC_l_array_30_uint8_t*)&keys)->array[((int64_t)(((int64_t)(int32_t)_123)))]))))->array[((int64_t)0)])));
  rc4_setup((&_109), (((&((struct l_array_30_uint8_t*)(((&((struct l_array_7_struct_AC_l_array_30_uint8_t*)&keys)->array[((int64_t)(((int64_t)(int32_t)_122)))]))))->array[((int64_t)1)]))), (((uint32_t)(uint8_t)_124)));
#line 140 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _125 = _108;
  _126 = *(uint8_t*)(((&(&data_len)->array[((int64_t)(((int64_t)(int32_t)_125)))])));
  rc4_crypt((&_109), (((&(&_110)->array[((int64_t)0)]))), (((uint32_t)(uint8_t)_126)));
  goto _137;

_137:
#line 134 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _127 = _107;
  _107 = (llvm_add_u32(_127, 1));
  goto _134;

  } while (1); /* end of syntactic loop '' */
_136:
#line 144 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _128 = _108;
  _129 = _108;
  _130 = *(uint8_t*)(((&(&data_len)->array[((int64_t)(((int64_t)(int32_t)_129)))])));
  _131 = memcmp((((&(&_110)->array[((int64_t)0)]))), (((&((struct l_array_30_uint8_t*)(((&((struct l_array_7_struct_AC_l_array_30_uint8_t*)&output)->array[((int64_t)(((int64_t)(int32_t)_128)))]))))->array[((int64_t)0)]))), (((uint64_t)(uint8_t)_130)));
  if ((_131 != 0u)) {
    goto _138;
  } else {
    goto _139;
  }

_138:
#line 146 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _132 = _105;
  *(uint32_t*)_132 = 0;
  goto _140;

_139:
#line 150 "/home/yxk/test-sgx/SGX-test/rc4/rc4.c"
  _133 = _105;
  *(uint32_t*)_133 = 1;
  goto _140;

_140:
  return;
}


