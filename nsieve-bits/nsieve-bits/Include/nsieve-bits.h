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



/* Global Declarations */

/* Types Declarations */
struct l_array_22_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;
struct l_array_3_uint32_t;

/* Function definitions */

/* Types Definitions */
struct l_array_22_uint8_t {
  uint8_t array[22];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_3_uint32_t {
  uint32_t array[3];
};

/* Global Variable Declarations */
const static struct l_array_22_uint8_t _OC_str_OC_4;
const static struct l_array_19_uint8_t _OC_str_OC_5;
const static struct l_array_48_uint8_t _OC_str_OC_6;

/* Function Declarations */
/*void d_ns(void* _1, void* _2) __ATTRIBUTELIST__((noinline, nothrow));
void* malloc(uint64_t _96) __ATTRIBUTELIST__((nothrow, alloc_size(0)));
void free(void* _97) __ATTRIBUTELIST__((nothrow));
int main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _98, ...);
void* memset(void* _99, uint32_t _100, uint64_t _101);
*/

/* Global Variable Definitions and Initialization */
static const struct l_array_22_uint8_t _OC_str_OC_4 = { "Primes up to %8d %8d\n" };
static const struct l_array_19_uint8_t _OC_str_OC_5 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_6 = { "**********************************************\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint32_t llvm_udiv_u32(uint32_t a, uint32_t b) {
  uint32_t r = a / b;
  return r;
}
static __forceinline uint64_t llvm_udiv_u64(uint64_t a, uint64_t b) {
  uint64_t r = a / b;
  return r;
}
static __forceinline uint64_t llvm_urem_u64(uint64_t a, uint64_t b) {
  uint64_t r = a % b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */
#endif