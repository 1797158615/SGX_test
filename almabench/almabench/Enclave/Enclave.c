#include "../Include/almabench.h"
#include "Enclave.h"
#include "Enclave_t.h"


double anpm(double _1) {
  double _2;    /* Address-exposed local */
  double _3;    /* Address-exposed local */
  double _4;
  double _5;
  double _6;
  double _7;
  double _8;
  double _9;
  uint64_t _10;
  double _11;

  _2 = _1;
#line 209 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
#line 211 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _4 = _2;
  _5 = fmod(_4, 6.2831853071795862);
  _3 = _5;
#line 213 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _6 = _3;
  _7 = llvm_OC_fabs_OC_f64(_6);
  if ((llvm_fcmp_oge(_7, 3.1415926535897931))) {
    goto _12;
  } else {
    goto _13;
  }

_12:
#line 214 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _8 = _3;
  _9 = _2;
  _10 = ((uint64_t)(bool)(llvm_fcmp_olt(_9, 0)));
  _3 = (_8 - (llvm_select_f64((llvm_fcmp_olt(_9, 0)), -6.2831853071795862, 6.2831853071795862)));
  goto _13;

_13:
#line 216 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _11 = _3;
  return _11;
}


void planetpv(void* _14, uint32_t _15, void* _16) {
  void* _17;    /* Address-exposed local */
  uint32_t _18;    /* Address-exposed local */
  void* _19;    /* Address-exposed local */
  uint32_t _20;    /* Address-exposed local */
  uint32_t _21;    /* Address-exposed local */
  uint32_t _22;    /* Address-exposed local */
  double _23;    /* Address-exposed local */
  double _24;    /* Address-exposed local */
  double _25;    /* Address-exposed local */
  double _26;    /* Address-exposed local */
  double _27;    /* Address-exposed local */
  double _28;    /* Address-exposed local */
  double _29;    /* Address-exposed local */
  double _30;    /* Address-exposed local */
  double _31;    /* Address-exposed local */
  double _32;    /* Address-exposed local */
  double _33;    /* Address-exposed local */
  double _34;    /* Address-exposed local */
  double _35;    /* Address-exposed local */
  double _36;    /* Address-exposed local */
  double _37;    /* Address-exposed local */
  double _38;    /* Address-exposed local */
  double _39;    /* Address-exposed local */
  double _40;    /* Address-exposed local */
  double _41;    /* Address-exposed local */
  double _42;    /* Address-exposed local */
  double _43;    /* Address-exposed local */
  double _44;    /* Address-exposed local */
  double _45;    /* Address-exposed local */
  double _46;    /* Address-exposed local */
  double _47;    /* Address-exposed local */
  double _48;    /* Address-exposed local */
  double _49;    /* Address-exposed local */
  double _50;    /* Address-exposed local */
  double _51;    /* Address-exposed local */
  double _52;    /* Address-exposed local */
  double _53;    /* Address-exposed local */
  double _54;    /* Address-exposed local */
  void* _55;
  double _56;
  void* _57;
  double _58;
  uint32_t _59;
  double _60;
  uint32_t _61;
  double _62;
  uint32_t _63;
  double _64;
  double _65;
  double _66;
  double _67;
  double _68;
  uint32_t _69;
  double _70;
  uint32_t _71;
  double _72;
  uint32_t _73;
  double _74;
  double _75;
  double _76;
  double _77;
  double _78;
  uint32_t _79;
  double _80;
  uint32_t _81;
  double _82;
  uint32_t _83;
  double _84;
  double _85;
  double _86;
  double _87;
  double _88;
  uint32_t _89;
  double _90;
  uint32_t _91;
  double _92;
  uint32_t _93;
  double _94;
  double _95;
  double _96;
  double _97;
  double _98;
  double _99;
  uint32_t _100;
  double _101;
  uint32_t _102;
  double _103;
  uint32_t _104;
  double _105;
  double _106;
  double _107;
  double _108;
  double _109;
  uint32_t _110;
  double _111;
  uint32_t _112;
  double _113;
  uint32_t _114;
  double _115;
  double _116;
  double _117;
  double _118;
  double _119;
  double _120;
  double _121;
  uint32_t _122;
  uint32_t _123;
  uint32_t _124;
  double _125;
  double _126;
  uint32_t _127;
  uint32_t _128;
  double _129;
  double _130;
  double _131;
  uint32_t _132;
  uint32_t _133;
  double _134;
  double _135;
  double _136;
  uint32_t _137;
  uint32_t _138;
  double _139;
  double _140;
  double _141;
  double _142;
  double _143;
  double _144;
  uint32_t _145;
  uint32_t _146;
  double _147;
  double _148;
  double _149;
  uint32_t _150;
  uint32_t _151;
  double _152;
  double _153;
  double _154;
  double _155;
  double _156;
  uint32_t _157;
  uint32_t _158;
  double _159;
  double _160;
  double _161;
  double _162;
  uint32_t _163;
  double _164;
  double _165;
  double _166;
  uint32_t _167;
  double _168;
  double _169;
  double _170;
  double _171;
  double _172;
  uint32_t _173;
  uint32_t _174;
  uint32_t _175;
  double _176;
  double _177;
  double _178;
  double _179;
  uint32_t _180;
  uint32_t _181;
  double _182;
  double _183;
  double _184;
  uint32_t _185;
  uint32_t _186;
  double _187;
  double _188;
  double _189;
  double _190;
  double _191;
  uint32_t _192;
  double _193;
  double _194;
  double _195;
  double _196;
  double _197;
  double _198;
  double _199;
  double _200;
  double _201;
  double _202;
  double _203;
  double _204;
  double _205;
  double _206;
  double _207;
  double _208;
  double _209;
  double _210;
  double _211;
  double _212;
  double _213;
  uint32_t _214;
  uint32_t _215;
  double _216;
  double _217;
  double _218;
  double _219;
  double _220;
  double _221;
  double _222;
  double _223;
  double _224;
  double _225;
  double _226;
  double _227;
  double _228;
  double _229;
  double _230;
  double _231;
  uint32_t _232;
  double _233;
  double _234;
  double _235;
  double _236;
  double _237;
  double _238;
  double _239;
  double _240;
  double _241;
  double _242;
  double _243;
  double _244;
  double _245;
  double _246;
  double _247;
  double _248;
  double _249;
  double _250;
  double _251;
  double _252;
  double _253;
  double _254;
  double _255;
  double _256;
  double _257;
  double _258;
  double _259;
  double _260;
  double _261;
  double _262;
  double _263;
  double _264;
  double _265;
  double _266;
  double _267;
  double _268;
  double _269;
  double _270;
  double _271;
  double _272;
  double _273;
  double _274;
  double _275;
  double _276;
  double _277;
  double _278;
  double _279;
  double _280;
  double _281;
  double _282;
  double _283;
  double _284;
  double _285;
  double _286;
  double _287;
  double _288;
  double _289;
  double _290;
  double _291;
  void* _292;
  double _293;
  double _294;
  double _295;
  void* _296;
  double _297;
  double _298;
  double _299;
  void* _300;
  double _301;
  double _302;
  double _303;
  double _304;
  double _305;
  double _306;
  double _307;
  double _308;
  double _309;
  double _310;
  double _311;
  double _312;
  double _313;
  double _314;
  double _315;
  double _316;
  double _317;
  double _318;
  double _319;
  double _320;
  double _321;
  double _322;
  double _323;
  double _324;
  void* _325;
  double _326;
  double _327;
  double _328;
  void* _329;
  double _330;
  double _331;
  double _332;
  void* _333;

  _17 = _14;
#line 223 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _18 = _15;
  ;
  _19 = _16;
  ;
#line 226 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  ;
  ;
#line 227 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
#line 228 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
#line 229 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
#line 232 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _55 = _17;
  _56 = *(double*)((((double*)_55)));
  _57 = _17;
  _58 = *(double*)(((&((double*)_57)[((int64_t)1)])));
  _23 = (((_56 - 2451545) + _58) / 365250);
#line 235 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _59 = _18;
  _60 = *(double*)(((&((struct l_array_3_double*)(((&(&a)->array[((int64_t)(((int64_t)(int32_t)_59)))]))))->array[((int64_t)0)])));
  _61 = _18;
  _62 = *(double*)(((&((struct l_array_3_double*)(((&(&a)->array[((int64_t)(((int64_t)(int32_t)_61)))]))))->array[((int64_t)1)])));
  _63 = _18;
  _64 = *(double*)(((&((struct l_array_3_double*)(((&(&a)->array[((int64_t)(((int64_t)(int32_t)_63)))]))))->array[((int64_t)2)])));
  _65 = _23;
  _66 = llvm_OC_fmuladd_OC_f64(_64, _65, _62);
  _67 = _23;
  _68 = llvm_OC_fmuladd_OC_f64(_66, _67, _60);
  _24 = _68;
#line 236 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _69 = _18;
  _70 = *(double*)(((&((struct l_array_3_double*)(((&(&dlm)->array[((int64_t)(((int64_t)(int32_t)_69)))]))))->array[((int64_t)0)])));
  _71 = _18;
  _72 = *(double*)(((&((struct l_array_3_double*)(((&(&dlm)->array[((int64_t)(((int64_t)(int32_t)_71)))]))))->array[((int64_t)1)])));
  _73 = _18;
  _74 = *(double*)(((&((struct l_array_3_double*)(((&(&dlm)->array[((int64_t)(((int64_t)(int32_t)_73)))]))))->array[((int64_t)2)])));
  _75 = _23;
  _76 = llvm_OC_fmuladd_OC_f64(_74, _75, _72);
  _77 = _23;
  _78 = llvm_OC_fmuladd_OC_f64(3600, _70, (_76 * _77));
  _25 = (_78 * 4.8481368110953598E-6);
#line 237 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _79 = _18;
  _80 = *(double*)(((&((struct l_array_3_double*)(((&(&e)->array[((int64_t)(((int64_t)(int32_t)_79)))]))))->array[((int64_t)0)])));
  _81 = _18;
  _82 = *(double*)(((&((struct l_array_3_double*)(((&(&e)->array[((int64_t)(((int64_t)(int32_t)_81)))]))))->array[((int64_t)1)])));
  _83 = _18;
  _84 = *(double*)(((&((struct l_array_3_double*)(((&(&e)->array[((int64_t)(((int64_t)(int32_t)_83)))]))))->array[((int64_t)2)])));
  _85 = _23;
  _86 = llvm_OC_fmuladd_OC_f64(_84, _85, _82);
  _87 = _23;
  _88 = llvm_OC_fmuladd_OC_f64(_86, _87, _80);
  _26 = _88;
#line 238 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _89 = _18;
  _90 = *(double*)(((&((struct l_array_3_double*)(((&(&pi)->array[((int64_t)(((int64_t)(int32_t)_89)))]))))->array[((int64_t)0)])));
  _91 = _18;
  _92 = *(double*)(((&((struct l_array_3_double*)(((&(&pi)->array[((int64_t)(((int64_t)(int32_t)_91)))]))))->array[((int64_t)1)])));
  _93 = _18;
  _94 = *(double*)(((&((struct l_array_3_double*)(((&(&pi)->array[((int64_t)(((int64_t)(int32_t)_93)))]))))->array[((int64_t)2)])));
  _95 = _23;
  _96 = llvm_OC_fmuladd_OC_f64(_94, _95, _92);
  _97 = _23;
  _98 = llvm_OC_fmuladd_OC_f64(3600, _90, (_96 * _97));
  _99 = anpm((_98 * 4.8481368110953598E-6));
  _27 = _99;
#line 239 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _100 = _18;
  _101 = *(double*)(((&((struct l_array_3_double*)(((&(&dinc)->array[((int64_t)(((int64_t)(int32_t)_100)))]))))->array[((int64_t)0)])));
  _102 = _18;
  _103 = *(double*)(((&((struct l_array_3_double*)(((&(&dinc)->array[((int64_t)(((int64_t)(int32_t)_102)))]))))->array[((int64_t)1)])));
  _104 = _18;
  _105 = *(double*)(((&((struct l_array_3_double*)(((&(&dinc)->array[((int64_t)(((int64_t)(int32_t)_104)))]))))->array[((int64_t)2)])));
  _106 = _23;
  _107 = llvm_OC_fmuladd_OC_f64(_105, _106, _103);
  _108 = _23;
  _109 = llvm_OC_fmuladd_OC_f64(3600, _101, (_107 * _108));
  _28 = (_109 * 4.8481368110953598E-6);
#line 240 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _110 = _18;
  _111 = *(double*)(((&((struct l_array_3_double*)(((&(&omega)->array[((int64_t)(((int64_t)(int32_t)_110)))]))))->array[((int64_t)0)])));
  _112 = _18;
  _113 = *(double*)(((&((struct l_array_3_double*)(((&(&omega)->array[((int64_t)(((int64_t)(int32_t)_112)))]))))->array[((int64_t)1)])));
  _114 = _18;
  _115 = *(double*)(((&((struct l_array_3_double*)(((&(&omega)->array[((int64_t)(((int64_t)(int32_t)_114)))]))))->array[((int64_t)2)])));
  _116 = _23;
  _117 = llvm_OC_fmuladd_OC_f64(_115, _116, _113);
  _118 = _23;
  _119 = llvm_OC_fmuladd_OC_f64(3600, _111, (_117 * _118));
  _120 = anpm((_119 * 4.8481368110953598E-6));
  _29 = _120;
#line 243 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _121 = _23;
  _30 = (0.35953619999999997 * _121);
#line 245 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _22 = 0;
  goto _334;

  do {     /* Syntactic loop '' to make GCC happy */
_334:
  _122 = _22;
  if ((((int32_t)_122) < ((int32_t)8u))) {
    goto _335;
  } else {
    goto _336;
  }

_335:
#line 247 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _123 = _18;
  _124 = _22;
  _125 = *(double*)(((&((struct l_array_9_double*)(((&(&kp)->array[((int64_t)(((int64_t)(int32_t)_123)))]))))->array[((int64_t)(((int64_t)(int32_t)_124)))])));
  _126 = _30;
  _31 = (_125 * _126);
#line 248 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _127 = _18;
  _128 = _22;
  _129 = *(double*)(((&((struct l_array_10_double*)(((&(&kq)->array[((int64_t)(((int64_t)(int32_t)_127)))]))))->array[((int64_t)(((int64_t)(int32_t)_128)))])));
  _130 = _30;
  _32 = (_129 * _130);
#line 249 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _131 = _24;
  _132 = _18;
  _133 = _22;
  _134 = *(double*)(((&((struct l_array_9_double*)(((&(&ca)->array[((int64_t)(((int64_t)(int32_t)_132)))]))))->array[((int64_t)(((int64_t)(int32_t)_133)))])));
  _135 = _31;
  _136 = cos(_135);
  _137 = _18;
  _138 = _22;
  _139 = *(double*)(((&((struct l_array_9_double*)(((&(&sa)->array[((int64_t)(((int64_t)(int32_t)_137)))]))))->array[((int64_t)(((int64_t)(int32_t)_138)))])));
  _140 = _31;
  _141 = sin(_140);
  _142 = llvm_OC_fmuladd_OC_f64(_134, _136, (_139 * _141));
  _143 = llvm_OC_fmuladd_OC_f64(_142, 9.9999999999999995E-8, _131);
  _24 = _143;
#line 250 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _144 = _25;
  _145 = _18;
  _146 = _22;
  _147 = *(double*)(((&((struct l_array_10_double*)(((&(&cl)->array[((int64_t)(((int64_t)(int32_t)_145)))]))))->array[((int64_t)(((int64_t)(int32_t)_146)))])));
  _148 = _32;
  _149 = cos(_148);
  _150 = _18;
  _151 = _22;
  _152 = *(double*)(((&((struct l_array_10_double*)(((&(&sl)->array[((int64_t)(((int64_t)(int32_t)_150)))]))))->array[((int64_t)(((int64_t)(int32_t)_151)))])));
  _153 = _32;
  _154 = sin(_153);
  _155 = llvm_OC_fmuladd_OC_f64(_147, _149, (_152 * _154));
  _156 = llvm_OC_fmuladd_OC_f64(_155, 9.9999999999999995E-8, _144);
  _25 = _156;
  goto _337;

_337:
#line 245 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _157 = _22;
  _22 = (llvm_add_u32(_157, 1));
  goto _334;

  } while (1); /* end of syntactic loop '' */
_336:
#line 253 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _158 = _18;
  _159 = *(double*)(((&((struct l_array_9_double*)(((&(&kp)->array[((int64_t)(((int64_t)(int32_t)_158)))]))))->array[((int64_t)8)])));
  _160 = _30;
  _31 = (_159 * _160);
#line 254 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _161 = _24;
  _162 = _23;
  _163 = _18;
  _164 = *(double*)(((&((struct l_array_9_double*)(((&(&ca)->array[((int64_t)(((int64_t)(int32_t)_163)))]))))->array[((int64_t)8)])));
  _165 = _31;
  _166 = cos(_165);
  _167 = _18;
  _168 = *(double*)(((&((struct l_array_9_double*)(((&(&sa)->array[((int64_t)(((int64_t)(int32_t)_167)))]))))->array[((int64_t)8)])));
  _169 = _31;
  _170 = sin(_169);
  _171 = llvm_OC_fmuladd_OC_f64(_164, _166, (_168 * _170));
  _172 = llvm_OC_fmuladd_OC_f64((_162 * _171), 9.9999999999999995E-8, _161);
  _24 = _172;
#line 256 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _22 = 8;
  goto _338;

  do {     /* Syntactic loop '' to make GCC happy */
_338:
  _173 = _22;
  if ((((int32_t)_173) <= ((int32_t)9u))) {
    goto _339;
  } else {
    goto _340;
  }

_339:
#line 258 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _174 = _18;
  _175 = _22;
  _176 = *(double*)(((&((struct l_array_10_double*)(((&(&kq)->array[((int64_t)(((int64_t)(int32_t)_174)))]))))->array[((int64_t)(((int64_t)(int32_t)_175)))])));
  _177 = _30;
  _32 = (_176 * _177);
#line 259 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _178 = _25;
  _179 = _23;
  _180 = _18;
  _181 = _22;
  _182 = *(double*)(((&((struct l_array_10_double*)(((&(&cl)->array[((int64_t)(((int64_t)(int32_t)_180)))]))))->array[((int64_t)(((int64_t)(int32_t)_181)))])));
  _183 = _32;
  _184 = cos(_183);
  _185 = _18;
  _186 = _22;
  _187 = *(double*)(((&((struct l_array_10_double*)(((&(&sl)->array[((int64_t)(((int64_t)(int32_t)_185)))]))))->array[((int64_t)(((int64_t)(int32_t)_186)))])));
  _188 = _32;
  _189 = sin(_188);
  _190 = llvm_OC_fmuladd_OC_f64(_182, _184, (_187 * _189));
  _191 = llvm_OC_fmuladd_OC_f64((_179 * _190), 9.9999999999999995E-8, _178);
  _25 = _191;
  goto _341;

_341:
#line 256 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _192 = _22;
  _22 = (llvm_add_u32(_192, 1));
  goto _338;

  } while (1); /* end of syntactic loop '' */
_340:
#line 262 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _193 = _25;
  _194 = fmod(_193, 6.2831853071795862);
  _25 = _194;
#line 265 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _195 = _25;
  _196 = _27;
  _33 = (_195 - _196);
#line 266 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _197 = _33;
  _198 = _26;
  _199 = _33;
  _200 = sin(_199);
  _201 = llvm_OC_fmuladd_OC_f64(_198, _200, _197);
  _34 = _201;
#line 267 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _22 = 0;
  goto _342;

  do {     /* Syntactic loop '' to make GCC happy */
_342:
#line 271 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _202 = _33;
  _203 = _34;
  _204 = _26;
  _205 = _34;
  _206 = sin(_205);
  _207 = llvm_OC_fmuladd_OC_f64(_204, _206, (_202 - _203));
  _208 = _26;
  _209 = _34;
  _210 = cos(_209);
  _211 = llvm_OC_fmuladd_OC_f64((-(_208)), _210, 1);
  _35 = (_207 / _211);
#line 272 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _212 = _34;
  _213 = _35;
  _34 = (_212 + _213);
#line 273 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _214 = _22;
  _22 = (llvm_add_u32(_214, 1));
#line 275 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _215 = _22;
  if ((((int32_t)_215) >= ((int32_t)10u))) {
    goto _343;
  } else {
    goto _344;
  }

_344:
  _216 = _35;
  _217 = llvm_OC_fabs_OC_f64(_216);
  if ((llvm_fcmp_olt(_217, 9.9999999999999998E-13))) {
    goto _343;
  } else {
    goto _345;
  }

_345:
  goto _342;

  } while (1); /* end of syntactic loop '' */
_343:
  goto _346;

_346:
#line 280 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _218 = _34;
  _36 = (_218 / 2);
#line 281 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _219 = _26;
  _220 = _26;
  _221 = sqrt(((1 + _219) / (1 - _220)));
  _222 = _36;
  _223 = sin(_222);
  _224 = _36;
  _225 = cos(_224);
  _226 = atan2((_221 * _223), _225);
  _37 = (2 * _226);
#line 284 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _227 = _24;
  _228 = _26;
  _229 = _34;
  _230 = cos(_229);
  _231 = llvm_OC_fmuladd_OC_f64((-(_228)), _230, 1);
  _38 = (_227 * _231);
#line 285 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _232 = _18;
  _233 = *(double*)(((&(&amas)->array[((int64_t)(((int64_t)(int32_t)_232)))])));
  _234 = _24;
  _235 = _24;
  _236 = _24;
  _237 = sqrt(((1 + (1 / _233)) / ((_234 * _235) * _236)));
  _39 = (0.017202098950000001 * _237);
#line 287 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _238 = _28;
  _239 = sin((_238 / 2));
  _40 = _239;
#line 288 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _240 = _40;
  _241 = _29;
  _242 = cos(_241);
  _41 = (_240 * _242);
#line 289 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _243 = _40;
  _244 = _29;
  _245 = sin(_244);
  _42 = (_243 * _245);
#line 290 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _246 = _37;
  _247 = _27;
  _43 = (_246 + _247);
#line 291 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _248 = _43;
  _249 = sin(_248);
  _44 = _249;
#line 292 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _250 = _43;
  _251 = cos(_250);
  _45 = _251;
#line 293 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _252 = _42;
  _253 = _45;
  _254 = _41;
  _255 = _44;
  _256 = llvm_OC_fmuladd_OC_f64(_252, _253, (-((_254 * _255))));
  _46 = (2 * _256);
#line 294 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _257 = _24;
  _258 = _26;
  _259 = _26;
  _260 = llvm_OC_fmuladd_OC_f64((-(_258)), _259, 1);
  _261 = sqrt(_260);
  _47 = (_257 / _261);
#line 295 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _262 = _28;
  _263 = cos((_262 / 2));
  _48 = _263;
#line 296 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _264 = _26;
  _265 = _27;
  _266 = sin(_265);
  _267 = _44;
  _268 = llvm_OC_fmuladd_OC_f64(_264, _266, _267);
  _269 = _47;
  _49 = (_268 * _269);
#line 297 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _270 = _26;
  _271 = _27;
  _272 = cos(_271);
  _273 = _45;
  _274 = llvm_OC_fmuladd_OC_f64(_270, _272, _273);
  _275 = _47;
  _50 = (_274 * _275);
#line 298 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _276 = _42;
  _277 = _41;
  _51 = ((2 * _276) * _277);
#line 301 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _278 = _38;
  _279 = _45;
  _280 = _46;
  _281 = _42;
  _282 = llvm_OC_fmuladd_OC_f64((-(_280)), _281, _279);
  _52 = (_278 * _282);
#line 302 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _283 = _38;
  _284 = _44;
  _285 = _46;
  _286 = _41;
  _287 = llvm_OC_fmuladd_OC_f64(_285, _286, _284);
  _53 = (_283 * _287);
#line 303 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _288 = _38;
  _289 = _46;
  _290 = _48;
  _54 = (_288 * ((-(_289)) * _290));
#line 306 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _291 = _52;
  _292 = _19;
  *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_292))))->array[((int64_t)0)]))) = _291;
