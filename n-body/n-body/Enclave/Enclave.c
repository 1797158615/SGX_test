#include "../Include/n-body.h"
#include "Enclave.h"
#include "Enclave_t.h"


void advance(uint32_t _1, void* _2, double _3) {
  uint32_t _4;    /* Address-exposed local */
  void* _5;    /* Address-exposed local */
  double _6;    /* Address-exposed local */
  uint32_t _7;    /* Address-exposed local */
  uint32_t _8;    /* Address-exposed local */
  void* _9;    /* Address-exposed local */
  void* _10;    /* Address-exposed local */
  double _11;    /* Address-exposed local */
  double _12;    /* Address-exposed local */
  double _13;    /* Address-exposed local */
  double _14;    /* Address-exposed local */
  double _15;    /* Address-exposed local */
  void* _16;    /* Address-exposed local */
  uint32_t _17;
  uint32_t _18;
  void* _19;
  uint32_t _20;
  uint32_t _21;
  uint32_t _22;
  uint32_t _23;
  void* _24;
  uint32_t _25;
  void* _26;
  double _27;
  void* _28;
  double _29;
  void* _30;
  double _31;
  void* _32;
  double _33;
  void* _34;
  double _35;
  void* _36;
  double _37;
  double _38;
  double _39;
  double _40;
  double _41;
  double _42;
  double _43;
  double _44;
  double _45;
  double _46;
  double _47;
  double _48;
  double _49;
  double _50;
  double _51;
  void* _52;
  double _53;
  double _54;
  void* _55;
  void* _56;
  double _57;
  double _58;
  double _59;
  void* _60;
  double _61;
  double _62;
  void* _63;
  void* _64;
  double _65;
  double _66;
  double _67;
  void* _68;
  double _69;
  double _70;
  void* _71;
  void* _72;
  double _73;
  double _74;
  double _75;
  void* _76;
  double _77;
  double _78;
  void* _79;
  void* _80;
  double _81;
  double _82;
  double _83;
  void* _84;
  double _85;
  double _86;
  void* _87;
  void* _88;
  double _89;
  double _90;
  double _91;
  void* _92;
  double _93;
  double _94;
  void* _95;
  void* _96;
  double _97;
  double _98;
  uint32_t _99;
  uint32_t _100;
  uint32_t _101;
  uint32_t _102;
  void* _103;
  uint32_t _104;
  double _105;
  void* _106;
  double _107;
  void* _108;
  void* _109;
  double _110;
  double _111;
  double _112;
  void* _113;
  double _114;
  void* _115;
  void* _116;
  double _117;
  double _118;
  double _119;
  void* _120;
  double _121;
  void* _122;
  void* _123;
  double _124;
  double _125;
  uint32_t _126;

  _4 = _1;
#line 25 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _5 = _2;
  ;
  _6 = _3;
  ;
#line 27 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  ;
#line 29 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _7 = 0;
  goto _127;

  do {     /* Syntactic loop '' to make GCC happy */
_127:
  _17 = _7;
  _18 = _4;
  if ((((int32_t)_17) < ((int32_t)_18))) {
    goto _128;
  } else {
    goto _129;
  }

_128:
#line 30 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _19 = _5;
  _20 = _7;
  _9 = (((&((struct l_struct_struct_OC_planet*)_19)[((int64_t)(((int64_t)(int32_t)_20)))])));
#line 31 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _21 = _7;
  _8 = (llvm_add_u32(_21, 1));
  goto _130;

  do {     /* Syntactic loop '' to make GCC happy */
_130:
  _22 = _8;
  _23 = _4;
  if ((((int32_t)_22) < ((int32_t)_23))) {
    goto _131;
  } else {
    goto _132;
  }

_131:
#line 32 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _24 = _5;
  _25 = _8;
  _10 = (((&((struct l_struct_struct_OC_planet*)_24)[((int64_t)(((int64_t)(int32_t)_25)))])));
#line 33 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _26 = _9;
  _27 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_26)->field0))));
  _28 = _10;
  _29 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_28)->field0))));
  _11 = (_27 - _29);
