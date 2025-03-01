#include "../Include/pc1cod.h"
#include "Enclave.h"
#include "Enclave_t.h"


uint32_t code(void) {
  uint16_t _1;
  uint16_t _2;
  uint16_t _3;
  uint16_t _4;
  uint16_t _5;
  uint16_t _6;
  uint16_t _7;
  uint16_t _8;
  uint16_t _9;
  uint16_t _10;
  uint16_t _11;
  uint16_t _12;
  uint16_t _13;
  uint16_t _14;
  uint16_t _15;
  uint16_t _16;
  uint16_t _17;
  uint16_t _18;
  uint16_t _19;
  uint16_t _20;
  uint16_t _21;
  uint16_t _22;
  uint16_t _23;
  uint16_t _24;
  uint16_t _25;
  uint16_t _26;
  uint16_t _27;
  uint16_t _28;
  uint16_t _29;
  uint16_t _30;
  uint16_t _31;
  uint16_t _32;
  uint16_t _33;
  uint16_t _34;
  uint16_t _35;

#line 39 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _1 = x1a2;
  _2 = i;
  dx = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_1)), (((uint32_t)(uint16_t)_2))))));
#line 41 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _3 = i;
  _4 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)(((uint64_t)(uint16_t)_3)))])));
  ax = _4;
#line 43 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  cx = 346;
#line 45 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  bx = 20021u;
#line 48 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _5 = ax;
  tmp = _5;
#line 50 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _6 = si;
  ax = _6;
#line 52 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _7 = tmp;
  si = _7;
#line 55 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _8 = ax;
  tmp = _8;
#line 57 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _9 = dx;
  ax = _9;
#line 59 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _10 = tmp;
  dx = _10;
#line 62 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _11 = ax;
  if (((((uint32_t)(uint16_t)_11)) != 0u)) {
    goto _36;
  } else {
    goto _37;
  }

_36:
#line 66 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _12 = ax;
  _13 = bx;
  ax = (((uint16_t)(llvm_mul_u32((((uint32_t)(uint16_t)_12)), (((uint32_t)(uint16_t)_13))))));
  goto _37;

_37:
#line 70 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _14 = ax;
  tmp = _14;
#line 72 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _15 = cx;
  ax = _15;
#line 74 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _16 = tmp;
  cx = _16;
#line 77 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _17 = ax;
  if (((((uint32_t)(uint16_t)_17)) != 0u)) {
    goto _38;
  } else {
    goto _39;
  }

_38:
#line 81 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _18 = ax;
  _19 = si;
  ax = (((uint16_t)(llvm_mul_u32((((uint32_t)(uint16_t)_18)), (((uint32_t)(uint16_t)_19))))));
#line 83 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _20 = ax;
  _21 = cx;
  cx = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_20)), (((uint32_t)(uint16_t)_21))))));
  goto _39;

_39:
#line 87 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _22 = ax;
  tmp = _22;
#line 89 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _23 = si;
  ax = _23;
#line 91 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _24 = tmp;
  si = _24;
#line 93 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _25 = ax;
  _26 = bx;
  ax = (((uint16_t)(llvm_mul_u32((((uint32_t)(uint16_t)_25)), (((uint32_t)(uint16_t)_26))))));
#line 95 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _27 = cx;
  _28 = dx;
  dx = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_27)), (((uint32_t)(uint16_t)_28))))));
#line 98 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _29 = ax;
  ax = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_29)), 1))));
#line 101 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _30 = dx;
  x1a2 = _30;
#line 103 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _31 = ax;
  _32 = i;
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)(((uint64_t)(uint16_t)_32)))]))) = _31;
#line 106 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _33 = ax;
  _34 = dx;
  res = (((uint16_t)((((uint32_t)(uint16_t)_33)) ^ (((uint32_t)(uint16_t)_34)))));
#line 108 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _35 = i;
  i = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_35)), 1))));
  return 0;
}