#line 307 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _293 = _53;
  _294 = _54;
  _295 = llvm_OC_fmuladd_OC_f64(_293, 0.91748206206918181, (-((_294 * 0.39777715593191371))));
  _296 = _19;
  *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_296))))->array[((int64_t)1)]))) = _295;
#line 308 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _297 = _53;
  _298 = _54;
  _299 = llvm_OC_fmuladd_OC_f64(_297, 0.39777715593191371, (_298 * 0.91748206206918181));
  _300 = _19;
  *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_300))))->array[((int64_t)2)]))) = _299;
#line 311 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _301 = _39;
  _302 = _42;
  _303 = _42;
  _304 = llvm_OC_fmuladd_OC_f64((2 * _302), _303, -1);
  _305 = _49;
  _306 = _51;
  _307 = _50;
  _308 = llvm_OC_fmuladd_OC_f64(_304, _305, (_306 * _307));
  _52 = (_301 * _308);
#line 312 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _309 = _39;
  _310 = _41;
  _311 = _41;
  _312 = llvm_OC_fmuladd_OC_f64((-((2 * _310))), _311, 1);
  _313 = _50;
  _314 = _51;
  _315 = _49;
  _316 = llvm_OC_fmuladd_OC_f64(_312, _313, (-((_314 * _315))));
  _53 = (_309 * _316);
