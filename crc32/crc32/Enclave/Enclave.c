#include "../Include/crc32.h"
#include "Enclave.h"
#include "Enclave_t.h"


void* get_next_packet(uint32_t _1) {
  void* _2;    /* Address-exposed local */
  uint32_t _3;    /* Address-exposed local */
  void* _4;    /* Address-exposed local */
  uint32_t _5;    /* Address-exposed local */
  uint32_t _6;
  uint32_t _7;
  uint32_t _8;
  uint32_t _9;
  uint32_t _10;
  void* _11;
  void* _12;
  void* _13;
  uint32_t _14;
  void* _15;
  void* _16;
  uint32_t _17;
  void* _18;
  void* _19;
  void* _20;

  _3 = _1;
#line 97 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 99 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 100 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 102 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _6 = _3;
  _3 = (llvm_srem_u32(_6, 100));
#line 104 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _7 = _3;
  _8 = *(uint32_t*)(((&(&packet_lengths)->array[((int64_t)(((int64_t)(int32_t)_7)))])));
  _5 = _8;
#line 105 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _9 = _5;
  if ((((uint32_t)_9) < ((uint32_t)40u))) {
    goto _21;
  } else {
    goto _22;
  }

_21:
#line 109 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _5 = 40;
  goto _22;

_22:
#line 118 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _10 = _5;
  _11 = malloc((((uint64_t)(uint32_t)_10)));
  _4 = _11;
  if ((_11 == ((void*)/*NULL*/0))) {
    goto _23;
  } else {
    goto _24;
  }

_23:
#line 122 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _12 = _4;
  _2 = _12;
  goto _25;

_24:
#line 126 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _13 = _4;
  _14 = _5;
  _15 = memset(_13, 0, (((uint64_t)(uint32_t)_14)));
#line 127 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _16 = _4;
  _17 = _3;
  _18 = memcpy(_16, (((&((struct l_array_36_uint8_t*)(((&(&headers)->array[((int64_t)(((int64_t)(int32_t)_17)))]))))->array[((int64_t)0)]))), 36);
#line 130 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _19 = _4;
  _2 = _19;
  goto _25;

_25:
#line 131 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _20 = _2;
  return _20;
}


uint32_t packet_size(uint32_t _26) {
  uint32_t _27;    /* Address-exposed local */
  uint32_t _28;
  uint32_t _29;
  uint32_t _30;

  _27 = _26;
#line 136 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 138 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _28 = _27;
  _27 = (llvm_urem_u32(_28, 100));
#line 139 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _29 = _27;
  _30 = *(uint32_t*)(((&(&packet_lengths)->array[((int64_t)(((uint64_t)(uint32_t)_29)))])));
  return _30;
}


void gen_crc_table(void) {
  uint32_t _31;    /* Address-exposed local */
  uint32_t _32;    /* Address-exposed local */
  uint64_t _33;    /* Address-exposed local */
  uint32_t _34;
  uint32_t _35;
  uint32_t _36;
  uint64_t _37;
  uint64_t _38;
  uint64_t _39;
  uint32_t _40;
  uint64_t _41;
  uint32_t _42;
  uint32_t _43;

#line 148 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  ;
#line 149 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 151 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _31 = 0;
  goto _44;

  do {     /* Syntactic loop '' to make GCC happy */
_44:
  _34 = _31;
  if ((((int32_t)_34) < ((int32_t)256u))) {
    goto _45;
  } else {
    goto _46;
  }

_45:
#line 153 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _35 = _31;
  _33 = ((((int64_t)(int32_t)_35)) << 24);
#line 154 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _32 = 0;
  goto _47;

  do {     /* Syntactic loop '' to make GCC happy */
_47:
  _36 = _32;
  if ((((int32_t)_36) < ((int32_t)8u))) {
    goto _48;
  } else {
    goto _49;
  }

_48:
#line 156 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _37 = _33;
  if (((_37 & INT64_C(2147483648)) != UINT64_C(0))) {
    goto _50;
  } else {
    goto _51;
  }

_51:
#line 159 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _39 = _33;
  _33 = (_39 << 1);
  goto _52;

_50:
#line 157 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _38 = _33;
  _33 = ((_38 << 1) ^ 79764919);
  goto _52;

_52:
  goto _53;

_53:
#line 154 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _40 = _32;
  _32 = (llvm_add_u32(_40, 1));
  goto _47;

  } while (1); /* end of syntactic loop '' */
_49:
#line 161 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _41 = _33;
  _42 = _31;
  *(uint64_t*)(((&(&crc_table)->array[((int64_t)(((int64_t)(int32_t)_42)))]))) = _41;
  goto _54;

_54:
#line 151 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _43 = _31;
  _31 = (llvm_add_u32(_43, 1));
  goto _44;

  } while (1); /* end of syntactic loop '' */
_46:
  return;
}