uint32_t assemble(void) {
  uint8_t _40;
  uint8_t _41;
  uint32_t _42;
  uint16_t _43;
  uint16_t _44;
  uint8_t _45;
  uint8_t _46;
  uint32_t _47;
  uint16_t _48;
  uint16_t _49;
  uint16_t _50;
  uint8_t _51;
  uint8_t _52;
  uint32_t _53;
  uint16_t _54;
  uint16_t _55;
  uint16_t _56;
  uint8_t _57;
  uint8_t _58;
  uint32_t _59;
  uint16_t _60;
  uint16_t _61;
  uint16_t _62;
  uint8_t _63;
  uint8_t _64;
  uint32_t _65;
  uint16_t _66;
  uint16_t _67;
  uint16_t _68;
  uint8_t _69;
  uint8_t _70;
  uint32_t _71;
  uint16_t _72;
  uint16_t _73;
  uint16_t _74;
  uint8_t _75;
  uint8_t _76;
  uint32_t _77;
  uint16_t _78;
  uint16_t _79;
  uint16_t _80;
  uint8_t _81;
  uint8_t _82;
  uint32_t _83;
  uint16_t _84;
  uint16_t _85;
  uint16_t _86;
  uint8_t _87;
  uint8_t _88;
  uint32_t _89;
  uint16_t _90;
  uint16_t _91;
  uint16_t _92;
  uint8_t _93;
  uint8_t _94;
  uint32_t _95;
  uint16_t _96;
  uint16_t _97;
  uint16_t _98;
  uint8_t _99;
  uint8_t _100;
  uint32_t _101;
  uint16_t _102;
  uint16_t _103;
  uint16_t _104;
  uint8_t _105;
  uint8_t _106;
  uint32_t _107;
  uint16_t _108;
  uint16_t _109;
  uint16_t _110;
  uint8_t _111;
  uint8_t _112;
  uint32_t _113;
  uint16_t _114;
  uint16_t _115;
  uint16_t _116;
  uint8_t _117;
  uint8_t _118;
  uint32_t _119;
  uint16_t _120;
  uint16_t _121;
  uint16_t _122;
  uint8_t _123;
  uint8_t _124;
  uint32_t _125;
  uint16_t _126;
  uint16_t _127;
  uint16_t _128;
  uint8_t _129;
  uint8_t _130;
  uint32_t _131;
  uint16_t _132;
  uint16_t _133;

#line 119 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _40 = *((uint8_t*)&cle);
  _41 = *(uint8_t*)(((&(&cle)->array[((int64_t)1)])));
  *((uint16_t*)&x1a0) = (((uint16_t)(llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_40)), 256)), (((uint32_t)(uint8_t)_41))))));
#line 121 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _42 = code();
#line 123 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _43 = res;
  inter = _43;
#line 126 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _44 = *((uint16_t*)&x1a0);
  _45 = *(uint8_t*)(((&(&cle)->array[((int64_t)2)])));
  _46 = *(uint8_t*)(((&(&cle)->array[((int64_t)3)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)1)]))) = (((uint16_t)((((uint32_t)(uint16_t)_44)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_45)), 256)), (((uint32_t)(uint8_t)_46)))))));
#line 128 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _47 = code();
#line 130 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _48 = inter;
  _49 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_48)) ^ (((uint32_t)(uint16_t)_49)))));
#line 133 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _50 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)1)])));
  _51 = *(uint8_t*)(((&(&cle)->array[((int64_t)4)])));
  _52 = *(uint8_t*)(((&(&cle)->array[((int64_t)5)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)2)]))) = (((uint16_t)((((uint32_t)(uint16_t)_50)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_51)), 256)), (((uint32_t)(uint8_t)_52)))))));
#line 135 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _53 = code();
#line 137 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _54 = inter;
  _55 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_54)) ^ (((uint32_t)(uint16_t)_55)))));
#line 140 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _56 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)2)])));
  _57 = *(uint8_t*)(((&(&cle)->array[((int64_t)6)])));
  _58 = *(uint8_t*)(((&(&cle)->array[((int64_t)7)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)3)]))) = (((uint16_t)((((uint32_t)(uint16_t)_56)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_57)), 256)), (((uint32_t)(uint8_t)_58)))))));