#line 313 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _317 = _39;
  _318 = _48;
  _319 = _42;
  _320 = _49;
  _321 = _41;
  _322 = _50;
  _323 = llvm_OC_fmuladd_OC_f64(_319, _320, (_321 * _322));
  _54 = (_317 * ((2 * _318) * _323));
#line 316 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _324 = _52;
  _325 = _19;
  *(double*)(((&((struct l_array_3_double*)(((&((struct l_array_3_double*)_325)[((int64_t)1)]))))->array[((int64_t)0)]))) = _324;
#line 317 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _326 = _53;
  _327 = _54;
  _328 = llvm_OC_fmuladd_OC_f64(_326, 0.91748206206918181, (-((_327 * 0.39777715593191371))));
  _329 = _19;
  *(double*)(((&((struct l_array_3_double*)(((&((struct l_array_3_double*)_329)[((int64_t)1)]))))->array[((int64_t)1)]))) = _328;
#line 318 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _330 = _53;
  _331 = _54;
  _332 = llvm_OC_fmuladd_OC_f64(_330, 0.39777715593191371, (_331 * 0.91748206206918181));
  _333 = _19;
  *(double*)(((&((struct l_array_3_double*)(((&((struct l_array_3_double*)_333)[((int64_t)1)]))))->array[((int64_t)2)]))) = _332;
}