#line 34 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _30 = _9;
  _31 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_30)->field1))));
  _32 = _10;
  _33 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_32)->field1))));
  _12 = (_31 - _33);
#line 35 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _34 = _9;
  _35 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_34)->field2))));
  _36 = _10;
  _37 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_36)->field2))));
  _13 = (_35 - _37);
#line 36 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _38 = _11;
  _39 = _11;
  _40 = _12;
  _41 = _12;
  _42 = llvm_OC_fmuladd_OC_f64(_38, _39, (_40 * _41));
  _43 = _13;
  _44 = _13;
  _45 = llvm_OC_fmuladd_OC_f64(_43, _44, _42);
  _46 = sqrt(_45);
  _14 = _46;
#line 37 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _47 = _6;
  _48 = _14;
  _49 = _14;
  _50 = _14;
  _15 = (_47 / ((_48 * _49) * _50));
#line 38 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _51 = _11;
  _52 = _10;
  _53 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_52)->field6))));
  _54 = _15;
  _55 = _9;
  _56 = ((&(((struct l_struct_struct_OC_planet*)_55)->field3)));
  _57 = *(double*)_56;
  _58 = llvm_OC_fmuladd_OC_f64((-((_51 * _53))), _54, _57);
  *(double*)_56 = _58;
#line 39 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _59 = _12;
  _60 = _10;
  _61 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_60)->field6))));
  _62 = _15;
  _63 = _9;
  _64 = ((&(((struct l_struct_struct_OC_planet*)_63)->field4)));
  _65 = *(double*)_64;
  _66 = llvm_OC_fmuladd_OC_f64((-((_59 * _61))), _62, _65);
  *(double*)_64 = _66;
#line 40 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _67 = _13;
  _68 = _10;
  _69 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_68)->field6))));
  _70 = _15;
  _71 = _9;
  _72 = ((&(((struct l_struct_struct_OC_planet*)_71)->field5)));
  _73 = *(double*)_72;
  _74 = llvm_OC_fmuladd_OC_f64((-((_67 * _69))), _70, _73);
  *(double*)_72 = _74;
#line 41 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _75 = _11;
  _76 = _9;
  _77 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_76)->field6))));
  _78 = _15;
  _79 = _10;
  _80 = ((&(((struct l_struct_struct_OC_planet*)_79)->field3)));
  _81 = *(double*)_80;
  _82 = llvm_OC_fmuladd_OC_f64((_75 * _77), _78, _81);
  *(double*)_80 = _82;
#line 42 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _83 = _12;
  _84 = _9;
  _85 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_84)->field6))));
  _86 = _15;
  _87 = _10;
  _88 = ((&(((struct l_struct_struct_OC_planet*)_87)->field4)));
  _89 = *(double*)_88;
  _90 = llvm_OC_fmuladd_OC_f64((_83 * _85), _86, _89);
  *(double*)_88 = _90;
#line 43 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _91 = _13;
  _92 = _9;
  _93 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_92)->field6))));
  _94 = _15;
  _95 = _10;
  _96 = ((&(((struct l_struct_struct_OC_planet*)_95)->field5)));
  _97 = *(double*)_96;
  _98 = llvm_OC_fmuladd_OC_f64((_91 * _93), _94, _97);
  *(double*)_96 = _98;
  goto _133;

_133:
#line 31 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _99 = _8;
  _8 = (llvm_add_u32(_99, 1));
  goto _130;

  } while (1); /* end of syntactic loop '' */
_132:
  goto _134;

_134:
#line 29 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _100 = _7;
  _7 = (llvm_add_u32(_100, 1));
  goto _127;

  } while (1); /* end of syntactic loop '' */
_129:
#line 46 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _7 = 0;
  goto _135;

  do {     /* Syntactic loop '' to make GCC happy */
_135:
  _101 = _7;
  _102 = _4;
  if ((((int32_t)_101) < ((int32_t)_102))) {
    goto _136;
  } else {
    goto _137;
  }

_136:
#line 47 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _103 = _5;
  _104 = _7;
  _16 = (((&((struct l_struct_struct_OC_planet*)_103)[((int64_t)(((int64_t)(int32_t)_104)))])));
#line 48 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _105 = _6;
  _106 = _16;
  _107 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_106)->field3))));
  _108 = _16;
  _109 = ((&(((struct l_struct_struct_OC_planet*)_108)->field0)));
  _110 = *(double*)_109;
  _111 = llvm_OC_fmuladd_OC_f64(_105, _107, _110);
  *(double*)_109 = _111;
