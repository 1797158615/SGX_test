#include "../Include/md5.h"
#include "Enclave.h"
#include "Enclave_t.h"


void md5_starts(void* _1) {
  void* _2;    /* Address-exposed local */
  void* _3;
  void* _4;
  void* _5;
  void* _6;
  void* _7;
  void* _8;

  _2 = _1;
#line 42 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 44 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _3 = _2;
  *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_3)->field0)))))->array[((int64_t)0)]))) = 0;
#line 45 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _4 = _2;
  *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_4)->field0)))))->array[((int64_t)1)]))) = 0;
#line 47 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _5 = _2;
  *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_5)->field1)))))->array[((int64_t)0)]))) = INT64_C(1732584193);
#line 48 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _6 = _2;
  *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_6)->field1)))))->array[((int64_t)1)]))) = INT64_C(4023233417);
#line 49 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _7 = _2;
  *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_7)->field1)))))->array[((int64_t)2)]))) = INT64_C(2562383102);
#line 50 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _8 = _2;
  *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_8)->field1)))))->array[((int64_t)3)]))) = 271733878;
}


void md5_process(void* _9, void* _10) {
  void* _11;    /* Address-exposed local */
  void* _12;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_16_uint64_t _13 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _14;    /* Address-exposed local */
  uint64_t _15;    /* Address-exposed local */
  uint64_t _16;    /* Address-exposed local */
  uint64_t _17;    /* Address-exposed local */
  void* _18;
  uint8_t _19;
  void* _20;
  uint8_t _21;
  void* _22;
  uint8_t _23;
  void* _24;
  uint8_t _25;
  void* _26;
  uint8_t _27;
  void* _28;
  uint8_t _29;
  void* _30;
  uint8_t _31;
  void* _32;
  uint8_t _33;
  void* _34;
  uint8_t _35;
  void* _36;
  uint8_t _37;
  void* _38;
  uint8_t _39;
  void* _40;
  uint8_t _41;
  void* _42;
  uint8_t _43;
  void* _44;
  uint8_t _45;
  void* _46;
  uint8_t _47;
  void* _48;
  uint8_t _49;
  void* _50;
  uint8_t _51;
  void* _52;
  uint8_t _53;
  void* _54;
  uint8_t _55;
  void* _56;
  uint8_t _57;
  void* _58;
  uint8_t _59;
  void* _60;
  uint8_t _61;
  void* _62;
  uint8_t _63;
  void* _64;
  uint8_t _65;
  void* _66;
  uint8_t _67;
  void* _68;
  uint8_t _69;
  void* _70;
  uint8_t _71;
  void* _72;
  uint8_t _73;
  void* _74;
  uint8_t _75;
  void* _76;
  uint8_t _77;
  void* _78;
  uint8_t _79;
  void* _80;
  uint8_t _81;
  void* _82;
  uint8_t _83;
  void* _84;
  uint8_t _85;
  void* _86;
  uint8_t _87;
  void* _88;
  uint8_t _89;
  void* _90;
  uint8_t _91;
  void* _92;
  uint8_t _93;
  void* _94;
  uint8_t _95;
  void* _96;
  uint8_t _97;
  void* _98;
  uint8_t _99;
  void* _100;
  uint8_t _101;
  void* _102;
  uint8_t _103;
  void* _104;
  uint8_t _105;
  void* _106;
  uint8_t _107;
  void* _108;
  uint8_t _109;
  void* _110;
  uint8_t _111;
  void* _112;
  uint8_t _113;
  void* _114;
  uint8_t _115;
  void* _116;
  uint8_t _117;
  void* _118;
  uint8_t _119;
  void* _120;
  uint8_t _121;
  void* _122;
  uint8_t _123;
  void* _124;
  uint8_t _125;
  void* _126;
  uint8_t _127;
  void* _128;
  uint8_t _129;
  void* _130;
  uint8_t _131;
  void* _132;
  uint8_t _133;
  void* _134;
  uint8_t _135;
  void* _136;
  uint8_t _137;
  void* _138;
  uint8_t _139;
  void* _140;
  uint8_t _141;
  void* _142;
  uint8_t _143;
  void* _144;
  uint8_t _145;
  void* _146;
  uint64_t _147;
  void* _148;
  uint64_t _149;
  void* _150;
  uint64_t _151;
  void* _152;
  uint64_t _153;
  uint64_t _154;
  uint64_t _155;
  uint64_t _156;
  uint64_t _157;
  uint64_t _158;
  uint64_t _159;
  uint64_t _160;
  uint64_t _161;
  uint64_t _162;
  uint64_t _163;
  uint64_t _164;
  uint64_t _165;
  uint64_t _166;
  uint64_t _167;
  uint64_t _168;
  uint64_t _169;
  uint64_t _170;
  uint64_t _171;
  uint64_t _172;
  uint64_t _173;
  uint64_t _174;
  uint64_t _175;
  uint64_t _176;
  uint64_t _177;
  uint64_t _178;
  uint64_t _179;
  uint64_t _180;
  uint64_t _181;
  uint64_t _182;
  uint64_t _183;
  uint64_t _184;
  uint64_t _185;
  uint64_t _186;
  uint64_t _187;
  uint64_t _188;
  uint64_t _189;
  uint64_t _190;
  uint64_t _191;
  uint64_t _192;
  uint64_t _193;
  uint64_t _194;
  uint64_t _195;
  uint64_t _196;
  uint64_t _197;
  uint64_t _198;
  uint64_t _199;
  uint64_t _200;
  uint64_t _201;
  uint64_t _202;
  uint64_t _203;
  uint64_t _204;
  uint64_t _205;
  uint64_t _206;
  uint64_t _207;
  uint64_t _208;
  uint64_t _209;
  uint64_t _210;
  uint64_t _211;
  uint64_t _212;
  uint64_t _213;
  uint64_t _214;
  uint64_t _215;
  uint64_t _216;
  uint64_t _217;
  uint64_t _218;
  uint64_t _219;
  uint64_t _220;
  uint64_t _221;
  uint64_t _222;
  uint64_t _223;
  uint64_t _224;
  uint64_t _225;
  uint64_t _226;
  uint64_t _227;
  uint64_t _228;
  uint64_t _229;
  uint64_t _230;
  uint64_t _231;
  uint64_t _232;
  uint64_t _233;
  uint64_t _234;
  uint64_t _235;
  uint64_t _236;
  uint64_t _237;
  uint64_t _238;
  uint64_t _239;
  uint64_t _240;
  uint64_t _241;
  uint64_t _242;
  uint64_t _243;
  uint64_t _244;
  uint64_t _245;
  uint64_t _246;
  uint64_t _247;
  uint64_t _248;
  uint64_t _249;
  uint64_t _250;
  uint64_t _251;
  uint64_t _252;
  uint64_t _253;
  uint64_t _254;
  uint64_t _255;
  uint64_t _256;
  uint64_t _257;
  uint64_t _258;
  uint64_t _259;
  uint64_t _260;
  uint64_t _261;
  uint64_t _262;
  uint64_t _263;
  uint64_t _264;
  uint64_t _265;
  uint64_t _266;
  uint64_t _267;
  uint64_t _268;
  uint64_t _269;
  uint64_t _270;
  uint64_t _271;
  uint64_t _272;
  uint64_t _273;
  uint64_t _274;
  uint64_t _275;
  uint64_t _276;
  uint64_t _277;
  uint64_t _278;
  uint64_t _279;
  uint64_t _280;
  uint64_t _281;
  uint64_t _282;
  uint64_t _283;
  uint64_t _284;
  uint64_t _285;
  uint64_t _286;
  uint64_t _287;
  uint64_t _288;
  uint64_t _289;
  uint64_t _290;
  uint64_t _291;
  uint64_t _292;
  uint64_t _293;
  uint64_t _294;
  uint64_t _295;
  uint64_t _296;
  uint64_t _297;
  uint64_t _298;
  uint64_t _299;
  uint64_t _300;
  uint64_t _301;
  uint64_t _302;
  uint64_t _303;
  uint64_t _304;
  uint64_t _305;
  uint64_t _306;
  uint64_t _307;
  uint64_t _308;
  uint64_t _309;
  uint64_t _310;
  uint64_t _311;
  uint64_t _312;
  uint64_t _313;
  uint64_t _314;
  uint64_t _315;
  uint64_t _316;
  uint64_t _317;
  uint64_t _318;
  uint64_t _319;
  uint64_t _320;
  uint64_t _321;
  uint64_t _322;
  uint64_t _323;
  uint64_t _324;
  uint64_t _325;
  uint64_t _326;
  uint64_t _327;
  uint64_t _328;
  uint64_t _329;
  uint64_t _330;
  uint64_t _331;
  uint64_t _332;
  uint64_t _333;
  uint64_t _334;
  uint64_t _335;
  uint64_t _336;
  uint64_t _337;
  uint64_t _338;
  uint64_t _339;
  uint64_t _340;
  uint64_t _341;
  uint64_t _342;
  uint64_t _343;
  uint64_t _344;
  uint64_t _345;
  uint64_t _346;
  uint64_t _347;
  uint64_t _348;
  uint64_t _349;
  uint64_t _350;
  uint64_t _351;
  uint64_t _352;
  uint64_t _353;
  uint64_t _354;
  uint64_t _355;
  uint64_t _356;
  uint64_t _357;
  uint64_t _358;
  uint64_t _359;
  uint64_t _360;
  uint64_t _361;
  uint64_t _362;
  uint64_t _363;
  uint64_t _364;
  uint64_t _365;
  uint64_t _366;
  uint64_t _367;
  uint64_t _368;
  uint64_t _369;
  uint64_t _370;
  uint64_t _371;
  uint64_t _372;
  uint64_t _373;
  uint64_t _374;
  uint64_t _375;
  uint64_t _376;
  uint64_t _377;
  uint64_t _378;
  uint64_t _379;
  uint64_t _380;
  uint64_t _381;
  uint64_t _382;
  uint64_t _383;
  uint64_t _384;
  uint64_t _385;
  uint64_t _386;
  uint64_t _387;
  uint64_t _388;
  uint64_t _389;
  uint64_t _390;
  uint64_t _391;
  uint64_t _392;
  uint64_t _393;
  uint64_t _394;
  uint64_t _395;
  uint64_t _396;
  uint64_t _397;
  uint64_t _398;
  uint64_t _399;
  uint64_t _400;
  uint64_t _401;
  uint64_t _402;
  uint64_t _403;
  uint64_t _404;
  uint64_t _405;
  uint64_t _406;
  uint64_t _407;
  uint64_t _408;
  uint64_t _409;
  uint64_t _410;
  uint64_t _411;
  uint64_t _412;
  uint64_t _413;
  uint64_t _414;
  uint64_t _415;
  uint64_t _416;
  uint64_t _417;
  uint64_t _418;
  uint64_t _419;
  uint64_t _420;
  uint64_t _421;
  uint64_t _422;
  uint64_t _423;
  uint64_t _424;
  uint64_t _425;
  uint64_t _426;
  uint64_t _427;
  uint64_t _428;
  uint64_t _429;
  uint64_t _430;
  uint64_t _431;
  uint64_t _432;
  uint64_t _433;
  uint64_t _434;
  uint64_t _435;
  uint64_t _436;
  uint64_t _437;
  uint64_t _438;
  uint64_t _439;
  uint64_t _440;
  uint64_t _441;
  uint64_t _442;
  uint64_t _443;
  uint64_t _444;
  uint64_t _445;
  uint64_t _446;
  uint64_t _447;
  uint64_t _448;
  uint64_t _449;
  uint64_t _450;
  uint64_t _451;
  uint64_t _452;
  uint64_t _453;
  uint64_t _454;
  uint64_t _455;
  uint64_t _456;
  uint64_t _457;
  uint64_t _458;
  uint64_t _459;
  uint64_t _460;
  uint64_t _461;
  uint64_t _462;
  uint64_t _463;
  uint64_t _464;
  uint64_t _465;
  uint64_t _466;
  uint64_t _467;
  uint64_t _468;
  uint64_t _469;
  uint64_t _470;
  uint64_t _471;
  uint64_t _472;
  uint64_t _473;
  uint64_t _474;
  uint64_t _475;
  uint64_t _476;
  uint64_t _477;
  uint64_t _478;
  uint64_t _479;
  uint64_t _480;
  uint64_t _481;
  uint64_t _482;
  uint64_t _483;
  uint64_t _484;
  uint64_t _485;
  uint64_t _486;
  uint64_t _487;
  uint64_t _488;
  uint64_t _489;
  uint64_t _490;
  uint64_t _491;
  uint64_t _492;
  uint64_t _493;
  uint64_t _494;
  uint64_t _495;
  uint64_t _496;
  uint64_t _497;
  uint64_t _498;
  uint64_t _499;
  uint64_t _500;
  uint64_t _501;
  uint64_t _502;
  uint64_t _503;
  uint64_t _504;
  uint64_t _505;
  uint64_t _506;
  uint64_t _507;
  uint64_t _508;
  uint64_t _509;
  uint64_t _510;
  uint64_t _511;
  uint64_t _512;
  uint64_t _513;
  uint64_t _514;
  uint64_t _515;
  uint64_t _516;
  uint64_t _517;
  uint64_t _518;
  uint64_t _519;
  uint64_t _520;
  uint64_t _521;
  uint64_t _522;
  uint64_t _523;
  uint64_t _524;
  uint64_t _525;
  uint64_t _526;
  uint64_t _527;
  uint64_t _528;
  uint64_t _529;
  uint64_t _530;
  uint64_t _531;
  uint64_t _532;
  uint64_t _533;
  uint64_t _534;
  uint64_t _535;
  uint64_t _536;
  uint64_t _537;
  uint64_t _538;
  uint64_t _539;
  uint64_t _540;
  uint64_t _541;
  uint64_t _542;
  uint64_t _543;
  uint64_t _544;
  uint64_t _545;
  uint64_t _546;
  uint64_t _547;
  uint64_t _548;
  uint64_t _549;
  uint64_t _550;
  uint64_t _551;
  uint64_t _552;
  uint64_t _553;
  uint64_t _554;
  uint64_t _555;
  uint64_t _556;
  uint64_t _557;
  uint64_t _558;
  uint64_t _559;
  uint64_t _560;
  uint64_t _561;
  uint64_t _562;
  uint64_t _563;
  uint64_t _564;
  uint64_t _565;
  uint64_t _566;
  uint64_t _567;
  uint64_t _568;
  uint64_t _569;
  uint64_t _570;
  uint64_t _571;
  uint64_t _572;
  uint64_t _573;
  uint64_t _574;
  uint64_t _575;
  uint64_t _576;
  uint64_t _577;
  uint64_t _578;
  uint64_t _579;
  uint64_t _580;
  uint64_t _581;
  uint64_t _582;
  uint64_t _583;
  uint64_t _584;
  uint64_t _585;
  uint64_t _586;
  uint64_t _587;
  uint64_t _588;
  uint64_t _589;
  uint64_t _590;
  uint64_t _591;
  uint64_t _592;
  uint64_t _593;
  uint64_t _594;
  uint64_t _595;
  uint64_t _596;
  uint64_t _597;
  uint64_t _598;
  uint64_t _599;
  uint64_t _600;
  uint64_t _601;
  uint64_t _602;
  uint64_t _603;
  uint64_t _604;
  uint64_t _605;
  uint64_t _606;
  uint64_t _607;
  uint64_t _608;
  uint64_t _609;
  uint64_t _610;
  uint64_t _611;
  uint64_t _612;
  uint64_t _613;
  uint64_t _614;
  uint64_t _615;
  uint64_t _616;
  uint64_t _617;
  uint64_t _618;
  uint64_t _619;
  uint64_t _620;
  uint64_t _621;
  uint64_t _622;
  uint64_t _623;
  uint64_t _624;
  uint64_t _625;
  uint64_t _626;
  uint64_t _627;
  uint64_t _628;
  uint64_t _629;
  uint64_t _630;
  uint64_t _631;
  uint64_t _632;
  uint64_t _633;
  uint64_t _634;
  uint64_t _635;
  uint64_t _636;
  uint64_t _637;
  uint64_t _638;
  uint64_t _639;
  uint64_t _640;
  uint64_t _641;
  uint64_t _642;
  uint64_t _643;
  uint64_t _644;
  uint64_t _645;
  uint64_t _646;
  uint64_t _647;
  uint64_t _648;
  uint64_t _649;
  uint64_t _650;
  uint64_t _651;
  uint64_t _652;
  uint64_t _653;
  uint64_t _654;
  uint64_t _655;
  uint64_t _656;
  uint64_t _657;
  uint64_t _658;
  uint64_t _659;
  uint64_t _660;
  uint64_t _661;
  uint64_t _662;
  uint64_t _663;
  uint64_t _664;
  uint64_t _665;
  uint64_t _666;
  uint64_t _667;
  uint64_t _668;
  uint64_t _669;
  uint64_t _670;
  uint64_t _671;
  uint64_t _672;
  uint64_t _673;
  uint64_t _674;
  uint64_t _675;
  uint64_t _676;
  uint64_t _677;
  uint64_t _678;
  uint64_t _679;
  uint64_t _680;
  uint64_t _681;
  uint64_t _682;
  uint64_t _683;
  uint64_t _684;
  uint64_t _685;
  uint64_t _686;
  uint64_t _687;
  uint64_t _688;
  uint64_t _689;
  uint64_t _690;
  uint64_t _691;
  uint64_t _692;
  uint64_t _693;
  uint64_t _694;
  uint64_t _695;
  uint64_t _696;
  uint64_t _697;
  uint64_t _698;
  void* _699;
  void* _700;
  uint64_t _701;
  uint64_t _702;
  void* _703;
  void* _704;
  uint64_t _705;
  uint64_t _706;
  void* _707;
  void* _708;
  uint64_t _709;
  uint64_t _710;
  void* _711;
  void* _712;
  uint64_t _713;

  _11 = _9;
#line 54 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _12 = _10;
  ;
#line 56 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  ;
  ;
  ;
  ;
#line 58 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _18 = _12;
  _19 = *(uint8_t*)((((uint8_t*)_18)));
  _20 = _12;
  _21 = *(uint8_t*)(((&((uint8_t*)_20)[((int64_t)1)])));
  _22 = _12;
  _23 = *(uint8_t*)(((&((uint8_t*)_22)[((int64_t)2)])));
  _24 = _12;
  _25 = *(uint8_t*)(((&((uint8_t*)_24)[((int64_t)3)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)0)]))) = ((((((uint64_t)(uint8_t)_19)) | ((((uint64_t)(uint8_t)_21)) << 8)) | ((((uint64_t)(uint8_t)_23)) << 16)) | ((((uint64_t)(uint8_t)_25)) << 24));