#line 142 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _59 = code();
#line 144 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _60 = inter;
  _61 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_60)) ^ (((uint32_t)(uint16_t)_61)))));
#line 147 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _62 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)3)])));
  _63 = *(uint8_t*)(((&(&cle)->array[((int64_t)8)])));
  _64 = *(uint8_t*)(((&(&cle)->array[((int64_t)9)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)4)]))) = (((uint16_t)((((uint32_t)(uint16_t)_62)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_63)), 256)), (((uint32_t)(uint8_t)_64)))))));
#line 149 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _65 = code();
#line 151 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _66 = inter;
  _67 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_66)) ^ (((uint32_t)(uint16_t)_67)))));
#line 154 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _68 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)4)])));
  _69 = *(uint8_t*)(((&(&cle)->array[((int64_t)10)])));
  _70 = *(uint8_t*)(((&(&cle)->array[((int64_t)11)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)5)]))) = (((uint16_t)((((uint32_t)(uint16_t)_68)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_69)), 256)), (((uint32_t)(uint8_t)_70)))))));
#line 156 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _71 = code();
#line 158 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _72 = inter;
  _73 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_72)) ^ (((uint32_t)(uint16_t)_73)))));
#line 161 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _74 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)5)])));
  _75 = *(uint8_t*)(((&(&cle)->array[((int64_t)12)])));
  _76 = *(uint8_t*)(((&(&cle)->array[((int64_t)13)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)6)]))) = (((uint16_t)((((uint32_t)(uint16_t)_74)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_75)), 256)), (((uint32_t)(uint8_t)_76)))))));
#line 163 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _77 = code();
#line 165 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _78 = inter;
  _79 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_78)) ^ (((uint32_t)(uint16_t)_79)))));
#line 168 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _80 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)6)])));
  _81 = *(uint8_t*)(((&(&cle)->array[((int64_t)14)])));
  _82 = *(uint8_t*)(((&(&cle)->array[((int64_t)15)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)7)]))) = (((uint16_t)((((uint32_t)(uint16_t)_80)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_81)), 256)), (((uint32_t)(uint8_t)_82)))))));
#line 170 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _83 = code();
#line 172 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _84 = inter;
  _85 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_84)) ^ (((uint32_t)(uint16_t)_85)))));
#line 175 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _86 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)7)])));
  _87 = *(uint8_t*)(((&(&cle)->array[((int64_t)16)])));
  _88 = *(uint8_t*)(((&(&cle)->array[((int64_t)17)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)8)]))) = (((uint16_t)((((uint32_t)(uint16_t)_86)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_87)), 256)), (((uint32_t)(uint8_t)_88)))))));
#line 177 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _89 = code();
#line 179 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _90 = inter;
  _91 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_90)) ^ (((uint32_t)(uint16_t)_91)))));
#line 182 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _92 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)8)])));
  _93 = *(uint8_t*)(((&(&cle)->array[((int64_t)18)])));
  _94 = *(uint8_t*)(((&(&cle)->array[((int64_t)19)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)9)]))) = (((uint16_t)((((uint32_t)(uint16_t)_92)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_93)), 256)), (((uint32_t)(uint8_t)_94)))))));
#line 184 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _95 = code();
#line 186 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _96 = inter;
  _97 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_96)) ^ (((uint32_t)(uint16_t)_97)))));
#line 189 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _98 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)9)])));
  _99 = *(uint8_t*)(((&(&cle)->array[((int64_t)20)])));
  _100 = *(uint8_t*)(((&(&cle)->array[((int64_t)21)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)10)]))) = (((uint16_t)((((uint32_t)(uint16_t)_98)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_99)), 256)), (((uint32_t)(uint8_t)_100)))))));
#line 191 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _101 = code();
#line 193 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _102 = inter;
  _103 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_102)) ^ (((uint32_t)(uint16_t)_103)))));