void radecdist(void* _347, void* _348) {
  void* _349;    /* Address-exposed local */
  void* _350;    /* Address-exposed local */
  void* _351;
  double _352;
  void* _353;
  double _354;
  void* _355;
  double _356;
  void* _357;
  double _358;
  double _359;
  void* _360;
  double _361;
  void* _362;
  double _363;
  double _364;
  double _365;
  void* _366;
  void* _367;
  double _368;
  void* _369;
  double _370;
  double _371;
  void* _372;
  void* _373;
  double _374;
  void* _375;
  void* _376;
  double _377;
  void* _378;
  double _379;
  void* _380;
  double _381;
  double _382;
  void* _383;

  _349 = _347;
#line 325 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _350 = _348;
  ;
#line 328 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _351 = _349;
  _352 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_351))))->array[((int64_t)0)])));
  _353 = _349;
  _354 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_353))))->array[((int64_t)0)])));
  _355 = _349;
  _356 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_355))))->array[((int64_t)1)])));
  _357 = _349;
  _358 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_357))))->array[((int64_t)1)])));
  _359 = llvm_OC_fmuladd_OC_f64(_352, _354, (_356 * _358));
  _360 = _349;
  _361 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_360))))->array[((int64_t)2)])));
  _362 = _349;
  _363 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_362))))->array[((int64_t)2)])));
  _364 = llvm_OC_fmuladd_OC_f64(_361, _363, _359);
  _365 = sqrt(_364);
  _366 = _350;
  *(double*)(((&((double*)_366)[((int64_t)2)]))) = _365;