#line 59 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _26 = _12;
  _27 = *(uint8_t*)(((&((uint8_t*)_26)[((int64_t)4)])));
  _28 = _12;
  _29 = *(uint8_t*)(((&((uint8_t*)_28)[((int64_t)5)])));
  _30 = _12;
  _31 = *(uint8_t*)(((&((uint8_t*)_30)[((int64_t)6)])));
  _32 = _12;
  _33 = *(uint8_t*)(((&((uint8_t*)_32)[((int64_t)7)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)1)]))) = ((((((uint64_t)(uint8_t)_27)) | ((((uint64_t)(uint8_t)_29)) << 8)) | ((((uint64_t)(uint8_t)_31)) << 16)) | ((((uint64_t)(uint8_t)_33)) << 24));
#line 60 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _34 = _12;
  _35 = *(uint8_t*)(((&((uint8_t*)_34)[((int64_t)8)])));
  _36 = _12;
  _37 = *(uint8_t*)(((&((uint8_t*)_36)[((int64_t)9)])));
  _38 = _12;
  _39 = *(uint8_t*)(((&((uint8_t*)_38)[((int64_t)10)])));
  _40 = _12;
  _41 = *(uint8_t*)(((&((uint8_t*)_40)[((int64_t)11)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)2)]))) = ((((((uint64_t)(uint8_t)_35)) | ((((uint64_t)(uint8_t)_37)) << 8)) | ((((uint64_t)(uint8_t)_39)) << 16)) | ((((uint64_t)(uint8_t)_41)) << 24));
#line 61 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _42 = _12;
  _43 = *(uint8_t*)(((&((uint8_t*)_42)[((int64_t)12)])));
  _44 = _12;
  _45 = *(uint8_t*)(((&((uint8_t*)_44)[((int64_t)13)])));
  _46 = _12;
  _47 = *(uint8_t*)(((&((uint8_t*)_46)[((int64_t)14)])));
  _48 = _12;
  _49 = *(uint8_t*)(((&((uint8_t*)_48)[((int64_t)15)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)3)]))) = ((((((uint64_t)(uint8_t)_43)) | ((((uint64_t)(uint8_t)_45)) << 8)) | ((((uint64_t)(uint8_t)_47)) << 16)) | ((((uint64_t)(uint8_t)_49)) << 24));
#line 62 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _50 = _12;
  _51 = *(uint8_t*)(((&((uint8_t*)_50)[((int64_t)16)])));
  _52 = _12;
  _53 = *(uint8_t*)(((&((uint8_t*)_52)[((int64_t)17)])));
  _54 = _12;
  _55 = *(uint8_t*)(((&((uint8_t*)_54)[((int64_t)18)])));
  _56 = _12;
  _57 = *(uint8_t*)(((&((uint8_t*)_56)[((int64_t)19)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)4)]))) = ((((((uint64_t)(uint8_t)_51)) | ((((uint64_t)(uint8_t)_53)) << 8)) | ((((uint64_t)(uint8_t)_55)) << 16)) | ((((uint64_t)(uint8_t)_57)) << 24));
