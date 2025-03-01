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
struct l_struct_struct_OC_planet;
struct l_array_5_struct_AC_l_struct_struct_OC_planet;
struct l_array_6_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_struct_struct_OC_planet {
  double field0;
  double field1;
  double field2;
  double field3;
  double field4;
  double field5;
  double field6;
};
struct l_array_5_struct_AC_l_struct_struct_OC_planet {
  struct l_struct_struct_OC_planet array[5];
};
struct l_array_6_uint8_t {
  uint8_t array[6];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};

/* Global Variable Declarations */
extern __PREFIXALIGN__(16) struct l_array_5_struct_AC_l_struct_struct_OC_planet bodies __POSTFIXALIGN__(16);
const static struct l_array_6_uint8_t _OC_str_OC_4;
const static struct l_array_19_uint8_t _OC_str_OC_5;
const static struct l_array_48_uint8_t _OC_str_OC_6;

/* Function Declarations */
/*void advance(uint32_t _1, void* _2, double _3) __ATTRIBUTELIST__((noinline, nothrow));
double sqrt(double _300) __ATTRIBUTELIST__((nothrow));
double energy(uint32_t _139, void* _140) __ATTRIBUTELIST__((noinline, nothrow));
void offset_momentum(uint32_t _217, void* _218) __ATTRIBUTELIST__((noinline, nothrow));
void d_n(void* _262, void* _263) __ATTRIBUTELIST__((noinline, nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _301, ...);
*/

/* Global Variable Definitions and Initialization */
__PREFIXALIGN__(16) struct l_array_5_struct_AC_l_struct_struct_OC_planet bodies __POSTFIXALIGN__(16) = { { { 0, 0, 0, 0, 0, 0, 39.478417604357432 }, { 4.8414314424647209, -1.1603200440274284, -0.10362204447112311, 0.60632639299583202, 2.8119868449162602, -0.025218361659887629, 0.037693674870389493 }, { 8.3433667182445799, 4.1247985641243048, -0.40352341711432138, -1.0107743461787924, 1.8256623712304119, 0.0084157613765841535, 0.011286326131968767 }, { 12.894369562139131, -15.111151401698631, -0.22330757889265573, 1.0827910064415354, 0.86871301816960822, -0.010832637401363636, 0.0017237240570597112 }, { 15.379697114850917, -25.919314609987964, 0.17925877295037118, 0.97909073224389798, 0.59469899864767617, -0.034755955504078104, 0.0020336868699246304 } } };
static const struct l_array_6_uint8_t _OC_str_OC_4 = { "%.9f\n" };
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
static __forceinline double llvm_OC_fmuladd_OC_f64(double a, double b, double c) {
  double r;
  r = a * b + c;
  return r;
}


/* Function Bodies */
#endif