#line 49 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _112 = _6;
  _113 = _16;
  _114 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_113)->field4))));
  _115 = _16;
  _116 = ((&(((struct l_struct_struct_OC_planet*)_115)->field1)));
  _117 = *(double*)_116;
  _118 = llvm_OC_fmuladd_OC_f64(_112, _114, _117);
  *(double*)_116 = _118;
#line 50 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _119 = _6;
  _120 = _16;
  _121 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_120)->field5))));
  _122 = _16;
  _123 = ((&(((struct l_struct_struct_OC_planet*)_122)->field2)));
  _124 = *(double*)_123;
  _125 = llvm_OC_fmuladd_OC_f64(_119, _121, _124);
  *(double*)_123 = _125;
  goto _138;

_138:
#line 46 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _126 = _7;
  _7 = (llvm_add_u32(_126, 1));
  goto _135;

  } while (1); /* end of syntactic loop '' */
_137:
  return;
}


double energy(uint32_t _139, void* _140) {
  uint32_t _141;    /* Address-exposed local */
  void* _142;    /* Address-exposed local */
  double _143;    /* Address-exposed local */
  uint32_t _144;    /* Address-exposed local */
  uint32_t _145;    /* Address-exposed local */
  void* _146;    /* Address-exposed local */
  void* _147;    /* Address-exposed local */
  double _148;    /* Address-exposed local */
  double _149;    /* Address-exposed local */
  double _150;    /* Address-exposed local */
  double _151;    /* Address-exposed local */
  uint32_t _152;
  uint32_t _153;
  void* _154;
  uint32_t _155;
  void* _156;
  double _157;
  void* _158;
  double _159;
  void* _160;
  double _161;
  void* _162;
  double _163;
  void* _164;
  double _165;
  double _166;
  void* _167;
  double _168;
  void* _169;
  double _170;
  double _171;
  double _172;
  double _173;
  uint32_t _174;
  uint32_t _175;
  uint32_t _176;
  void* _177;
  uint32_t _178;
  void* _179;
  double _180;
  void* _181;
  double _182;
  void* _183;
  double _184;
  void* _185;
  double _186;
  void* _187;
  double _188;
  void* _189;
  double _190;
  double _191;
  double _192;
  double _193;
  double _194;
  double _195;
  double _196;
  double _197;
  double _198;
  double _199;
  void* _200;
  double _201;
  void* _202;
  double _203;
  double _204;
  double _205;
  uint32_t _206;
  uint32_t _207;
  double _208;

  _141 = _139;
#line 55 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _142 = _140;
  ;
#line 57 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
#line 58 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  ;
#line 60 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _143 = 0;
#line 61 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _144 = 0;
  goto _209;

  do {     /* Syntactic loop '' to make GCC happy */
_209:
  _152 = _144;
  _153 = _141;
  if ((((int32_t)_152) < ((int32_t)_153))) {
    goto _210;
  } else {
    goto _211;
  }

_210:
#line 62 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _154 = _142;
  _155 = _144;
  _146 = (((&((struct l_struct_struct_OC_planet*)_154)[((int64_t)(((int64_t)(int32_t)_155)))])));
#line 63 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _156 = _146;
  _157 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_156)->field6))));
  _158 = _146;
  _159 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_158)->field3))));
  _160 = _146;
  _161 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_160)->field3))));
  _162 = _146;
  _163 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_162)->field4))));
  _164 = _146;
  _165 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_164)->field4))));
  _166 = llvm_OC_fmuladd_OC_f64(_159, _161, (_163 * _165));
  _167 = _146;
  _168 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_167)->field5))));
  _169 = _146;
  _170 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_169)->field5))));
  _171 = llvm_OC_fmuladd_OC_f64(_168, _170, _166);
  _172 = _143;
  _173 = llvm_OC_fmuladd_OC_f64((0.5 * _157), _171, _172);
  _143 = _173;