#line 63 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _58 = _12;
  _59 = *(uint8_t*)(((&((uint8_t*)_58)[((int64_t)20)])));
  _60 = _12;
  _61 = *(uint8_t*)(((&((uint8_t*)_60)[((int64_t)21)])));
  _62 = _12;
  _63 = *(uint8_t*)(((&((uint8_t*)_62)[((int64_t)22)])));
  _64 = _12;
  _65 = *(uint8_t*)(((&((uint8_t*)_64)[((int64_t)23)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)5)]))) = ((((((uint64_t)(uint8_t)_59)) | ((((uint64_t)(uint8_t)_61)) << 8)) | ((((uint64_t)(uint8_t)_63)) << 16)) | ((((uint64_t)(uint8_t)_65)) << 24));
#line 64 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _66 = _12;
  _67 = *(uint8_t*)(((&((uint8_t*)_66)[((int64_t)24)])));
  _68 = _12;
  _69 = *(uint8_t*)(((&((uint8_t*)_68)[((int64_t)25)])));
  _70 = _12;
  _71 = *(uint8_t*)(((&((uint8_t*)_70)[((int64_t)26)])));
  _72 = _12;
  _73 = *(uint8_t*)(((&((uint8_t*)_72)[((int64_t)27)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)6)]))) = ((((((uint64_t)(uint8_t)_67)) | ((((uint64_t)(uint8_t)_69)) << 8)) | ((((uint64_t)(uint8_t)_71)) << 16)) | ((((uint64_t)(uint8_t)_73)) << 24));
#line 65 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _74 = _12;
  _75 = *(uint8_t*)(((&((uint8_t*)_74)[((int64_t)28)])));
  _76 = _12;
  _77 = *(uint8_t*)(((&((uint8_t*)_76)[((int64_t)29)])));
  _78 = _12;
  _79 = *(uint8_t*)(((&((uint8_t*)_78)[((int64_t)30)])));
  _80 = _12;
  _81 = *(uint8_t*)(((&((uint8_t*)_80)[((int64_t)31)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)7)]))) = ((((((uint64_t)(uint8_t)_75)) | ((((uint64_t)(uint8_t)_77)) << 8)) | ((((uint64_t)(uint8_t)_79)) << 16)) | ((((uint64_t)(uint8_t)_81)) << 24));
#line 66 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _82 = _12;
  _83 = *(uint8_t*)(((&((uint8_t*)_82)[((int64_t)32)])));
  _84 = _12;
  _85 = *(uint8_t*)(((&((uint8_t*)_84)[((int64_t)33)])));
  _86 = _12;
  _87 = *(uint8_t*)(((&((uint8_t*)_86)[((int64_t)34)])));
  _88 = _12;
  _89 = *(uint8_t*)(((&((uint8_t*)_88)[((int64_t)35)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)8)]))) = ((((((uint64_t)(uint8_t)_83)) | ((((uint64_t)(uint8_t)_85)) << 8)) | ((((uint64_t)(uint8_t)_87)) << 16)) | ((((uint64_t)(uint8_t)_89)) << 24));
#line 67 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _90 = _12;
  _91 = *(uint8_t*)(((&((uint8_t*)_90)[((int64_t)36)])));
  _92 = _12;
  _93 = *(uint8_t*)(((&((uint8_t*)_92)[((int64_t)37)])));
  _94 = _12;
  _95 = *(uint8_t*)(((&((uint8_t*)_94)[((int64_t)38)])));
  _96 = _12;
  _97 = *(uint8_t*)(((&((uint8_t*)_96)[((int64_t)39)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)9)]))) = ((((((uint64_t)(uint8_t)_91)) | ((((uint64_t)(uint8_t)_93)) << 8)) | ((((uint64_t)(uint8_t)_95)) << 16)) | ((((uint64_t)(uint8_t)_97)) << 24));
#line 68 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _98 = _12;
  _99 = *(uint8_t*)(((&((uint8_t*)_98)[((int64_t)40)])));
  _100 = _12;
  _101 = *(uint8_t*)(((&((uint8_t*)_100)[((int64_t)41)])));
  _102 = _12;
  _103 = *(uint8_t*)(((&((uint8_t*)_102)[((int64_t)42)])));
  _104 = _12;
  _105 = *(uint8_t*)(((&((uint8_t*)_104)[((int64_t)43)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)10)]))) = ((((((uint64_t)(uint8_t)_99)) | ((((uint64_t)(uint8_t)_101)) << 8)) | ((((uint64_t)(uint8_t)_103)) << 16)) | ((((uint64_t)(uint8_t)_105)) << 24));
#line 69 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _106 = _12;
  _107 = *(uint8_t*)(((&((uint8_t*)_106)[((int64_t)44)])));
  _108 = _12;
  _109 = *(uint8_t*)(((&((uint8_t*)_108)[((int64_t)45)])));
  _110 = _12;
  _111 = *(uint8_t*)(((&((uint8_t*)_110)[((int64_t)46)])));
  _112 = _12;
  _113 = *(uint8_t*)(((&((uint8_t*)_112)[((int64_t)47)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)11)]))) = ((((((uint64_t)(uint8_t)_107)) | ((((uint64_t)(uint8_t)_109)) << 8)) | ((((uint64_t)(uint8_t)_111)) << 16)) | ((((uint64_t)(uint8_t)_113)) << 24));
#line 70 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _114 = _12;
  _115 = *(uint8_t*)(((&((uint8_t*)_114)[((int64_t)48)])));
  _116 = _12;
  _117 = *(uint8_t*)(((&((uint8_t*)_116)[((int64_t)49)])));
  _118 = _12;
  _119 = *(uint8_t*)(((&((uint8_t*)_118)[((int64_t)50)])));
  _120 = _12;
  _121 = *(uint8_t*)(((&((uint8_t*)_120)[((int64_t)51)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)12)]))) = ((((((uint64_t)(uint8_t)_115)) | ((((uint64_t)(uint8_t)_117)) << 8)) | ((((uint64_t)(uint8_t)_119)) << 16)) | ((((uint64_t)(uint8_t)_121)) << 24));
#line 71 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _122 = _12;
  _123 = *(uint8_t*)(((&((uint8_t*)_122)[((int64_t)52)])));
  _124 = _12;
  _125 = *(uint8_t*)(((&((uint8_t*)_124)[((int64_t)53)])));
  _126 = _12;
  _127 = *(uint8_t*)(((&((uint8_t*)_126)[((int64_t)54)])));
  _128 = _12;
  _129 = *(uint8_t*)(((&((uint8_t*)_128)[((int64_t)55)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)13)]))) = ((((((uint64_t)(uint8_t)_123)) | ((((uint64_t)(uint8_t)_125)) << 8)) | ((((uint64_t)(uint8_t)_127)) << 16)) | ((((uint64_t)(uint8_t)_129)) << 24));
#line 72 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _130 = _12;
  _131 = *(uint8_t*)(((&((uint8_t*)_130)[((int64_t)56)])));
  _132 = _12;
  _133 = *(uint8_t*)(((&((uint8_t*)_132)[((int64_t)57)])));
  _134 = _12;
  _135 = *(uint8_t*)(((&((uint8_t*)_134)[((int64_t)58)])));
  _136 = _12;
  _137 = *(uint8_t*)(((&((uint8_t*)_136)[((int64_t)59)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)14)]))) = ((((((uint64_t)(uint8_t)_131)) | ((((uint64_t)(uint8_t)_133)) << 8)) | ((((uint64_t)(uint8_t)_135)) << 16)) | ((((uint64_t)(uint8_t)_137)) << 24));
#line 73 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _138 = _12;
  _139 = *(uint8_t*)(((&((uint8_t*)_138)[((int64_t)60)])));
  _140 = _12;
  _141 = *(uint8_t*)(((&((uint8_t*)_140)[((int64_t)61)])));
  _142 = _12;
  _143 = *(uint8_t*)(((&((uint8_t*)_142)[((int64_t)62)])));
  _144 = _12;
  _145 = *(uint8_t*)(((&((uint8_t*)_144)[((int64_t)63)])));
  *(uint64_t*)(((&(&_13)->array[((int64_t)15)]))) = ((((((uint64_t)(uint8_t)_139)) | ((((uint64_t)(uint8_t)_141)) << 8)) | ((((uint64_t)(uint8_t)_143)) << 16)) | ((((uint64_t)(uint8_t)_145)) << 24));
#line 82 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _146 = _11;
  _147 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_146)->field1)))))->array[((int64_t)0)])));
  _14 = _147;
#line 83 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _148 = _11;
  _149 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_148)->field1)))))->array[((int64_t)1)])));
  _15 = _149;
#line 84 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _150 = _11;
  _151 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_150)->field1)))))->array[((int64_t)2)])));
  _16 = _151;
#line 85 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _152 = _11;
  _153 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_152)->field1)))))->array[((int64_t)3)])));
  _17 = _153;
#line 89 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _154 = _17;
  _155 = _15;
  _156 = _16;
  _157 = _17;
  _158 = *(uint64_t*)(((&(&_13)->array[((int64_t)0)])));
  _159 = _14;
  _14 = (llvm_add_u64(_159, (llvm_add_u64((llvm_add_u64((_154 ^ (_155 & (_156 ^ _157))), _158)), INT64_C(3614090360)))));
  _160 = _14;
  _161 = _14;
  _162 = _15;
  _14 = (llvm_add_u64(((_160 << 7) | (llvm_lshr_u64((_161 & INT64_C(4294967295)), 25))), _162));
#line 90 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _163 = _16;
  _164 = _14;
  _165 = _15;
  _166 = _16;
  _167 = *(uint64_t*)(((&(&_13)->array[((int64_t)1)])));
  _168 = _17;
  _17 = (llvm_add_u64(_168, (llvm_add_u64((llvm_add_u64((_163 ^ (_164 & (_165 ^ _166))), _167)), INT64_C(3905402710)))));
  _169 = _17;
  _170 = _17;
  _171 = _14;
  _17 = (llvm_add_u64(((_169 << 12) | (llvm_lshr_u64((_170 & INT64_C(4294967295)), 20))), _171));
#line 91 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _172 = _15;
  _173 = _17;
  _174 = _14;
  _175 = _15;
  _176 = *(uint64_t*)(((&(&_13)->array[((int64_t)2)])));
  _177 = _16;
  _16 = (llvm_add_u64(_177, (llvm_add_u64((llvm_add_u64((_172 ^ (_173 & (_174 ^ _175))), _176)), 606105819))));
  _178 = _16;
  _179 = _16;
  _180 = _17;
  _16 = (llvm_add_u64(((_178 << 17) | (llvm_lshr_u64((_179 & INT64_C(4294967295)), 15))), _180));
#line 92 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _181 = _14;
  _182 = _16;
  _183 = _17;
  _184 = _14;
  _185 = *(uint64_t*)(((&(&_13)->array[((int64_t)3)])));
  _186 = _15;
  _15 = (llvm_add_u64(_186, (llvm_add_u64((llvm_add_u64((_181 ^ (_182 & (_183 ^ _184))), _185)), INT64_C(3250441966)))));
  _187 = _15;
  _188 = _15;
  _189 = _16;
  _15 = (llvm_add_u64(((_187 << 22) | (llvm_lshr_u64((_188 & INT64_C(4294967295)), 10))), _189));
