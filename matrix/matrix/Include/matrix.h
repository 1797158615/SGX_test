#ifndef TA_H_H
#define TA_H_H
#include "sgx_error.h"
#include "sgx_eid.h"
#include "sgx_urts.h"
sgx_enclave_id_t global_eid = 0;
# define ENCLAVE_FILENAME "enclave.signed.so"
extern sgx_enclave_id_t global_eid;
#if defined(__cplusplus)
extern "C" {
#endif
#if defined(__cplusplus)
}
#endif

/* Provide Declarations */
#include <stdint.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#ifdef _MSC_VER
#define __PREFIXALIGN__(X) __declspec(align(X))
#define __POSTFIXALIGN__(X)
#else
#define __PREFIXALIGN__(X)
#define __POSTFIXALIGN__(X) __attribute__((aligned(X)))
#endif



/* Global Declarations */

/* Types Declarations */
struct l_array_13_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;
struct l_array_4_uint32_t;

/* Function definitions */

/* Types Definitions */
struct l_array_13_uint8_t {
  uint8_t array[13];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_4_uint32_t {
  uint32_t array[4];
};

/* Global Variable Declarations */
const static struct l_array_13_uint8_t _OC_str_OC_4;
const static struct l_array_19_uint8_t _OC_str_OC_5;
const static struct l_array_48_uint8_t _OC_str_OC_6;

/* Function Declarations */
/*void* mkmatrix(uint32_t _1, uint32_t _2) __ATTRIBUTELIST__((noinline, nothrow));
void* malloc(uint64_t _198) __ATTRIBUTELIST__((nothrow, alloc_size(0)));
void zeromatrix(uint32_t _35, uint32_t _36, void* _37) __ATTRIBUTELIST__((noinline, nothrow));
void freematrix(uint32_t _61, void* _62) __ATTRIBUTELIST__((noinline, nothrow));
void free(void* _199) __ATTRIBUTELIST__((nothrow));
void* mmult(uint32_t _74, uint32_t _75, void* _76, void* _77, void* _78) __ATTRIBUTELIST__((noinline, nothrow));
void d_ma(void* _126, void* _127) __ATTRIBUTELIST__((noinline, nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t atoi(void* _200) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _201, ...);
*/

/* Global Variable Definitions and Initialization */
static const struct l_array_13_uint8_t _OC_str_OC_4 = { "%d %d %d %d\n" };
static const struct l_array_19_uint8_t _OC_str_OC_5 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_6 = { "**********************************************\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}


/* Function Bodies */
#endif