#line 64 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _174 = _144;
  _145 = (llvm_add_u32(_174, 1));
  goto _212;

  do {     /* Syntactic loop '' to make GCC happy */
_212:
  _175 = _145;
  _176 = _141;
  if ((((int32_t)_175) < ((int32_t)_176))) {
    goto _213;
  } else {
    goto _214;
  }

_213:
#line 65 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _177 = _142;
  _178 = _145;
  _147 = (((&((struct l_struct_struct_OC_planet*)_177)[((int64_t)(((int64_t)(int32_t)_178)))])));
#line 66 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _179 = _146;
  _180 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_179)->field0))));
  _181 = _147;
  _182 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_181)->field0))));
  _148 = (_180 - _182);
#line 67 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _183 = _146;
  _184 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_183)->field1))));
  _185 = _147;
  _186 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_185)->field1))));
  _149 = (_184 - _186);
#line 68 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _187 = _146;
  _188 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_187)->field2))));
  _189 = _147;
  _190 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_189)->field2))));
  _150 = (_188 - _190);
#line 69 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _191 = _148;
  _192 = _148;
  _193 = _149;
  _194 = _149;
  _195 = llvm_OC_fmuladd_OC_f64(_191, _192, (_193 * _194));
  _196 = _150;
  _197 = _150;
  _198 = llvm_OC_fmuladd_OC_f64(_196, _197, _195);
  _199 = sqrt(_198);
  _151 = _199;
#line 70 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _200 = _146;
  _201 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_200)->field6))));
  _202 = _147;
  _203 = *(double*)(((&(((struct l_struct_struct_OC_planet*)_202)->field6))));
  _204 = _151;
  _205 = _143;
  _143 = (_205 - ((_201 * _203) / _204));
  goto _215;

_215:
#line 64 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _206 = _145;
  _145 = (llvm_add_u32(_206, 1));
  goto _212;

  } while (1); /* end of syntactic loop '' */
_214:
  goto _216;

_216:
#line 61 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _207 = _144;
  _144 = (llvm_add_u32(_207, 1));
  goto _209;

  } while (1); /* end of syntactic loop '' */
_211:
#line 73 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _208 = _143;
  return _208;
}