#line 93 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _190 = _17;
  _191 = _15;
  _192 = _16;
  _193 = _17;
  _194 = *(uint64_t*)(((&(&_13)->array[((int64_t)4)])));
  _195 = _14;
  _14 = (llvm_add_u64(_195, (llvm_add_u64((llvm_add_u64((_190 ^ (_191 & (_192 ^ _193))), _194)), INT64_C(4118548399)))));
  _196 = _14;
  _197 = _14;
  _198 = _15;
  _14 = (llvm_add_u64(((_196 << 7) | (llvm_lshr_u64((_197 & INT64_C(4294967295)), 25))), _198));
#line 94 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _199 = _16;
  _200 = _14;
  _201 = _15;
  _202 = _16;
  _203 = *(uint64_t*)(((&(&_13)->array[((int64_t)5)])));
  _204 = _17;
  _17 = (llvm_add_u64(_204, (llvm_add_u64((llvm_add_u64((_199 ^ (_200 & (_201 ^ _202))), _203)), INT64_C(1200080426)))));
  _205 = _17;
  _206 = _17;
  _207 = _14;
  _17 = (llvm_add_u64(((_205 << 12) | (llvm_lshr_u64((_206 & INT64_C(4294967295)), 20))), _207));
#line 95 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _208 = _15;
  _209 = _17;
  _210 = _14;
  _211 = _15;
  _212 = *(uint64_t*)(((&(&_13)->array[((int64_t)6)])));
  _213 = _16;
  _16 = (llvm_add_u64(_213, (llvm_add_u64((llvm_add_u64((_208 ^ (_209 & (_210 ^ _211))), _212)), INT64_C(2821735955)))));
  _214 = _16;
  _215 = _16;
  _216 = _17;
  _16 = (llvm_add_u64(((_214 << 17) | (llvm_lshr_u64((_215 & INT64_C(4294967295)), 15))), _216));
#line 96 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _217 = _14;
  _218 = _16;
  _219 = _17;
  _220 = _14;
  _221 = *(uint64_t*)(((&(&_13)->array[((int64_t)7)])));
  _222 = _15;
  _15 = (llvm_add_u64(_222, (llvm_add_u64((llvm_add_u64((_217 ^ (_218 & (_219 ^ _220))), _221)), INT64_C(4249261313)))));
  _223 = _15;
  _224 = _15;
  _225 = _16;
  _15 = (llvm_add_u64(((_223 << 22) | (llvm_lshr_u64((_224 & INT64_C(4294967295)), 10))), _225));
#line 97 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _226 = _17;
  _227 = _15;
  _228 = _16;
  _229 = _17;
  _230 = *(uint64_t*)(((&(&_13)->array[((int64_t)8)])));
  _231 = _14;
  _14 = (llvm_add_u64(_231, (llvm_add_u64((llvm_add_u64((_226 ^ (_227 & (_228 ^ _229))), _230)), INT64_C(1770035416)))));
  _232 = _14;
  _233 = _14;
  _234 = _15;
  _14 = (llvm_add_u64(((_232 << 7) | (llvm_lshr_u64((_233 & INT64_C(4294967295)), 25))), _234));
#line 98 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _235 = _16;
  _236 = _14;
  _237 = _15;
  _238 = _16;
  _239 = *(uint64_t*)(((&(&_13)->array[((int64_t)9)])));
  _240 = _17;
  _17 = (llvm_add_u64(_240, (llvm_add_u64((llvm_add_u64((_235 ^ (_236 & (_237 ^ _238))), _239)), INT64_C(2336552879)))));
  _241 = _17;
  _242 = _17;
  _243 = _14;
  _17 = (llvm_add_u64(((_241 << 12) | (llvm_lshr_u64((_242 & INT64_C(4294967295)), 20))), _243));
#line 99 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _244 = _15;
  _245 = _17;
  _246 = _14;
  _247 = _15;
  _248 = *(uint64_t*)(((&(&_13)->array[((int64_t)10)])));
  _249 = _16;
  _16 = (llvm_add_u64(_249, (llvm_add_u64((llvm_add_u64((_244 ^ (_245 & (_246 ^ _247))), _248)), INT64_C(4294925233)))));
  _250 = _16;
  _251 = _16;
  _252 = _17;
  _16 = (llvm_add_u64(((_250 << 17) | (llvm_lshr_u64((_251 & INT64_C(4294967295)), 15))), _252));
#line 100 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _253 = _14;
  _254 = _16;
  _255 = _17;
  _256 = _14;
  _257 = *(uint64_t*)(((&(&_13)->array[((int64_t)11)])));
  _258 = _15;
  _15 = (llvm_add_u64(_258, (llvm_add_u64((llvm_add_u64((_253 ^ (_254 & (_255 ^ _256))), _257)), INT64_C(2304563134)))));
  _259 = _15;
  _260 = _15;
  _261 = _16;
  _15 = (llvm_add_u64(((_259 << 22) | (llvm_lshr_u64((_260 & INT64_C(4294967295)), 10))), _261));
#line 101 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _262 = _17;
  _263 = _15;
  _264 = _16;
  _265 = _17;
  _266 = *(uint64_t*)(((&(&_13)->array[((int64_t)12)])));
  _267 = _14;
  _14 = (llvm_add_u64(_267, (llvm_add_u64((llvm_add_u64((_262 ^ (_263 & (_264 ^ _265))), _266)), INT64_C(1804603682)))));
  _268 = _14;
  _269 = _14;
  _270 = _15;
  _14 = (llvm_add_u64(((_268 << 7) | (llvm_lshr_u64((_269 & INT64_C(4294967295)), 25))), _270));
#line 102 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _271 = _16;
  _272 = _14;
  _273 = _15;
  _274 = _16;
  _275 = *(uint64_t*)(((&(&_13)->array[((int64_t)13)])));
  _276 = _17;
  _17 = (llvm_add_u64(_276, (llvm_add_u64((llvm_add_u64((_271 ^ (_272 & (_273 ^ _274))), _275)), INT64_C(4254626195)))));
  _277 = _17;
  _278 = _17;
  _279 = _14;
  _17 = (llvm_add_u64(((_277 << 12) | (llvm_lshr_u64((_278 & INT64_C(4294967295)), 20))), _279));
#line 103 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _280 = _15;
  _281 = _17;
  _282 = _14;
  _283 = _15;
  _284 = *(uint64_t*)(((&(&_13)->array[((int64_t)14)])));
  _285 = _16;
  _16 = (llvm_add_u64(_285, (llvm_add_u64((llvm_add_u64((_280 ^ (_281 & (_282 ^ _283))), _284)), INT64_C(2792965006)))));
  _286 = _16;
  _287 = _16;
  _288 = _17;
  _16 = (llvm_add_u64(((_286 << 17) | (llvm_lshr_u64((_287 & INT64_C(4294967295)), 15))), _288));
#line 104 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _289 = _14;
  _290 = _16;
  _291 = _17;
  _292 = _14;
  _293 = *(uint64_t*)(((&(&_13)->array[((int64_t)15)])));
  _294 = _15;
  _15 = (llvm_add_u64(_294, (llvm_add_u64((llvm_add_u64((_289 ^ (_290 & (_291 ^ _292))), _293)), INT64_C(1236535329)))));
  _295 = _15;
  _296 = _15;
  _297 = _16;
  _15 = (llvm_add_u64(((_295 << 22) | (llvm_lshr_u64((_296 & INT64_C(4294967295)), 10))), _297));
#line 110 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _298 = _16;
  _299 = _17;
  _300 = _15;
  _301 = _16;
  _302 = *(uint64_t*)(((&(&_13)->array[((int64_t)1)])));
  _303 = _14;
  _14 = (llvm_add_u64(_303, (llvm_add_u64((llvm_add_u64((_298 ^ (_299 & (_300 ^ _301))), _302)), INT64_C(4129170786)))));
  _304 = _14;
  _305 = _14;
  _306 = _15;
  _14 = (llvm_add_u64(((_304 << 5) | (llvm_lshr_u64((_305 & INT64_C(4294967295)), 27))), _306));
#line 111 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _307 = _15;
  _308 = _16;
  _309 = _14;
  _310 = _15;
  _311 = *(uint64_t*)(((&(&_13)->array[((int64_t)6)])));
  _312 = _17;
  _17 = (llvm_add_u64(_312, (llvm_add_u64((llvm_add_u64((_307 ^ (_308 & (_309 ^ _310))), _311)), INT64_C(3225465664)))));
  _313 = _17;
  _314 = _17;
  _315 = _14;
  _17 = (llvm_add_u64(((_313 << 9) | (llvm_lshr_u64((_314 & INT64_C(4294967295)), 23))), _315));
#line 112 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _316 = _14;
  _317 = _15;
  _318 = _17;
  _319 = _14;
  _320 = *(uint64_t*)(((&(&_13)->array[((int64_t)11)])));
  _321 = _16;
  _16 = (llvm_add_u64(_321, (llvm_add_u64((llvm_add_u64((_316 ^ (_317 & (_318 ^ _319))), _320)), 643717713))));
  _322 = _16;
  _323 = _16;
  _324 = _17;
  _16 = (llvm_add_u64(((_322 << 14) | (llvm_lshr_u64((_323 & INT64_C(4294967295)), 18))), _324));
#line 113 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _325 = _17;
  _326 = _14;
  _327 = _16;
  _328 = _17;
  _329 = *(uint64_t*)(((&(&_13)->array[((int64_t)0)])));
  _330 = _15;
  _15 = (llvm_add_u64(_330, (llvm_add_u64((llvm_add_u64((_325 ^ (_326 & (_327 ^ _328))), _329)), INT64_C(3921069994)))));
  _331 = _15;
  _332 = _15;
  _333 = _16;
  _15 = (llvm_add_u64(((_331 << 20) | (llvm_lshr_u64((_332 & INT64_C(4294967295)), 12))), _333));
#line 114 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _334 = _16;
  _335 = _17;
  _336 = _15;
  _337 = _16;
  _338 = *(uint64_t*)(((&(&_13)->array[((int64_t)5)])));
  _339 = _14;
  _14 = (llvm_add_u64(_339, (llvm_add_u64((llvm_add_u64((_334 ^ (_335 & (_336 ^ _337))), _338)), INT64_C(3593408605)))));
  _340 = _14;
  _341 = _14;
  _342 = _15;
  _14 = (llvm_add_u64(((_340 << 5) | (llvm_lshr_u64((_341 & INT64_C(4294967295)), 27))), _342));
#line 115 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _343 = _15;
  _344 = _16;
  _345 = _14;
  _346 = _15;
  _347 = *(uint64_t*)(((&(&_13)->array[((int64_t)10)])));
  _348 = _17;
  _17 = (llvm_add_u64(_348, (llvm_add_u64((llvm_add_u64((_343 ^ (_344 & (_345 ^ _346))), _347)), 38016083))));
  _349 = _17;
  _350 = _17;
  _351 = _14;
  _17 = (llvm_add_u64(((_349 << 9) | (llvm_lshr_u64((_350 & INT64_C(4294967295)), 23))), _351));
