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

static __forceinline int llvm_fcmp_olt(double X, double Y) { return X <  Y; }


/* Global Declarations */

/* Types Declarations */
struct l_array_12_uint8_t;
struct l_array_15_uint8_t;
struct l_array_17_uint8_t;
struct l_array_19_uint8_t;
struct l_array_24_uint8_t;
struct l_array_48_uint8_t;
struct l_array_3_uint32_t;
struct l_array_2_double;

/* Function definitions */

/* Types Definitions */
struct l_array_12_uint8_t {
  uint8_t array[12];
};
struct l_array_15_uint8_t {
  uint8_t array[15];
};
struct l_array_17_uint8_t {
  uint8_t array[17];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_3_uint32_t {
  uint32_t array[3];
};
struct l_array_2_double {
  double array[2];
};

/* Global Variable Declarations */
const static struct l_array_15_uint8_t _OC_str_OC_4;
const static struct l_array_17_uint8_t _OC_str_OC_5;
const static struct l_array_19_uint8_t _OC_str_OC_6;
const static struct l_array_12_uint8_t _OC_str_OC_7;
const static struct l_array_24_uint8_t _OC_str_OC_8;
const static struct l_array_19_uint8_t _OC_str_OC_9;
const static struct l_array_48_uint8_t _OC_str_OC_10;

/* Function Declarations */
/*uint32_t ack(uint32_t _1, uint32_t _2) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t fib(uint32_t _23) __ATTRIBUTELIST__((noinline, nothrow));
double fibFP(double _35) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t tak(uint32_t _47, uint32_t _48, uint32_t _49) __ATTRIBUTELIST__((noinline, nothrow));
double takFP(double _74, double _75, double _76) __ATTRIBUTELIST__((noinline, nothrow));
void d_re(void* _101, void* _102) __ATTRIBUTELIST__((noinline, nothrow));
int main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _150, ...);
*/

/* Global Variable Definitions and Initialization */
static const struct l_array_15_uint8_t _OC_str_OC_4 = { "Ack(3,%d): %d\n" };
static const struct l_array_17_uint8_t _OC_str_OC_5 = { "Fib(%.1f): %.1f\n" };
static const struct l_array_19_uint8_t _OC_str_OC_6 = { "Tak(%d,%d,%d): %d\n" };
static const struct l_array_12_uint8_t _OC_str_OC_7 = { "Fib(3): %d\n" };
static const struct l_array_24_uint8_t _OC_str_OC_8 = { "Tak(3.0,2.0,1.0): %.1f\n" };
static const struct l_array_19_uint8_t _OC_str_OC_9 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_10 = { "**********************************************\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_sub_u32(uint32_t a, uint32_t b) {
  uint32_t r = a - b;
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


/* Function Bodies */
#endif