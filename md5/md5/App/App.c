#include "../Include/md5.h"
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

  uint32_t _898 = (uint32_t)argc;
  void* _899 = (void*)argv;
  uint32_t _900;    /* Address-exposed local */
  uint32_t _901;    /* Address-exposed local */
  void* _902;    /* Address-exposed local */
  uint32_t _903;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_16_uint8_t _904 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _905;    /* Address-exposed local */
  uint32_t _906;    /* Address-exposed local */
  uint64_t _907;    /* Address-exposed local */
  double _908;    /* Address-exposed local */
  uint32_t _909;
  void* _910;
  void* _911;
  uint32_t _912;
  uint64_t _913;
  uint32_t _914;
  uint32_t _915;
  uint32_t _916;
  uint8_t _917;
  uint32_t _918;
  uint32_t _919;
  uint32_t _920;
  uint32_t _921;
  uint64_t _922;
  uint64_t _923;
  uint64_t _924;
  double _925;
  uint32_t _926;
  uint32_t _927;

  _900 = 0;
  _901 = _898;
#line 285 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _902 = _899;
  ;
#line 287 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _903 = 1;
#line 288 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _909 = _901;
  if ((_909 == 2u)) {
    goto _928;
  } else {
    goto _929;
  }

_928:
  _910 = _902;
  _911 = *(void**)(((&((void**)_910)[((int64_t)1)])));
  _912 = atoi(_911);
  _903 = _912;
  goto _929;

_929:
#line 289 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
#line 291 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _913 = clock();
  _905 = _913;
  goto _930;

  do {     /* Syntactic loop '' to make GCC happy */
_930:
#line 292 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _914 = _903;
  if ((_914 != 0u)) {
    goto _931;
  } else {
    goto _932;
  }

_931:
#line 293 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  d_md5(global_eid, (&_903), (((&(&_904)->array[((int64_t)0)]))));
#line 294 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _906 = 0;
  goto _933;

  do {     /* Syntactic loop '' to make GCC happy */
_933:
  _915 = _906;
  if ((((int32_t)_915) < ((int32_t)16u))) {
    goto _934;
  } else {
    goto _935;
  }

_934:
#line 296 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _916 = _906;
  _917 = *(uint8_t*)(((&(&_904)->array[((int64_t)(((int64_t)(int32_t)_916)))])));
  _918 = printf((&_OC_str_OC_4), (((uint32_t)(uint8_t)_917)));
  goto _936;

_936:
#line 294 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _919 = _906;
  _906 = (llvm_add_u32(_919, 1));
  goto _933;

  } while (1); /* end of syntactic loop '' */
_935:
#line 298 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _920 = printf((&_OC_str_OC_5));
  goto _937;

_937:
#line 292 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _921 = _903;
  _903 = (llvm_add_u32(_921, -1));
  goto _930;

  } while (1); /* end of syntactic loop '' */
_932:
#line 300 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _922 = clock();
  _907 = _922;
#line 301 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  ;
  _923 = _907;
  _924 = _905;
  _908 = (((((double)(int64_t)(llvm_sub_u64(_923, _924)))) / 1.0E+6) * 1000);
#line 302 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _925 = _908;
  _926 = printf((&_OC_str_OC_6), _925);
#line 303 "/home/yxk/test-sgx/SGX-test/md5/md5.c"
  _927 = printf((&_OC_str_OC_7));

  sgx_destroy_enclave(global_eid);
  return 0;
}