#line 116 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _352 = _14;
  _353 = _15;
  _354 = _17;
  _355 = _14;
  _356 = *(uint64_t*)(((&(&_13)->array[((int64_t)15)])));
  _357 = _16;
  _16 = (llvm_add_u64(_357, (llvm_add_u64((llvm_add_u64((_352 ^ (_353 & (_354 ^ _355))), _356)), INT64_C(3634488961)))));
  _358 = _16;
  _359 = _16;
  _360 = _17;
  _16 = (llvm_add_u64(((_358 << 14) | (llvm_lshr_u64((_359 & INT64_C(4294967295)), 18))), _360));
#line 117 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _361 = _17;
  _362 = _14;
  _363 = _16;
  _364 = _17;
  _365 = *(uint64_t*)(((&(&_13)->array[((int64_t)4)])));
  _366 = _15;
  _15 = (llvm_add_u64(_366, (llvm_add_u64((llvm_add_u64((_361 ^ (_362 & (_363 ^ _364))), _365)), INT64_C(3889429448)))));
  _367 = _15;
  _368 = _15;
  _369 = _16;
  _15 = (llvm_add_u64(((_367 << 20) | (llvm_lshr_u64((_368 & INT64_C(4294967295)), 12))), _369));
#line 118 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _370 = _16;
  _371 = _17;
  _372 = _15;
  _373 = _16;
  _374 = *(uint64_t*)(((&(&_13)->array[((int64_t)9)])));
  _375 = _14;
  _14 = (llvm_add_u64(_375, (llvm_add_u64((llvm_add_u64((_370 ^ (_371 & (_372 ^ _373))), _374)), 568446438))));
  _376 = _14;
  _377 = _14;
  _378 = _15;
  _14 = (llvm_add_u64(((_376 << 5) | (llvm_lshr_u64((_377 & INT64_C(4294967295)), 27))), _378));
#line 119 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _379 = _15;
  _380 = _16;
  _381 = _14;
  _382 = _15;
  _383 = *(uint64_t*)(((&(&_13)->array[((int64_t)14)])));
  _384 = _17;
  _17 = (llvm_add_u64(_384, (llvm_add_u64((llvm_add_u64((_379 ^ (_380 & (_381 ^ _382))), _383)), INT64_C(3275163606)))));
  _385 = _17;
  _386 = _17;
  _387 = _14;
  _17 = (llvm_add_u64(((_385 << 9) | (llvm_lshr_u64((_386 & INT64_C(4294967295)), 23))), _387));
#line 120 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _388 = _14;
  _389 = _15;
  _390 = _17;
  _391 = _14;
  _392 = *(uint64_t*)(((&(&_13)->array[((int64_t)3)])));
  _393 = _16;
  _16 = (llvm_add_u64(_393, (llvm_add_u64((llvm_add_u64((_388 ^ (_389 & (_390 ^ _391))), _392)), INT64_C(4107603335)))));
  _394 = _16;
  _395 = _16;
  _396 = _17;
  _16 = (llvm_add_u64(((_394 << 14) | (llvm_lshr_u64((_395 & INT64_C(4294967295)), 18))), _396));
#line 121 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _397 = _17;
  _398 = _14;
  _399 = _16;
  _400 = _17;
  _401 = *(uint64_t*)(((&(&_13)->array[((int64_t)8)])));
  _402 = _15;
  _15 = (llvm_add_u64(_402, (llvm_add_u64((llvm_add_u64((_397 ^ (_398 & (_399 ^ _400))), _401)), INT64_C(1163531501)))));
  _403 = _15;
  _404 = _15;
  _405 = _16;
  _15 = (llvm_add_u64(((_403 << 20) | (llvm_lshr_u64((_404 & INT64_C(4294967295)), 12))), _405));
#line 122 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _406 = _16;
  _407 = _17;
  _408 = _15;
  _409 = _16;
  _410 = *(uint64_t*)(((&(&_13)->array[((int64_t)13)])));
  _411 = _14;
  _14 = (llvm_add_u64(_411, (llvm_add_u64((llvm_add_u64((_406 ^ (_407 & (_408 ^ _409))), _410)), INT64_C(2850285829)))));
  _412 = _14;
  _413 = _14;
  _414 = _15;
  _14 = (llvm_add_u64(((_412 << 5) | (llvm_lshr_u64((_413 & INT64_C(4294967295)), 27))), _414));
#line 123 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _415 = _15;
  _416 = _16;
  _417 = _14;
  _418 = _15;
  _419 = *(uint64_t*)(((&(&_13)->array[((int64_t)2)])));
  _420 = _17;
  _17 = (llvm_add_u64(_420, (llvm_add_u64((llvm_add_u64((_415 ^ (_416 & (_417 ^ _418))), _419)), INT64_C(4243563512)))));
  _421 = _17;
  _422 = _17;
  _423 = _14;
  _17 = (llvm_add_u64(((_421 << 9) | (llvm_lshr_u64((_422 & INT64_C(4294967295)), 23))), _423));
#line 124 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _424 = _14;
  _425 = _15;
  _426 = _17;
  _427 = _14;
  _428 = *(uint64_t*)(((&(&_13)->array[((int64_t)7)])));
  _429 = _16;
  _16 = (llvm_add_u64(_429, (llvm_add_u64((llvm_add_u64((_424 ^ (_425 & (_426 ^ _427))), _428)), INT64_C(1735328473)))));
  _430 = _16;
  _431 = _16;
  _432 = _17;
  _16 = (llvm_add_u64(((_430 << 14) | (llvm_lshr_u64((_431 & INT64_C(4294967295)), 18))), _432));
#line 125 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _433 = _17;
  _434 = _14;
  _435 = _16;
  _436 = _17;
  _437 = *(uint64_t*)(((&(&_13)->array[((int64_t)12)])));
  _438 = _15;
  _15 = (llvm_add_u64(_438, (llvm_add_u64((llvm_add_u64((_433 ^ (_434 & (_435 ^ _436))), _437)), INT64_C(2368359562)))));
  _439 = _15;
  _440 = _15;
  _441 = _16;
  _15 = (llvm_add_u64(((_439 << 20) | (llvm_lshr_u64((_440 & INT64_C(4294967295)), 12))), _441));
#line 131 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _442 = _15;
  _443 = _16;
  _444 = _17;
  _445 = *(uint64_t*)(((&(&_13)->array[((int64_t)5)])));
  _446 = _14;
  _14 = (llvm_add_u64(_446, (llvm_add_u64((llvm_add_u64(((_442 ^ _443) ^ _444), _445)), INT64_C(4294588738)))));
  _447 = _14;
  _448 = _14;
  _449 = _15;
  _14 = (llvm_add_u64(((_447 << 4) | (llvm_lshr_u64((_448 & INT64_C(4294967295)), 28))), _449));
#line 132 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _450 = _14;
  _451 = _15;
  _452 = _16;
  _453 = *(uint64_t*)(((&(&_13)->array[((int64_t)8)])));
  _454 = _17;
  _17 = (llvm_add_u64(_454, (llvm_add_u64((llvm_add_u64(((_450 ^ _451) ^ _452), _453)), INT64_C(2272392833)))));
  _455 = _17;
  _456 = _17;
  _457 = _14;
  _17 = (llvm_add_u64(((_455 << 11) | (llvm_lshr_u64((_456 & INT64_C(4294967295)), 21))), _457));
#line 133 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _458 = _17;
  _459 = _14;
  _460 = _15;
  _461 = *(uint64_t*)(((&(&_13)->array[((int64_t)11)])));
  _462 = _16;
  _16 = (llvm_add_u64(_462, (llvm_add_u64((llvm_add_u64(((_458 ^ _459) ^ _460), _461)), INT64_C(1839030562)))));
  _463 = _16;
  _464 = _16;
  _465 = _17;
  _16 = (llvm_add_u64(((_463 << 16) | (llvm_lshr_u64((_464 & INT64_C(4294967295)), 16))), _465));
#line 134 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _466 = _16;
  _467 = _17;
  _468 = _14;
  _469 = *(uint64_t*)(((&(&_13)->array[((int64_t)14)])));
  _470 = _15;
  _15 = (llvm_add_u64(_470, (llvm_add_u64((llvm_add_u64(((_466 ^ _467) ^ _468), _469)), INT64_C(4259657740)))));
  _471 = _15;
  _472 = _15;
  _473 = _16;
  _15 = (llvm_add_u64(((_471 << 23) | (llvm_lshr_u64((_472 & INT64_C(4294967295)), 9))), _473));
#line 135 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _474 = _15;
  _475 = _16;
  _476 = _17;
  _477 = *(uint64_t*)(((&(&_13)->array[((int64_t)1)])));
  _478 = _14;
  _14 = (llvm_add_u64(_478, (llvm_add_u64((llvm_add_u64(((_474 ^ _475) ^ _476), _477)), INT64_C(2763975236)))));
  _479 = _14;
  _480 = _14;
  _481 = _15;
  _14 = (llvm_add_u64(((_479 << 4) | (llvm_lshr_u64((_480 & INT64_C(4294967295)), 28))), _481));
#line 136 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _482 = _14;
  _483 = _15;
  _484 = _16;
  _485 = *(uint64_t*)(((&(&_13)->array[((int64_t)4)])));
  _486 = _17;
  _17 = (llvm_add_u64(_486, (llvm_add_u64((llvm_add_u64(((_482 ^ _483) ^ _484), _485)), INT64_C(1272893353)))));
  _487 = _17;
  _488 = _17;
  _489 = _14;
  _17 = (llvm_add_u64(((_487 << 11) | (llvm_lshr_u64((_488 & INT64_C(4294967295)), 21))), _489));
#line 137 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _490 = _17;
  _491 = _14;
  _492 = _15;
  _493 = *(uint64_t*)(((&(&_13)->array[((int64_t)7)])));
  _494 = _16;
  _16 = (llvm_add_u64(_494, (llvm_add_u64((llvm_add_u64(((_490 ^ _491) ^ _492), _493)), INT64_C(4139469664)))));
  _495 = _16;
  _496 = _16;
  _497 = _17;
  _16 = (llvm_add_u64(((_495 << 16) | (llvm_lshr_u64((_496 & INT64_C(4294967295)), 16))), _497));
#line 138 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _498 = _16;
  _499 = _17;
  _500 = _14;
  _501 = *(uint64_t*)(((&(&_13)->array[((int64_t)10)])));
  _502 = _15;
  _15 = (llvm_add_u64(_502, (llvm_add_u64((llvm_add_u64(((_498 ^ _499) ^ _500), _501)), INT64_C(3200236656)))));
  _503 = _15;
  _504 = _15;
  _505 = _16;
  _15 = (llvm_add_u64(((_503 << 23) | (llvm_lshr_u64((_504 & INT64_C(4294967295)), 9))), _505));
