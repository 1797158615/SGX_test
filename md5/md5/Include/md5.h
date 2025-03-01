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
struct l_array_2_uint64_t;
struct l_array_4_uint64_t;
struct l_array_64_uint8_t;
struct l_struct_struct_OC_md5_context;
struct l_array_5_uint8_t;
struct l_array_2_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;
struct l_array_63_uint8_t;
struct l_unnamed_1;
struct l_array_16_uint64_t;
struct l_array_8_uint8_t;
struct l_array_33_uint8_t;
struct l_array_100000_uint8_t;
struct l_array_16_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_2_uint64_t {
  uint64_t array[2];
};
struct l_array_4_uint64_t {
  uint64_t array[4];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};
struct l_struct_struct_OC_md5_context {
  struct l_array_2_uint64_t field0;
  struct l_array_4_uint64_t field1;
  struct l_array_64_uint8_t field2;
};
struct l_array_5_uint8_t {
  uint8_t array[5];
};
struct l_array_2_uint8_t {
  uint8_t array[2];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_63_uint8_t {
  uint8_t array[63];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_1 {
  uint8_t field0;
  struct l_array_63_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_16_uint64_t {
  uint64_t array[16];
};
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_33_uint8_t {
  uint8_t array[33];
};
struct l_array_100000_uint8_t {
  uint8_t array[100000];
};
struct l_array_16_uint8_t {
  uint8_t array[16];
};

/* Global Variable Declarations */
const static struct l_array_5_uint8_t _OC_str_OC_4;
const static struct l_array_2_uint8_t _OC_str_OC_5;
const static struct l_array_19_uint8_t _OC_str_OC_6;
const static struct l_array_48_uint8_t _OC_str_OC_7;
static __PREFIXALIGN__(16) struct l_unnamed_1 md5_padding __POSTFIXALIGN__(16);

/* Function Declarations */
/*void md5_starts(void* _1) __ATTRIBUTELIST__((noinline, nothrow));
void md5_process(void* _9, void* _10) __ATTRIBUTELIST__((noinline, nothrow));
void md5_update(void* _714, void* _715, uint64_t _716) __ATTRIBUTELIST__((noinline, nothrow));
void md5_finish(void* _776, void* _777) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t my_rand_r(void* _861) __ATTRIBUTELIST__((noinline, nothrow));
void d_md5(void* _869, void* _870) __ATTRIBUTELIST__((noinline, nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t atoi(void* _938) __ATTRIBUTELIST__((nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _939, ...);
void* memcpy(void* _940, void* _941, uint64_t _942);
*/

/* Global Variable Definitions and Initialization */
static const struct l_array_5_uint8_t _OC_str_OC_4 = { "%02x" };
static const struct l_array_2_uint8_t _OC_str_OC_5 = { "\n" };
static const struct l_array_19_uint8_t _OC_str_OC_6 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_7 = { "**********************************************\n" };
static __PREFIXALIGN__(16) struct l_unnamed_1 md5_padding __POSTFIXALIGN__(16) = { 128u, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };


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
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint64_t llvm_lshr_u64(uint64_t a, uint64_t b) {
  uint64_t r = a >> b;
  return r;
}


/* Function Bodies */
#endif