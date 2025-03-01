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

/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define alloca(x) _alloca(x)
#else
// #include <alloca.h>
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
struct l_array_7_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_7_uint8_t {
  uint8_t array[7];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};

/* Global Variable Declarations */
const static struct l_array_7_uint8_t _OC_str_OC_4;
const static struct l_array_19_uint8_t _OC_str_OC_5;
const static struct l_array_48_uint8_t _OC_str_OC_6;

/* Function Declarations */
/*double eval_A(uint32_t _1, uint32_t _2) __ATTRIBUTELIST__((noinline, nothrow));
void eval_A_times_u(uint32_t _10, void* _11, void* _12) __ATTRIBUTELIST__((noinline, nothrow));
void eval_At_times_u(uint32_t _45, void* _46, void* _47) __ATTRIBUTELIST__((noinline, nothrow));
void eval_AtA_times_u(uint32_t _80, void* _81, void* _82) __ATTRIBUTELIST__((noinline, nothrow));
void d_sp(void* _96, void* _97) __ATTRIBUTELIST__((noinline, nothrow));
double sqrt(double _182) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t atoi(void* _183) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _184, ...);
*/

/* Global Variable Definitions and Initialization */
static const struct l_array_7_uint8_t _OC_str_OC_4 = { "%0.9f\n" };
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
static __forceinline uint32_t llvm_sdiv_u32(int32_t a, int32_t b) {
  uint32_t r = a / b;
  return r;
}
static __forceinline double llvm_OC_fmuladd_OC_f64(double a, double b, double c) {
  double r;
  r = a * b + c;
  return r;
}


/* Function Bodies */
#endif