#line 139 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _506 = _15;
  _507 = _16;
  _508 = _17;
  _509 = *(uint64_t*)(((&(&_13)->array[((int64_t)13)])));
  _510 = _14;
  _14 = (llvm_add_u64(_510, (llvm_add_u64((llvm_add_u64(((_506 ^ _507) ^ _508), _509)), 681279174))));
  _511 = _14;
  _512 = _14;
  _513 = _15;
  _14 = (llvm_add_u64(((_511 << 4) | (llvm_lshr_u64((_512 & INT64_C(4294967295)), 28))), _513));
#line 140 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _514 = _14;
  _515 = _15;
  _516 = _16;
  _517 = *(uint64_t*)(((&(&_13)->array[((int64_t)0)])));
  _518 = _17;
  _17 = (llvm_add_u64(_518, (llvm_add_u64((llvm_add_u64(((_514 ^ _515) ^ _516), _517)), INT64_C(3936430074)))));
  _519 = _17;
  _520 = _17;
  _521 = _14;
  _17 = (llvm_add_u64(((_519 << 11) | (llvm_lshr_u64((_520 & INT64_C(4294967295)), 21))), _521));
#line 141 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _522 = _17;
  _523 = _14;
  _524 = _15;
  _525 = *(uint64_t*)(((&(&_13)->array[((int64_t)3)])));
  _526 = _16;
  _16 = (llvm_add_u64(_526, (llvm_add_u64((llvm_add_u64(((_522 ^ _523) ^ _524), _525)), INT64_C(3572445317)))));
  _527 = _16;
  _528 = _16;
  _529 = _17;
  _16 = (llvm_add_u64(((_527 << 16) | (llvm_lshr_u64((_528 & INT64_C(4294967295)), 16))), _529));
#line 142 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _530 = _16;
  _531 = _17;
  _532 = _14;
  _533 = *(uint64_t*)(((&(&_13)->array[((int64_t)6)])));
  _534 = _15;
  _15 = (llvm_add_u64(_534, (llvm_add_u64((llvm_add_u64(((_530 ^ _531) ^ _532), _533)), 76029189))));
  _535 = _15;
  _536 = _15;
  _537 = _16;
  _15 = (llvm_add_u64(((_535 << 23) | (llvm_lshr_u64((_536 & INT64_C(4294967295)), 9))), _537));
#line 143 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _538 = _15;
  _539 = _16;
  _540 = _17;
  _541 = *(uint64_t*)(((&(&_13)->array[((int64_t)9)])));
  _542 = _14;
  _14 = (llvm_add_u64(_542, (llvm_add_u64((llvm_add_u64(((_538 ^ _539) ^ _540), _541)), INT64_C(3654602809)))));
  _543 = _14;
  _544 = _14;
  _545 = _15;
  _14 = (llvm_add_u64(((_543 << 4) | (llvm_lshr_u64((_544 & INT64_C(4294967295)), 28))), _545));
#line 144 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _546 = _14;
  _547 = _15;
  _548 = _16;
  _549 = *(uint64_t*)(((&(&_13)->array[((int64_t)12)])));
  _550 = _17;
  _17 = (llvm_add_u64(_550, (llvm_add_u64((llvm_add_u64(((_546 ^ _547) ^ _548), _549)), INT64_C(3873151461)))));
  _551 = _17;
  _552 = _17;
  _553 = _14;
  _17 = (llvm_add_u64(((_551 << 11) | (llvm_lshr_u64((_552 & INT64_C(4294967295)), 21))), _553));
#line 145 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _554 = _17;
  _555 = _14;
  _556 = _15;
  _557 = *(uint64_t*)(((&(&_13)->array[((int64_t)15)])));
  _558 = _16;
  _16 = (llvm_add_u64(_558, (llvm_add_u64((llvm_add_u64(((_554 ^ _555) ^ _556), _557)), 530742520))));
  _559 = _16;
  _560 = _16;
  _561 = _17;
  _16 = (llvm_add_u64(((_559 << 16) | (llvm_lshr_u64((_560 & INT64_C(4294967295)), 16))), _561));
#line 146 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _562 = _16;
  _563 = _17;
  _564 = _14;
  _565 = *(uint64_t*)(((&(&_13)->array[((int64_t)2)])));
  _566 = _15;
  _15 = (llvm_add_u64(_566, (llvm_add_u64((llvm_add_u64(((_562 ^ _563) ^ _564), _565)), INT64_C(3299628645)))));
  _567 = _15;
  _568 = _15;
  _569 = _16;
  _15 = (llvm_add_u64(((_567 << 23) | (llvm_lshr_u64((_568 & INT64_C(4294967295)), 9))), _569));
#line 152 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _570 = _16;
  _571 = _15;
  _572 = _17;
  _573 = *(uint64_t*)(((&(&_13)->array[((int64_t)0)])));
  _574 = _14;
  _14 = (llvm_add_u64(_574, (llvm_add_u64((llvm_add_u64((_570 ^ (_571 | (_572 ^ -1))), _573)), INT64_C(4096336452)))));
  _575 = _14;
  _576 = _14;
  _577 = _15;
  _14 = (llvm_add_u64(((_575 << 6) | (llvm_lshr_u64((_576 & INT64_C(4294967295)), 26))), _577));
#line 153 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _578 = _15;
  _579 = _14;
  _580 = _16;
  _581 = *(uint64_t*)(((&(&_13)->array[((int64_t)7)])));
  _582 = _17;
  _17 = (llvm_add_u64(_582, (llvm_add_u64((llvm_add_u64((_578 ^ (_579 | (_580 ^ -1))), _581)), INT64_C(1126891415)))));
  _583 = _17;
  _584 = _17;
  _585 = _14;
  _17 = (llvm_add_u64(((_583 << 10) | (llvm_lshr_u64((_584 & INT64_C(4294967295)), 22))), _585));
#line 154 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _586 = _14;
  _587 = _17;
  _588 = _15;
  _589 = *(uint64_t*)(((&(&_13)->array[((int64_t)14)])));
  _590 = _16;
  _16 = (llvm_add_u64(_590, (llvm_add_u64((llvm_add_u64((_586 ^ (_587 | (_588 ^ -1))), _589)), INT64_C(2878612391)))));
  _591 = _16;
  _592 = _16;
  _593 = _17;
  _16 = (llvm_add_u64(((_591 << 15) | (llvm_lshr_u64((_592 & INT64_C(4294967295)), 17))), _593));
#line 155 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _594 = _17;
  _595 = _16;
  _596 = _14;
  _597 = *(uint64_t*)(((&(&_13)->array[((int64_t)5)])));
  _598 = _15;
  _15 = (llvm_add_u64(_598, (llvm_add_u64((llvm_add_u64((_594 ^ (_595 | (_596 ^ -1))), _597)), INT64_C(4237533241)))));
  _599 = _15;
  _600 = _15;
  _601 = _16;
  _15 = (llvm_add_u64(((_599 << 21) | (llvm_lshr_u64((_600 & INT64_C(4294967295)), 11))), _601));
#line 156 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _602 = _16;
  _603 = _15;
  _604 = _17;
  _605 = *(uint64_t*)(((&(&_13)->array[((int64_t)12)])));
  _606 = _14;
  _14 = (llvm_add_u64(_606, (llvm_add_u64((llvm_add_u64((_602 ^ (_603 | (_604 ^ -1))), _605)), INT64_C(1700485571)))));
  _607 = _14;
  _608 = _14;
  _609 = _15;
  _14 = (llvm_add_u64(((_607 << 6) | (llvm_lshr_u64((_608 & INT64_C(4294967295)), 26))), _609));
#line 157 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _610 = _15;
  _611 = _14;
  _612 = _16;
  _613 = *(uint64_t*)(((&(&_13)->array[((int64_t)3)])));
  _614 = _17;
  _17 = (llvm_add_u64(_614, (llvm_add_u64((llvm_add_u64((_610 ^ (_611 | (_612 ^ -1))), _613)), INT64_C(2399980690)))));
  _615 = _17;
  _616 = _17;
  _617 = _14;
  _17 = (llvm_add_u64(((_615 << 10) | (llvm_lshr_u64((_616 & INT64_C(4294967295)), 22))), _617));
#line 158 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _618 = _14;
  _619 = _17;
  _620 = _15;
  _621 = *(uint64_t*)(((&(&_13)->array[((int64_t)10)])));
  _622 = _16;
  _16 = (llvm_add_u64(_622, (llvm_add_u64((llvm_add_u64((_618 ^ (_619 | (_620 ^ -1))), _621)), INT64_C(4293915773)))));
  _623 = _16;
  _624 = _16;
  _625 = _17;
  _16 = (llvm_add_u64(((_623 << 15) | (llvm_lshr_u64((_624 & INT64_C(4294967295)), 17))), _625));
#line 159 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _626 = _17;
  _627 = _16;
  _628 = _14;
  _629 = *(uint64_t*)(((&(&_13)->array[((int64_t)1)])));
  _630 = _15;
  _15 = (llvm_add_u64(_630, (llvm_add_u64((llvm_add_u64((_626 ^ (_627 | (_628 ^ -1))), _629)), INT64_C(2240044497)))));
  _631 = _15;
  _632 = _15;
  _633 = _16;
  _15 = (llvm_add_u64(((_631 << 21) | (llvm_lshr_u64((_632 & INT64_C(4294967295)), 11))), _633));
#line 160 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _634 = _16;
  _635 = _15;
  _636 = _17;
  _637 = *(uint64_t*)(((&(&_13)->array[((int64_t)8)])));
  _638 = _14;
  _14 = (llvm_add_u64(_638, (llvm_add_u64((llvm_add_u64((_634 ^ (_635 | (_636 ^ -1))), _637)), INT64_C(1873313359)))));
  _639 = _14;
  _640 = _14;
  _641 = _15;
  _14 = (llvm_add_u64(((_639 << 6) | (llvm_lshr_u64((_640 & INT64_C(4294967295)), 26))), _641));
#line 161 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _642 = _15;
  _643 = _14;
  _644 = _16;
  _645 = *(uint64_t*)(((&(&_13)->array[((int64_t)15)])));
  _646 = _17;
  _17 = (llvm_add_u64(_646, (llvm_add_u64((llvm_add_u64((_642 ^ (_643 | (_644 ^ -1))), _645)), INT64_C(4264355552)))));
  _647 = _17;
  _648 = _17;
  _649 = _14;
  _17 = (llvm_add_u64(((_647 << 10) | (llvm_lshr_u64((_648 & INT64_C(4294967295)), 22))), _649));
#line 162 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _650 = _14;
  _651 = _17;
  _652 = _15;
  _653 = *(uint64_t*)(((&(&_13)->array[((int64_t)6)])));
  _654 = _16;
  _16 = (llvm_add_u64(_654, (llvm_add_u64((llvm_add_u64((_650 ^ (_651 | (_652 ^ -1))), _653)), INT64_C(2734768916)))));
  _655 = _16;
  _656 = _16;
  _657 = _17;
  _16 = (llvm_add_u64(((_655 << 15) | (llvm_lshr_u64((_656 & INT64_C(4294967295)), 17))), _657));