#line 331 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _367 = _349;
  _368 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_367))))->array[((int64_t)1)])));
  _369 = _349;
  _370 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_369))))->array[((int64_t)0)])));
  _371 = atan2(_368, _370);
  _372 = _350;
  *(double*)((((double*)_372))) = (_371 * 3.8197186342054881);
#line 332 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _373 = _350;
  _374 = *(double*)((((double*)_373)));
  if ((llvm_fcmp_olt(_374, 0))) {
    goto _384;
  } else {
    goto _385;
  }

_384:
  _375 = _350;
  _376 = (((double*)_375));
  _377 = *(double*)_376;
  *(double*)_376 = (_377 + 24);
  goto _385;

_385:
#line 335 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _378 = _349;
  _379 = *(double*)(((&((struct l_array_3_double*)((((struct l_array_3_double*)_378))))->array[((int64_t)2)])));
  _380 = _350;
  _381 = *(double*)(((&((double*)_380)[((int64_t)2)])));
  _382 = asin((_379 / _381));
  _383 = _350;
  *(double*)(((&((double*)_383)[((int64_t)1)]))) = (_382 * 57.295779513082323);
}


void d_al(void* _386) {
  void* _387;    /* Address-exposed local */
  uint32_t _388;    /* Address-exposed local */
  uint32_t _389;    /* Address-exposed local */
  uint32_t _390;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_2_double _391 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_2_struct_AC_l_array_3_double _392 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _393;
  uint32_t _394;
  void* _395;
  double _396;
  uint32_t _397;
  uint32_t _398;
  void* _399;
  uint32_t _400;
  uint32_t _401;
  uint32_t _402;
  uint32_t _403;

  _387 = _386;
#line 342 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
#line 351 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  ;
  ;
#line 352 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
#line 353 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
#line 362 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _388 = 0;
  goto _404;

  do {     /* Syntactic loop '' to make GCC happy */
_404:
  _393 = _388;
  if ((((int32_t)_393) < ((int32_t)20u))) {
    goto _405;
  } else {
    goto _406;
  }

_405:
#line 364 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  *(double*)(((&(&_391)->array[((int64_t)0)]))) = 2451545;
#line 365 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  *(double*)(((&(&_391)->array[((int64_t)1)]))) = 0;
#line 367 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _389 = 0;
  goto _407;

  do {     /* Syntactic loop '' to make GCC happy */
_407:
  _394 = _389;
  if ((((int32_t)_394) < ((int32_t)36525u))) {
    goto _408;
  } else {
    goto _409;
  }

_408:
#line 369 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _395 = ((&(&_391)->array[((int64_t)0)]));
  _396 = *(double*)_395;
  *(double*)_395 = (_396 + 1);
#line 371 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _390 = 0;
  goto _410;

  do {     /* Syntactic loop '' to make GCC happy */
_410:
  _397 = _390;
  if ((((int32_t)_397) < ((int32_t)8u))) {
    goto _411;
  } else {
    goto _412;
  }

_411:
#line 373 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _398 = _390;
  planetpv((((&(&_391)->array[((int64_t)0)]))), _398, (((&(&_392)->array[((int64_t)0)]))));
#line 374 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _399 = _387;
  _400 = _390;
  radecdist((((&(&_392)->array[((int64_t)0)]))), (((&((double*)_399)[((int64_t)(((int64_t)(int32_t)(llvm_mul_u32(_400, 3)))))]))));
  goto _413;

_413:
#line 371 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _401 = _390;
  _390 = (llvm_add_u32(_401, 1));
  goto _410;

  } while (1); /* end of syntactic loop '' */
_412:
  goto _414;

_414:
#line 367 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _402 = _389;
  _389 = (llvm_add_u32(_402, 1));
  goto _407;

  } while (1); /* end of syntactic loop '' */
_409:
  goto _415;

_415:
#line 362 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _403 = _388;
  _388 = (llvm_add_u32(_403, 1));
  goto _404;

  } while (1); /* end of syntactic loop '' */
_406:
  return;
}


