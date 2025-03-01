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
struct l_array_16_uint16_t;
struct l_array_32_uint8_t;
struct l_array_33_uint8_t;
struct l_array_53_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_16_uint16_t {
  uint16_t array[16];
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_33_uint8_t {
  uint8_t array[33];
};
struct l_array_53_uint8_t {
  uint8_t array[53];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};

/* Global Variable Declarations */
extern uint16_t x1a2;
extern uint16_t i;
extern uint16_t dx;
extern __PREFIXALIGN__(16) struct l_array_16_uint16_t x1a0 __POSTFIXALIGN__(16);
extern uint16_t ax;
extern uint16_t cx;
extern uint16_t bx;
extern uint16_t tmp;
extern uint16_t si;
extern uint16_t res;
extern __PREFIXALIGN__(16) struct l_array_32_uint8_t cle __POSTFIXALIGN__(16);
extern uint16_t inter;
const static struct l_array_33_uint8_t _OC_str_OC_2;
extern __PREFIXALIGN__(16) struct l_array_32_uint8_t buff __POSTFIXALIGN__(16);
extern uint32_t count;
extern uint32_t c1;
extern uint16_t c;
extern uint16_t cfc;
extern uint16_t cfd;
extern uint16_t compte;
extern uint16_t d;
extern uint16_t e;
const static struct l_array_53_uint8_t _OC_str_OC_5;
const static struct l_array_19_uint8_t _OC_str_OC_6;
const static struct l_array_48_uint8_t _OC_str_OC_7;

/* Function Declarations */
/*uint32_t code(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t assemble(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t my_rand_r(void* _134) __ATTRIBUTELIST__((noinline, nothrow));
void d_pc1(void* _142) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t strlen(void* _212) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t atoi(void* _213) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _214, ...);
void* memcpy(void* _215, void* _216, uint64_t _217);
*/

/* Global Variable Definitions and Initialization */
uint16_t x1a2;
uint16_t i;
uint16_t dx;
__PREFIXALIGN__(16) struct l_array_16_uint16_t x1a0 __POSTFIXALIGN__(16);
uint16_t ax;
uint16_t cx;
uint16_t bx;
uint16_t tmp;
uint16_t si;
uint16_t res;
__PREFIXALIGN__(16) struct l_array_32_uint8_t cle __POSTFIXALIGN__(16);
uint16_t inter;
static const struct l_array_33_uint8_t _OC_str_OC_2 = { "abcdefghijklmnopqrstuvwxyz012345" };
__PREFIXALIGN__(16) struct l_array_32_uint8_t buff __POSTFIXALIGN__(16);
uint32_t count;
uint32_t c1;
uint16_t c;
uint16_t cfc;
uint16_t cfd;
uint16_t compte;
uint16_t d;
uint16_t e;
static const struct l_array_53_uint8_t _OC_str_OC_5 = { "PC1 Cipher 256 bits \nENCRYPT file IN.BIN to OUT.BIN\n" };
static const struct l_array_19_uint8_t _OC_str_OC_6 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_7 = { "**********************************************\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint16_t llvm_add_u16(uint16_t a, uint16_t b) {
  uint16_t r = a + b;
  return r;
}
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
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */
#endif