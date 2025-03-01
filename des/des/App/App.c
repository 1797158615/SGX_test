#include "../Include/des.h"
#include "Enclave_u.h"

int initialize_enclave(void)
{
    sgx_status_t ret = SGX_ERROR_UNEXPECTED;
    ret = sgx_create_enclave(ENCLAVE_FILENAME, SGX_DEBUG_FLAG, NULL, NULL, &global_eid, NULL);
    return 0;
}
int main(int argc, char ** argv) {

  if(initialize_enclave() < 0){
    return -1;
  }

  uint32_t _2204 = (uint32_t)argc;
  void* _2205 = (void*)argv;
  uint32_t _2206;    /* Address-exposed local */
  uint32_t _2207;    /* Address-exposed local */
  void* _2208;    /* Address-exposed local */
  uint32_t _2209;    /* Address-exposed local */
  uint32_t _2210;    /* Address-exposed local */
  uint32_t _2211;    /* Address-exposed local */
  uint32_t _2212;    /* Address-exposed local */
  uint64_t _2213;    /* Address-exposed local */
  uint64_t _2214;    /* Address-exposed local */
  double _2215;    /* Address-exposed local */
  uint32_t _2216;
  void* _2217;
  void* _2218;
  uint32_t _2219;
  uint64_t _2220;
  uint32_t _2221;
  uint32_t _2222;
  uint32_t _2223;
  uint32_t _2224;
  uint32_t _2225;
  uint32_t _2226;
  uint32_t _2227;
  uint32_t _2228;
  uint32_t _2229;
  uint32_t _2230;
  uint32_t _2231;
  uint32_t _2232;
  uint32_t _2233;
  uint32_t _2234;
  uint32_t _2235;
  uint32_t _2236;
  uint64_t _2237;
  uint64_t _2238;
  uint64_t _2239;
  double _2240;
  uint32_t _2241;
  uint32_t _2242;

  _2206 = 0;
  _2207 = _2204;
#line 604 "/home/yxk/test-sgx/SGX-test/des/des.c"
  ;
  _2208 = _2205;
  ;
#line 605 "/home/yxk/test-sgx/SGX-test/des/des.c"
  ;
  ;
  ;
#line 606 "/home/yxk/test-sgx/SGX-test/des/des.c"
  ;
  _2212 = 0;
#line 607 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2216 = _2207;
  if ((_2216 == 2u)) {
    goto _2243;
  } else {
    goto _2244;
  }

_2243:
  _2217 = _2208;
  _2218 = *(void**)(((&((void**)_2217)[((int64_t)1)])));
  _2219 = atoi(_2218);
  _2209 = _2219;
  goto _2244;

_2244:
#line 608 "/home/yxk/test-sgx/SGX-test/des/des.c"
  ;
  _2220 = clock();
  _2213 = _2220;
#line 609 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2210 = 0;
  goto _2245;

  do {     /* Syntactic loop '' to make GCC happy */
_2245:
  _2221 = _2210;
  if ((((int32_t)_2221) < ((int32_t)2u))) {
    goto _2246;
  } else {
    goto _2247;
  }

_2246:
#line 611 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2222 = printf((&_OC_str_OC_4));
#line 613 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2223 = _2210;
  if ((_2223 == 0u)) {
    goto _2248;
  } else {
    goto _2249;
  }

_2248:
  _2224 = printf((&_OC_str_OC_5));
  goto _2249;

_2249:
#line 614 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2225 = _2210;
  if ((_2225 == 1u)) {
    goto _2250;
  } else {
    goto _2251;
  }

_2250:
  _2226 = printf((&_OC_str_OC_6));
  goto _2251;

_2251:
#line 616 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2211 = 0;
  goto _2252;

  do {     /* Syntactic loop '' to make GCC happy */
_2252:
  _2227 = _2211;
  if ((((int32_t)_2227) < ((int32_t)3u))) {
    goto _2253;
  } else {
    goto _2254;
  }

_2253:
#line 619 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2228 = _2211;
  _2229 = _2211;
#line 618 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2230 = printf((&_OC_str_OC_7), (llvm_add_u32(_2228, 1)), (llvm_add_u32(64, (llvm_mul_u32(_2229, 64)))));
#line 620 "/home/yxk/test-sgx/SGX-test/des/des.c"
  d_des(global_eid, (&_2210), (&_2209), (&_2212), (&_2211));
#line 621 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2231 = _2212;
  if ((_2231 == 0u)) {
    goto _2255;
  } else {
    goto _2256;
  }

_2256:
#line 624 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2233 = printf((&_OC_str_OC_9));
  goto _2257;

_2255:
#line 622 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2232 = printf((&_OC_str_OC_8));
  goto _2257;

_2257:
  goto _2258;

_2258:
#line 616 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2234 = _2211;
  _2211 = (llvm_add_u32(_2234, 1));
  goto _2252;

  } while (1); /* end of syntactic loop '' */
_2254:
  goto _2259;

_2259:
#line 609 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2235 = _2210;
  _2210 = (llvm_add_u32(_2235, 1));
  goto _2245;

  } while (1); /* end of syntactic loop '' */
_2247:
#line 628 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2236 = printf((&_OC_str_OC_10));
#line 629 "/home/yxk/test-sgx/SGX-test/des/des.c"
  ;
  _2237 = clock();
  _2214 = _2237;
#line 630 "/home/yxk/test-sgx/SGX-test/des/des.c"
  ;
  _2238 = _2214;
  _2239 = _2213;
  _2215 = (((((double)(int64_t)(llvm_sub_u64(_2238, _2239)))) / 1.0E+6) * 1000);
#line 631 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2240 = _2215;
  _2241 = printf((&_OC_str_OC_11), _2240);
#line 632 "/home/yxk/test-sgx/SGX-test/des/des.c"
  _2242 = printf((&_OC_str_OC_12));

  sgx_destroy_enclave(global_eid);
  return 0;
}

