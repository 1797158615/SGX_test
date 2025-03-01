#include "../Include/almabench.h"
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

  uint32_t _416 = (uint32_t)argc;
  void* _417 = (void*)argv;
  uint32_t _418;    /* Address-exposed local */
  uint32_t _419;    /* Address-exposed local */
  void* _420;    /* Address-exposed local */
  uint64_t _421;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double _422 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint8_t _423;    /* Address-exposed local */
  uint32_t _424;    /* Address-exposed local */
  uint32_t _425;    /* Address-exposed local */
  uint64_t _426;    /* Address-exposed local */
  double _427;    /* Address-exposed local */
  uint64_t _428;
  uint32_t _429;
  uint32_t _430;
  uint32_t _431;
  void* _432;
  void* _433;
  uint32_t _434;
  uint32_t _435;
  uint32_t _436;
  uint32_t _437;
  double _438;
  uint32_t _439;
  double _440;
  uint32_t _441;
  double _442;
  uint32_t _443;
  uint32_t _444;
  uint64_t _445;
  uint64_t _446;
  uint64_t _447;
  double _448;
  uint32_t _449;
  uint32_t _450;

  _418 = 0;
  _419 = _416;
#line 392 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _420 = _417;
  ;
#line 393 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _428 = clock();
  _421 = _428;
#line 394 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
#line 395 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _423 = 0;
#line 396 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _429 = _419;
  if ((((int32_t)_429) > ((int32_t)1u))) {
    goto _451;
  } else {
    goto _452;
  }

_451:
#line 398 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _424 = 1;
  goto _453;

  do {     /* Syntactic loop '' to make GCC happy */
_453:
  _430 = _424;
  _431 = _419;
  if ((((int32_t)_430) < ((int32_t)_431))) {
    goto _454;
  } else {
    goto _455;
  }

_454:
#line 400 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _432 = _420;
  _433 = *(void**)(((&((void**)_432)[((int64_t)1)])));
  _434 = strcmp(_433, (&_OC_str_OC_4));
  if ((_434 != 0u)) {
    goto _456;
  } else {
    goto _457;
  }

_456:
  goto _458;

_458:
#line 398 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _435 = _424;
  _424 = (llvm_add_u32(_435, 1));
  goto _453;

  } while (1); /* end of syntactic loop '' */
_457:
#line 402 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _423 = 1;
  goto _455;

_455:
  goto _452;

_452:
#line 408 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  d_al(global_eid, (((&(&_422)->array[((int64_t)0)]))));
#line 409 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _425 = 0;
  goto _459;

  do {     /* Syntactic loop '' to make GCC happy */
_459:
  _436 = _425;
  if ((((int32_t)_436) < ((int32_t)8u))) {
    goto _460;
  } else {
    goto _461;
  }

_460:
#line 410 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _437 = _425;
  _438 = *(double*)(((&((struct l_array_3_double*)(((&(&_422)->array[((int64_t)(((int64_t)(int32_t)_437)))]))))->array[((int64_t)0)])));
  _439 = _425;
  _440 = *(double*)(((&((struct l_array_3_double*)(((&(&_422)->array[((int64_t)(((int64_t)(int32_t)_439)))]))))->array[((int64_t)1)])));
  _441 = _425;
  _442 = *(double*)(((&((struct l_array_3_double*)(((&(&_422)->array[((int64_t)(((int64_t)(int32_t)_441)))]))))->array[((int64_t)2)])));
  _443 = printf((&_OC_str_OC_5), _438, _440, _442);
  goto _462;

_462:
#line 409 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _444 = _425;
  _425 = (llvm_add_u32(_444, 1));
  goto _459;

  } while (1); /* end of syntactic loop '' */
_461:
#line 411 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _445 = clock();
  _426 = _445;
#line 412 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  ;
  _446 = _426;
  _447 = _421;
  _427 = (((((double)(int64_t)(llvm_sub_u64(_446, _447)))) / 1.0E+6) * 1000);
#line 413 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _448 = _427;
  _449 = printf((&_OC_str_OC_6), _448);
#line 414 "/home/yxk/test-sgx/SGX-test/almabench/almabench.c"
  _450 = printf((&_OC_str_OC_7));

  sgx_destroy_enclave(global_eid);
  return 0;
}