#line 163 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _658 = _17;
  _659 = _16;
  _660 = _14;
  _661 = *(uint64_t*)(((&(&_13)->array[((int64_t)13)])));
  _662 = _15;
  _15 = (llvm_add_u64(_662, (llvm_add_u64((llvm_add_u64((_658 ^ (_659 | (_660 ^ -1))), _661)), INT64_C(1309151649)))));
  _663 = _15;
  _664 = _15;
  _665 = _16;
  _15 = (llvm_add_u64(((_663 << 21) | (llvm_lshr_u64((_664 & INT64_C(4294967295)), 11))), _665));
#line 164 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _666 = _16;
  _667 = _15;
  _668 = _17;
  _669 = *(uint64_t*)(((&(&_13)->array[((int64_t)4)])));
  _670 = _14;
  _14 = (llvm_add_u64(_670, (llvm_add_u64((llvm_add_u64((_666 ^ (_667 | (_668 ^ -1))), _669)), INT64_C(4149444226)))));
  _671 = _14;
  _672 = _14;
  _673 = _15;
  _14 = (llvm_add_u64(((_671 << 6) | (llvm_lshr_u64((_672 & INT64_C(4294967295)), 26))), _673));
#line 165 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _674 = _15;
  _675 = _14;
  _676 = _16;
  _677 = *(uint64_t*)(((&(&_13)->array[((int64_t)11)])));
  _678 = _17;
  _17 = (llvm_add_u64(_678, (llvm_add_u64((llvm_add_u64((_674 ^ (_675 | (_676 ^ -1))), _677)), INT64_C(3174756917)))));
  _679 = _17;
  _680 = _17;
  _681 = _14;
  _17 = (llvm_add_u64(((_679 << 10) | (llvm_lshr_u64((_680 & INT64_C(4294967295)), 22))), _681));
#line 166 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _682 = _14;
  _683 = _17;
  _684 = _15;
  _685 = *(uint64_t*)(((&(&_13)->array[((int64_t)2)])));
  _686 = _16;
  _16 = (llvm_add_u64(_686, (llvm_add_u64((llvm_add_u64((_682 ^ (_683 | (_684 ^ -1))), _685)), 718787259))));
  _687 = _16;
  _688 = _16;
  _689 = _17;
  _16 = (llvm_add_u64(((_687 << 15) | (llvm_lshr_u64((_688 & INT64_C(4294967295)), 17))), _689));
#line 167 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _690 = _17;
  _691 = _16;
  _692 = _14;
  _693 = *(uint64_t*)(((&(&_13)->array[((int64_t)9)])));
  _694 = _15;
  _15 = (llvm_add_u64(_694, (llvm_add_u64((llvm_add_u64((_690 ^ (_691 | (_692 ^ -1))), _693)), INT64_C(3951481745)))));
  _695 = _15;
  _696 = _15;
  _697 = _16;
  _15 = (llvm_add_u64(((_695 << 21) | (llvm_lshr_u64((_696 & INT64_C(4294967295)), 11))), _697));
#line 171 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _698 = _14;
  _699 = _11;
  _700 = ((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_699)->field1)))))->array[((int64_t)0)]));
  _701 = *(uint64_t*)_700;
  *(uint64_t*)_700 = (llvm_add_u64(_701, _698));
#line 172 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _702 = _15;
  _703 = _11;
  _704 = ((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_703)->field1)))))->array[((int64_t)1)]));
  _705 = *(uint64_t*)_704;
  *(uint64_t*)_704 = (llvm_add_u64(_705, _702));
#line 173 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _706 = _16;
  _707 = _11;
  _708 = ((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_707)->field1)))))->array[((int64_t)2)]));
  _709 = *(uint64_t*)_708;
  *(uint64_t*)_708 = (llvm_add_u64(_709, _706));
#line 174 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _710 = _17;
  _711 = _11;
  _712 = ((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_711)->field1)))))->array[((int64_t)3)]));
  _713 = *(uint64_t*)_712;
  *(uint64_t*)_712 = (llvm_add_u64(_713, _710));
}


void md5_update(void* _714, void* _715, uint64_t _716) {
  void* _717;    /* Address-exposed local */
  void* _718;    /* Address-exposed local */
  uint64_t _719;    /* Address-exposed local */
  uint64_t _720;    /* Address-exposed local */
  uint64_t _721;    /* Address-exposed local */
  uint64_t _722;
  void* _723;
  uint64_t _724;
  uint64_t _725;
  uint64_t _726;
  void* _727;
  void* _728;
  uint64_t _729;
  void* _730;
  void* _731;
  uint64_t _732;
  void* _733;
  uint64_t _734;
  uint64_t _735;
  void* _736;
  void* _737;
  uint64_t _738;
  uint64_t _739;
  uint64_t _740;
  uint64_t _741;
  void* _742;
  uint64_t _743;
  void* _744;
  uint64_t _745;
  void* _746;
  void* _747;
  void* _748;
  uint64_t _749;
  uint64_t _750;
  uint64_t _751;
  void* _752;
  uint64_t _753;
  void* _754;
  void* _755;
  uint64_t _756;
  void* _757;
  uint64_t _758;
  void* _759;
  uint64_t _760;
  void* _761;
  uint64_t _762;
  void* _763;

  _717 = _714;
#line 178 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _718 = _715;
  ;
  _719 = _716;
  ;
#line 180 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  ;
#line 182 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _722 = _719;
  if ((_722 != UINT64_C(0))) {
    goto _764;
  } else {
    goto _765;
  }

_765:
  goto _766;

_764:
#line 184 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _723 = _717;
  _724 = *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_723)->field0)))))->array[((int64_t)0)])));
  _720 = (_724 & 63);
#line 185 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _725 = _720;
  _721 = (llvm_sub_u64(64, _725));
#line 187 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _726 = _719;
  _727 = _717;
  _728 = ((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_727)->field0)))))->array[((int64_t)0)]));
  _729 = *(uint64_t*)_728;
  *(uint64_t*)_728 = (llvm_add_u64(_729, _726));
#line 188 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _730 = _717;
  _731 = ((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_730)->field0)))))->array[((int64_t)0)]));
  _732 = *(uint64_t*)_731;
  *(uint64_t*)_731 = (_732 & INT64_C(4294967295));
#line 190 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _733 = _717;
  _734 = *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_733)->field0)))))->array[((int64_t)0)])));
  _735 = _719;
  if ((((uint64_t)_734) < ((uint64_t)_735))) {
    goto _767;
  } else {
    goto _768;
  }

_767:
#line 191 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _736 = _717;
  _737 = ((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_736)->field0)))))->array[((int64_t)1)]));
  _738 = *(uint64_t*)_737;
  *(uint64_t*)_737 = (llvm_add_u64(_738, 1));
  goto _768;

_768:
#line 193 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _739 = _720;
  if ((_739 != UINT64_C(0))) {
    goto _769;
  } else {
    goto _770;
  }

_769:
  _740 = _719;
  _741 = _721;
  if ((((uint64_t)_740) >= ((uint64_t)_741))) {
    goto _771;
  } else {
    goto _770;
  }

_771:
#line 195 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _742 = _717;
  _743 = _720;
#line 196 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _744 = _718;
  _745 = _721;
#line 195 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _746 = memcpy((((&((uint8_t*)(((&((struct l_array_64_uint8_t*)(((&(((struct l_struct_struct_OC_md5_context*)_742)->field2)))))->array[((int64_t)0)]))))[((int64_t)_743)]))), _744, _745);
#line 197 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _747 = _717;
  _748 = _717;
  md5_process(_747, (((&((struct l_array_64_uint8_t*)(((&(((struct l_struct_struct_OC_md5_context*)_748)->field2)))))->array[((int64_t)0)]))));
#line 198 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _749 = _721;
  _750 = _719;
  _719 = (llvm_sub_u64(_750, _749));
#line 199 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _751 = _721;
  _752 = _718;
  _718 = (((&((uint8_t*)_752)[((int64_t)_751)])));
#line 200 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _720 = 0;
  goto _770;

_770:
  goto _772;

  do {     /* Syntactic loop '' to make GCC happy */
_772:
#line 203 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _753 = _719;
  if ((((uint64_t)_753) >= ((uint64_t)UINT64_C(64)))) {
    goto _773;
  } else {
    goto _774;
  }

_773:
#line 205 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _754 = _717;
  _755 = _718;
  md5_process(_754, _755);
#line 206 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _756 = _719;
  _719 = (llvm_sub_u64(_756, 64));
#line 207 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _757 = _718;
  _718 = (((&((uint8_t*)_757)[((int64_t)64)])));
  goto _772;

  } while (1); /* end of syntactic loop '' */
_774:
#line 210 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _758 = _719;
  if ((_758 != UINT64_C(0))) {
    goto _775;
  } else {
    goto _766;
  }

_775:
#line 212 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _759 = _717;
  _760 = _720;
#line 213 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _761 = _718;
  _762 = _719;
#line 212 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _763 = memcpy((((&((uint8_t*)(((&((struct l_array_64_uint8_t*)(((&(((struct l_struct_struct_OC_md5_context*)_759)->field2)))))->array[((int64_t)0)]))))[((int64_t)_760)]))), _761, _762);
  goto _766;

_766:
  return;
}


void md5_finish(void* _776, void* _777) {
  void* _778;    /* Address-exposed local */
  void* _779;    /* Address-exposed local */
  uint64_t _780;    /* Address-exposed local */
  uint64_t _781;    /* Address-exposed local */
  uint64_t _782;    /* Address-exposed local */
  uint64_t _783;    /* Address-exposed local */
  struct l_array_8_uint8_t _784;    /* Address-exposed local */
  void* _785;
  uint64_t _786;
  void* _787;
  uint64_t _788;
  void* _789;
  uint64_t _790;
  uint64_t _791;
  uint64_t _792;
  uint64_t _793;
  uint64_t _794;
  uint64_t _795;
  uint64_t _796;
  uint64_t _797;
  uint64_t _798;
  void* _799;
  uint64_t _800;
  uint64_t _801;
  uint64_t _802;
  uint64_t _803;
  uint64_t _804;
  uint64_t _805;
  uint64_t _806;
  uint64_t _806__PHI_TEMPORARY;
  void* _807;
  uint64_t _808;
  void* _809;
  void* _810;
  uint64_t _811;
  void* _812;
  void* _813;
  uint64_t _814;
  void* _815;
  void* _816;
  uint64_t _817;
  void* _818;
  void* _819;
  uint64_t _820;
  void* _821;
  void* _822;
  uint64_t _823;
  void* _824;
  void* _825;
  uint64_t _826;
  void* _827;
  void* _828;
  uint64_t _829;
  void* _830;
  void* _831;
  uint64_t _832;
  void* _833;
  void* _834;
  uint64_t _835;
  void* _836;
  void* _837;
  uint64_t _838;
  void* _839;
  void* _840;
  uint64_t _841;
  void* _842;
  void* _843;
  uint64_t _844;
  void* _845;
  void* _846;
  uint64_t _847;
  void* _848;
  void* _849;
  uint64_t _850;
  void* _851;
  void* _852;
  uint64_t _853;
  void* _854;
  void* _855;
  uint64_t _856;
  void* _857;

  _778 = _776;
#line 226 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _779 = _777;
  ;
#line 228 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  ;
#line 229 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  ;
#line 230 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 232 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _785 = _778;
  _786 = *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_785)->field0)))))->array[((int64_t)0)])));