#line 196 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _104 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)10)])));
  _105 = *(uint8_t*)(((&(&cle)->array[((int64_t)22)])));
  _106 = *(uint8_t*)(((&(&cle)->array[((int64_t)23)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)11)]))) = (((uint16_t)((((uint32_t)(uint16_t)_104)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_105)), 256)), (((uint32_t)(uint8_t)_106)))))));
#line 198 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _107 = code();
#line 200 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _108 = inter;
  _109 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_108)) ^ (((uint32_t)(uint16_t)_109)))));
#line 203 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _110 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)11)])));
  _111 = *(uint8_t*)(((&(&cle)->array[((int64_t)24)])));
  _112 = *(uint8_t*)(((&(&cle)->array[((int64_t)25)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)12)]))) = (((uint16_t)((((uint32_t)(uint16_t)_110)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_111)), 256)), (((uint32_t)(uint8_t)_112)))))));
#line 205 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _113 = code();
#line 207 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _114 = inter;
  _115 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_114)) ^ (((uint32_t)(uint16_t)_115)))));
#line 210 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _116 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)12)])));
  _117 = *(uint8_t*)(((&(&cle)->array[((int64_t)26)])));
  _118 = *(uint8_t*)(((&(&cle)->array[((int64_t)27)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)13)]))) = (((uint16_t)((((uint32_t)(uint16_t)_116)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_117)), 256)), (((uint32_t)(uint8_t)_118)))))));
#line 212 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _119 = code();
#line 214 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _120 = inter;
  _121 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_120)) ^ (((uint32_t)(uint16_t)_121)))));
#line 217 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _122 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)13)])));
  _123 = *(uint8_t*)(((&(&cle)->array[((int64_t)28)])));
  _124 = *(uint8_t*)(((&(&cle)->array[((int64_t)29)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)14)]))) = (((uint16_t)((((uint32_t)(uint16_t)_122)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_123)), 256)), (((uint32_t)(uint8_t)_124)))))));
#line 219 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _125 = code();
#line 221 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _126 = inter;
  _127 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_126)) ^ (((uint32_t)(uint16_t)_127)))));
#line 224 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _128 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)14)])));
  _129 = *(uint8_t*)(((&(&cle)->array[((int64_t)30)])));
  _130 = *(uint8_t*)(((&(&cle)->array[((int64_t)31)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)15)]))) = (((uint16_t)((((uint32_t)(uint16_t)_128)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_129)), 256)), (((uint32_t)(uint8_t)_130)))))));
#line 226 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _131 = code();
#line 228 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _132 = inter;
  _133 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_132)) ^ (((uint32_t)(uint16_t)_133)))));
#line 231 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  i = 0;
  return 0;
}


uint32_t my_rand_r(void* _134) {
  void* _135;    /* Address-exposed local */
  uint32_t _136;    /* Address-exposed local */
  void* _137;
  uint32_t _138;
  uint32_t _139;
  void* _140;
  uint32_t _141;

  _135 = _134;
#line 239 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
#line 242 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _137 = _135;
  _138 = *(uint32_t*)_137;
  _136 = (llvm_add_u32((llvm_mul_u32(_138, 1664525)), 1013904223));
#line 243 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _139 = _136;
  _140 = _135;
  *(uint32_t*)_140 = _139;
#line 244 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _141 = _136;
  return ((llvm_lshr_u32(_141, 16)) & 32767);
}


