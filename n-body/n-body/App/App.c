#include "../Include/n-body.h"
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

  uint32_t _279 = (uint32_t)argc;
  void* _280 = (void*)argv;
  uint32_t _281;    /* Address-exposed local */
  uint32_t _282;    /* Address-exposed local */
  void* _283;    /* Address-exposed local */
  uint64_t _284;    /* Address-exposed local */
  double _285;    /* Address-exposed local */
  double _286;    /* Address-exposed local */
  uint64_t _287;    /* Address-exposed local */
  double _288;    /* Address-exposed local */
  uint64_t _289;
  double _290;
  uint32_t _291;
  double _292;
  uint32_t _293;
  uint64_t _294;
  uint64_t _295;
  uint64_t _296;
  double _297;
  uint32_t _298;
  uint32_t _299;

  _281 = 0;
  _282 = _279;
#line 151 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _283 = _280;
  ;
#line 152 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _289 = clock();
  _284 = _289;
#line 153 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  ;
#line 154 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  d_n(global_eid, (&_285), (&_286));
#line 155 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _290 = _285;
  _291 = printf((&_OC_str_OC_4), _290);
#line 156 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _292 = _286;
  _293 = printf((&_OC_str_OC_4), _292);
#line 157 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _294 = clock();
  _287 = _294;
#line 158 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  ;
  _295 = _287;
  _296 = _284;
  _288 = (((((double)(int64_t)(llvm_sub_u64(_295, _296)))) / 1.0E+6) * 1000);
#line 159 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _297 = _288;
  _298 = printf((&_OC_str_OC_5), _297);
#line 160 "/home/yxk/test-sgx/SGX-test/n-body/n-body.c"
  _299 = printf((&_OC_str_OC_6));

  sgx_destroy_enclave(global_eid);
  return 0;
}