#line 233 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _787 = _778;
  _788 = *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_787)->field0)))))->array[((int64_t)1)])));
#line 232 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _782 = ((llvm_lshr_u64(_786, 29)) | (_788 << 3));
#line 234 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _789 = _778;
  _790 = *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_789)->field0)))))->array[((int64_t)0)])));
  _783 = (_790 << 3);
#line 236 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _791 = _783;
  *(uint8_t*)(((&(&_784)->array[((int64_t)0)]))) = (((uint8_t)_791));
  _792 = _783;
  *(uint8_t*)(((&(&_784)->array[((int64_t)1)]))) = (((uint8_t)(llvm_lshr_u64(_792, 8))));
  _793 = _783;
  *(uint8_t*)(((&(&_784)->array[((int64_t)2)]))) = (((uint8_t)(llvm_lshr_u64(_793, 16))));
  _794 = _783;
  *(uint8_t*)(((&(&_784)->array[((int64_t)3)]))) = (((uint8_t)(llvm_lshr_u64(_794, 24))));
#line 237 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _795 = _782;
  *(uint8_t*)(((&(&_784)->array[((int64_t)4)]))) = (((uint8_t)_795));
  _796 = _782;
  *(uint8_t*)(((&(&_784)->array[((int64_t)5)]))) = (((uint8_t)(llvm_lshr_u64(_796, 8))));
  _797 = _782;
  *(uint8_t*)(((&(&_784)->array[((int64_t)6)]))) = (((uint8_t)(llvm_lshr_u64(_797, 16))));
  _798 = _782;
  *(uint8_t*)(((&(&_784)->array[((int64_t)7)]))) = (((uint8_t)(llvm_lshr_u64(_798, 24))));
#line 239 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _799 = _778;
  _800 = *(uint64_t*)(((&((struct l_array_2_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_799)->field0)))))->array[((int64_t)0)])));
  _780 = (_800 & 63);
#line 240 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _801 = _780;
  if ((((uint64_t)_801) < ((uint64_t)UINT64_C(56)))) {
    goto _858;
  } else {
    goto _859;
  }

_858:
  _802 = _780;
  _803 = llvm_sub_u64(56, _802);
  _806__PHI_TEMPORARY = _803;   /* for PHI node */
  goto _860;

_859:
  _804 = _780;
  _805 = llvm_sub_u64(120, _804);
  _806__PHI_TEMPORARY = _805;   /* for PHI node */
  goto _860;

_860:
  _806 = _806__PHI_TEMPORARY;
  _781 = _806;
#line 242 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _807 = _778;
  _808 = _781;
  md5_update(_807, (&md5_padding), _808);
#line 243 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _809 = _778;
  md5_update(_809, (((&(&_784)->array[((int64_t)0)]))), 8);
#line 245 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _810 = _778;
  _811 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_810)->field1)))))->array[((int64_t)0)])));
  _812 = _779;
  *(uint8_t*)((((uint8_t*)_812))) = (((uint8_t)_811));
  _813 = _778;
  _814 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_813)->field1)))))->array[((int64_t)0)])));
  _815 = _779;
  *(uint8_t*)(((&((uint8_t*)_815)[((int64_t)1)]))) = (((uint8_t)(llvm_lshr_u64(_814, 8))));
  _816 = _778;
  _817 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_816)->field1)))))->array[((int64_t)0)])));
  _818 = _779;
  *(uint8_t*)(((&((uint8_t*)_818)[((int64_t)2)]))) = (((uint8_t)(llvm_lshr_u64(_817, 16))));
  _819 = _778;
  _820 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_819)->field1)))))->array[((int64_t)0)])));
  _821 = _779;
  *(uint8_t*)(((&((uint8_t*)_821)[((int64_t)3)]))) = (((uint8_t)(llvm_lshr_u64(_820, 24))));
#line 246 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _822 = _778;
  _823 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_822)->field1)))))->array[((int64_t)1)])));
  _824 = _779;
  *(uint8_t*)(((&((uint8_t*)_824)[((int64_t)4)]))) = (((uint8_t)_823));
  _825 = _778;
  _826 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_825)->field1)))))->array[((int64_t)1)])));
  _827 = _779;
  *(uint8_t*)(((&((uint8_t*)_827)[((int64_t)5)]))) = (((uint8_t)(llvm_lshr_u64(_826, 8))));
  _828 = _778;
  _829 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_828)->field1)))))->array[((int64_t)1)])));
  _830 = _779;
  *(uint8_t*)(((&((uint8_t*)_830)[((int64_t)6)]))) = (((uint8_t)(llvm_lshr_u64(_829, 16))));
  _831 = _778;
  _832 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_831)->field1)))))->array[((int64_t)1)])));
  _833 = _779;
  *(uint8_t*)(((&((uint8_t*)_833)[((int64_t)7)]))) = (((uint8_t)(llvm_lshr_u64(_832, 24))));
#line 247 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _834 = _778;
  _835 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_834)->field1)))))->array[((int64_t)2)])));
  _836 = _779;
  *(uint8_t*)(((&((uint8_t*)_836)[((int64_t)8)]))) = (((uint8_t)_835));
  _837 = _778;
  _838 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_837)->field1)))))->array[((int64_t)2)])));
  _839 = _779;
  *(uint8_t*)(((&((uint8_t*)_839)[((int64_t)9)]))) = (((uint8_t)(llvm_lshr_u64(_838, 8))));
  _840 = _778;
  _841 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_840)->field1)))))->array[((int64_t)2)])));
  _842 = _779;
  *(uint8_t*)(((&((uint8_t*)_842)[((int64_t)10)]))) = (((uint8_t)(llvm_lshr_u64(_841, 16))));
  _843 = _778;
  _844 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_843)->field1)))))->array[((int64_t)2)])));
  _845 = _779;
  *(uint8_t*)(((&((uint8_t*)_845)[((int64_t)11)]))) = (((uint8_t)(llvm_lshr_u64(_844, 24))));
#line 248 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _846 = _778;
  _847 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_846)->field1)))))->array[((int64_t)3)])));
  _848 = _779;
  *(uint8_t*)(((&((uint8_t*)_848)[((int64_t)12)]))) = (((uint8_t)_847));
  _849 = _778;
  _850 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_849)->field1)))))->array[((int64_t)3)])));
  _851 = _779;
  *(uint8_t*)(((&((uint8_t*)_851)[((int64_t)13)]))) = (((uint8_t)(llvm_lshr_u64(_850, 8))));
  _852 = _778;
  _853 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_852)->field1)))))->array[((int64_t)3)])));
  _854 = _779;
  *(uint8_t*)(((&((uint8_t*)_854)[((int64_t)14)]))) = (((uint8_t)(llvm_lshr_u64(_853, 16))));
  _855 = _778;
  _856 = *(uint64_t*)(((&((struct l_array_4_uint64_t*)(((&(((struct l_struct_struct_OC_md5_context*)_855)->field1)))))->array[((int64_t)3)])));
  _857 = _779;
  *(uint8_t*)(((&((uint8_t*)_857)[((int64_t)15)]))) = (((uint8_t)(llvm_lshr_u64(_856, 24))));
}


uint32_t my_rand_r(void* _861) {
  void* _862;    /* Address-exposed local */
  uint32_t _863;    /* Address-exposed local */
  void* _864;
  uint32_t _865;
  uint32_t _866;
  void* _867;
  uint32_t _868;

  _862 = _861;
#line 256 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 259 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _864 = _862;
  _865 = *(uint32_t*)_864;
  _863 = (llvm_add_u32((llvm_mul_u32(_865, 1664525)), 1013904223));
#line 260 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _866 = _863;
  _867 = _862;
  *(uint32_t*)_867 = _866;
#line 261 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _868 = _863;
  return ((llvm_lshr_u32(_868, 16)) & 32767);
}


void d_md5(void* _869, void* _870) {
  void* _871;    /* Address-exposed local */
  void* _872;    /* Address-exposed local */
  uint32_t _873;    /* Address-exposed local */
  uint32_t _874;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_33_uint8_t _875 __POSTFIXALIGN__(16);    /* Address-exposed local */
  struct l_struct_struct_OC_md5_context _876;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_100000_uint8_t _877 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _878;    /* Address-exposed local */
  void* _879;
  uint32_t _880;
  uint32_t _881;
  uint32_t _882;
  uint32_t _883;
  uint32_t _884;
  uint32_t _885;
  uint32_t _886;
  uint32_t _887;
  uint32_t _888;
  void* _889;

  _871 = _869;
#line 265 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _872 = _870;
  ;
#line 268 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 269 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _879 = _871;
  _880 = *(uint32_t*)_879;
  _874 = _880;
#line 270 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 271 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 272 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 274 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _878 = 1;
#line 275 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _873 = 0;
  goto _890;

  do {     /* Syntactic loop '' to make GCC happy */
_890:
  _881 = _873;
  if ((((uint64_t)(((int64_t)(int32_t)_881))) < ((uint64_t)UINT64_C(100000)))) {
    goto _891;
  } else {
    goto _892;
  }

_891:
#line 276 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _882 = my_rand_r((&_878));
  _883 = _873;
  *(uint8_t*)(((&(&_877)->array[((int64_t)(((int64_t)(int32_t)_883)))]))) = (((uint8_t)_882));
  goto _893;

_893:
#line 275 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _884 = _873;
  _873 = (llvm_add_u32(_884, 1));
  goto _890;

  } while (1); /* end of syntactic loop '' */
_892:
#line 278 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  md5_starts((&_876));
#line 279 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _873 = 0;
  goto _894;

  do {     /* Syntactic loop '' to make GCC happy */
_894:
  _885 = _873;
  if ((((int32_t)_885) < ((int32_t)512u))) {
    goto _895;
  } else {
    goto _896;
  }

_895:
#line 280 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _886 = _874;
  _887 = _874;
  md5_update((&_876), (((&((uint8_t*)(((&(&_877)->array[((int64_t)0)]))))[((int64_t)(((int64_t)(int32_t)_886)))]))), (llvm_sub_u64(100000, (((int64_t)(int32_t)_887)))));
  goto _897;

_897:
#line 279 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _888 = _873;
  _873 = (llvm_add_u32(_888, 1));
  goto _894;

  } while (1); /* end of syntactic loop '' */
_896:
#line 281 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _889 = _872;
  md5_finish((&_876), _889);
}