void d_pc1(void* _142) {
  void* _143;    /* Address-exposed local */
  uint32_t _144;    /* Address-exposed local */
  uint32_t _145;    /* Address-exposed local */
  uint32_t _146;    /* Address-exposed local */
  void* _147;
  uint32_t _148;
  void* _149;
  uint64_t _150;
  uint64_t _151;
  uint32_t _152;
  uint32_t _153;
  uint32_t _154;
  uint8_t _155;
  uint32_t _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t _159;
  uint32_t _160;
  uint32_t _161;
  uint16_t _162;
  uint16_t _163;
  uint16_t _164;
  uint16_t _165;
  uint8_t _166;
  uint16_t _167;
  uint16_t _168;
  uint16_t _169;
  uint16_t _170;
  uint16_t _171;
  uint16_t _172;
  uint16_t _173;
  uint16_t _174;

  _143 = _142;
#line 248 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
#line 250 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _147 = _143;
  _148 = *(uint32_t*)_147;
  _144 = _148;
#line 251 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
#line 252 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  ;
  _146 = 1;
#line 255 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  si = 0;
#line 257 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  x1a2 = 0;
#line 259 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  i = 0;
#line 267 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _149 = memcpy((&cle), (&_OC_str_OC_2), 32);
#line 274 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  *(uint8_t*)(((&(&buff)->array[((int64_t)1)]))) = 0;
#line 277 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _150 = strlen((&buff));
  if ((((uint64_t)_150) > ((uint64_t)UINT64_C(32)))) {
    goto _175;
  } else {
    goto _176;
  }

_175:
#line 280 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  count = 32;
  goto _177;

_176:
#line 285 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _151 = strlen((&buff));
  count = (((uint32_t)_151));
  goto _177;

_177:
#line 288 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  c1 = 0;
  goto _178;

  do {     /* Syntactic loop '' to make GCC happy */
_178:
  _152 = c1;
  _153 = count;
  if ((((int32_t)_152) < ((int32_t)_153))) {
    goto _179;
  } else {
    goto _180;
  }

_179:
#line 292 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _154 = c1;
  _155 = *(uint8_t*)(((&(&buff)->array[((int64_t)(((int64_t)(int32_t)_154)))])));
  _156 = c1;
  *(uint8_t*)(((&(&cle)->array[((int64_t)(((int64_t)(int32_t)_156)))]))) = _155;
  goto _181;

_181:
#line 288 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _157 = c1;
  c1 = (llvm_add_u32(_157, 1));
  goto _178;

  } while (1); /* end of syntactic loop '' */
_180:
#line 296 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _145 = 0;
  goto _182;

  do {     /* Syntactic loop '' to make GCC happy */
_182:
#line 297 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _158 = _144;
  _159 = llvm_add_u32(_158, -1);
  _144 = _159;
  if ((_159 != 0u)) {
    goto _183;
  } else {
    goto _184;
  }

_183:
#line 298 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _160 = my_rand_r((&_146));
  c = (((uint16_t)_160));
#line 299 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _161 = assemble();
#line 301 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _162 = inter;
  cfc = (((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_162)), 8))));
#line 303 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _163 = inter;
  cfd = (((uint16_t)((((uint32_t)(uint16_t)_163)) & 255)));
#line 312 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  compte = 0;
  goto _185;

  do {     /* Syntactic loop '' to make GCC happy */
_185:
  _164 = compte;
  if ((((int32_t)(((uint32_t)(uint16_t)_164))) <= ((int32_t)31u))) {
    goto _186;
  } else {
    goto _187;
  }

_186:
#line 317 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _165 = compte;
  _166 = *(uint8_t*)(((&(&cle)->array[((int64_t)(((uint64_t)(uint16_t)_165)))])));
  _167 = c;
  _168 = compte;
  *(uint8_t*)(((&(&cle)->array[((int64_t)(((uint64_t)(uint16_t)_168)))]))) = (((uint8_t)((((uint32_t)(uint8_t)_166)) ^ (((int32_t)(int16_t)_167)))));
  goto _188;

_188:
#line 312 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _169 = compte;
  compte = (llvm_add_u16(_169, 1));
  goto _185;

  } while (1); /* end of syntactic loop '' */
_187:
#line 321 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _170 = c;
  _171 = cfc;
  _172 = cfd;
  c = (((uint16_t)((((int32_t)(int16_t)_170)) ^ ((((uint32_t)(uint16_t)_171)) ^ (((uint32_t)(uint16_t)_172))))));
#line 325 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _173 = c;
  d = (((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_173)), 4))));
#line 328 "/home/yxk/test-sgx/SGX-test/pc1/pc1cod.c"
  _174 = c;
  e = (((uint16_t)((((int32_t)(int16_t)_174)) & 15)));
  goto _182;

  } while (1); /* end of syntactic loop '' */
_184:
  return;
}