uint64_t update_crc(uint64_t _55, void* _56, uint32_t _57) {
  uint64_t _58;    /* Address-exposed local */
  void* _59;    /* Address-exposed local */
  uint32_t _60;    /* Address-exposed local */
  uint32_t _61;    /* Address-exposed local */
  uint32_t _62;    /* Address-exposed local */
  uint32_t _63;
  uint32_t _64;
  uint64_t _65;
  void* _66;
  uint8_t _67;
  uint64_t _68;
  uint32_t _69;
  uint64_t _70;
  uint32_t _71;
  uint64_t _72;

  _58 = _55;
#line 169 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _59 = _56;
#line 170 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _60 = _57;
#line 171 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 173 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  ;
#line 174 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _62 = 0;
  goto _73;

  do {     /* Syntactic loop '' to make GCC happy */
_73:
  _63 = _62;
  _64 = _60;
  if ((((int32_t)_63) < ((int32_t)_64))) {
    goto _74;
  } else {
    goto _75;
  }

_74:
#line 176 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _65 = _58;
  _66 = _59;
  _59 = (((&((uint8_t*)_66)[((int32_t)1)])));
  _67 = *(uint8_t*)_66;
  _61 = (((((uint32_t)(llvm_lshr_u64(_65, 24)))) ^ (((int32_t)(int8_t)_67))) & 255);
#line 177 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _68 = _58;
  _69 = _61;
  _70 = *(uint64_t*)(((&(&crc_table)->array[((int64_t)(((int64_t)(int32_t)_69)))])));
  _58 = ((_68 << 8) ^ _70);
  goto _76;

_76:
#line 174 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _71 = _62;
  _62 = (llvm_add_u32(_71, 1));
  goto _73;

  } while (1); /* end of syntactic loop '' */
_75:
#line 179 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _72 = _58;
  return _72;
}


void d_crc32(void* _77, void* _78) {
  void* _79;    /* Address-exposed local */
  void* _80;    /* Address-exposed local */
  uint64_t _81;    /* Address-exposed local */
  uint32_t _82;    /* Address-exposed local */
  uint32_t _83;    /* Address-exposed local */
  void* _84;    /* Address-exposed local */
  void* _85;
  uint64_t _86;
  void* _87;
  uint32_t _88;
  uint32_t _89;
  uint32_t _90;
  uint32_t _91;
  void* _92;
  void* _93;
  uint32_t _94;
  uint32_t _95;
  uint64_t _96;
  uint32_t _97;
  uint32_t _98;
  void* _99;
  uint64_t _100;
  void* _101;

  _79 = _77;
#line 183 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _80 = _78;
  ;
#line 185 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _85 = _80;
  _86 = *(uint64_t*)_85;
  _81 = _86;
#line 186 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
  _82 = 0;
  ;
  _87 = _79;
  _88 = *(uint32_t*)_87;
  _83 = _88;
#line 187 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  ;
#line 189 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  gen_crc_table();
  goto _102;

  do {     /* Syntactic loop '' to make GCC happy */
_102:
#line 191 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _89 = _82;
  _90 = _83;
  if ((((int32_t)_89) < ((int32_t)_90))) {
    goto _103;
  } else {
    goto _104;
  }

_103:
#line 193 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _91 = _82;
  _92 = get_next_packet(_91);
  _84 = _92;
#line 194 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _93 = _84;
  _94 = _82;
  _95 = packet_size(_94);
  _96 = update_crc(0, _93, _95);
  _81 = _96;
#line 195 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _97 = _82;
  _82 = (llvm_add_u32(_97, 1));
  goto _102;

  } while (1); /* end of syntactic loop '' */
_104:
#line 198 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _98 = _83;
  _99 = _79;
  *(uint32_t*)_99 = _98;
#line 199 "/home/yxk/test-sgx/SGX-test/crc32/crc32.c"
  _100 = _81;
  _101 = _80;
  *(uint64_t*)_101 = _100;
}