void offset_momentum(uint32_t _217, void* _218) {
  uint32_t _219;    /* Address-exposed local */
  void* _220;    /* Address-exposed local */
  double _221;    /* Address-exposed local */
  double _222;    /* Address-exposed local */
  double _223;    /* Address-exposed local */
  uint32_t _224;    /* Address-exposed local */
  uint32_t _225;
  uint32_t _226;
  void* _227;
  uint32_t _228;
  double _229;
  void* _230;
  uint32_t _231;
  double _232;
  double _233;
  double _234;
  void* _235;
  uint32_t _236;
  double _237;
  void* _238;
  uint32_t _239;
  double _240;
  double _241;
  double _242;
  void* _243;
  uint32_t _244;
  double _245;
  void* _246;
  uint32_t _247;
  double _248;
  double _249;
  double _250;
  uint32_t _251;
  double _252;
  void* _253;
  double _254;
  void* _255;
  double _256;
  void* _257;

  _219 = _217;
#line 77 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _220 = _218;
  ;
#line 79 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _221 = 0;
  ;
  _222 = 0;
  ;
  _223 = 0;
#line 80 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
#line 81 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _224 = 0;
  goto _258;

  do {     /* Syntactic loop '' to make GCC happy */
_258:
  _225 = _224;
  _226 = _219;
  if ((((int32_t)_225) < ((int32_t)_226))) {
    goto _259;
  } else {
    goto _260;
  }

_259:
#line 82 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _227 = _220;
  _228 = _224;
  _229 = *(double*)(((&(((struct l_struct_struct_OC_planet*)(((&((struct l_struct_struct_OC_planet*)_227)[((int64_t)(((int64_t)(int32_t)_228)))]))))->field3))));
  _230 = _220;
  _231 = _224;
  _232 = *(double*)(((&(((struct l_struct_struct_OC_planet*)(((&((struct l_struct_struct_OC_planet*)_230)[((int64_t)(((int64_t)(int32_t)_231)))]))))->field6))));
  _233 = _221;
  _234 = llvm_OC_fmuladd_OC_f64(_229, _232, _233);
  _221 = _234;
#line 83 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _235 = _220;
  _236 = _224;
  _237 = *(double*)(((&(((struct l_struct_struct_OC_planet*)(((&((struct l_struct_struct_OC_planet*)_235)[((int64_t)(((int64_t)(int32_t)_236)))]))))->field4))));
  _238 = _220;
  _239 = _224;
  _240 = *(double*)(((&(((struct l_struct_struct_OC_planet*)(((&((struct l_struct_struct_OC_planet*)_238)[((int64_t)(((int64_t)(int32_t)_239)))]))))->field6))));
  _241 = _222;
  _242 = llvm_OC_fmuladd_OC_f64(_237, _240, _241);
  _222 = _242;
#line 84 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _243 = _220;
  _244 = _224;
  _245 = *(double*)(((&(((struct l_struct_struct_OC_planet*)(((&((struct l_struct_struct_OC_planet*)_243)[((int64_t)(((int64_t)(int32_t)_244)))]))))->field5))));
  _246 = _220;
  _247 = _224;
  _248 = *(double*)(((&(((struct l_struct_struct_OC_planet*)(((&((struct l_struct_struct_OC_planet*)_246)[((int64_t)(((int64_t)(int32_t)_247)))]))))->field6))));
  _249 = _223;
  _250 = llvm_OC_fmuladd_OC_f64(_245, _248, _249);
  _223 = _250;
  goto _261;

_261:
#line 81 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _251 = _224;
  _224 = (llvm_add_u32(_251, 1));
  goto _258;

  } while (1); /* end of syntactic loop '' */
_260:
#line 86 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _252 = _221;
  _253 = _220;
  *(double*)(((&(((struct l_struct_struct_OC_planet*)((((struct l_struct_struct_OC_planet*)_253))))->field3)))) = ((-(_252)) / 39.478417604357432);
#line 87 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _254 = _222;
  _255 = _220;
  *(double*)(((&(((struct l_struct_struct_OC_planet*)((((struct l_struct_struct_OC_planet*)_255))))->field4)))) = ((-(_254)) / 39.478417604357432);
#line 88 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _256 = _223;
  _257 = _220;
  *(double*)(((&(((struct l_struct_struct_OC_planet*)((((struct l_struct_struct_OC_planet*)_257))))->field5)))) = ((-(_256)) / 39.478417604357432);
}


void d_n(void* _262, void* _263) {
  void* _264;    /* Address-exposed local */
  void* _265;    /* Address-exposed local */
  uint32_t _266;    /* Address-exposed local */
  uint32_t _267;    /* Address-exposed local */
  double _268;
  void* _269;
  uint32_t _270;
  uint32_t _271;
  uint32_t _272;
  double _273;
  void* _274;

  _264 = _262;
#line 135 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _265 = _263;
  ;
#line 138 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _266 = 5000000;
#line 139 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
#line 141 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  offset_momentum(5, (&bodies));
#line 142 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _268 = energy(5, (&bodies));
  _269 = _264;
  *(double*)_269 = _268;
#line 143 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _267 = 1;
  goto _275;

  do {     /* Syntactic loop '' to make GCC happy */
_275:
  _270 = _267;
  _271 = _266;
  if ((((int32_t)_270) <= ((int32_t)_271))) {
    goto _276;
  } else {
    goto _277;
  }

_276:
#line 144 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  advance(5, (&bodies), 0.01);
  goto _278;

_278:
#line 143 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _272 = _267;
  _267 = (llvm_add_u32(_272, 1));
  goto _275;

  } while (1); /* end of syntactic loop '' */
_277:
#line 145 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _273 = energy(5, (&bodies));
  _274 = _265;
  *(double*)_274 = _273;
}


