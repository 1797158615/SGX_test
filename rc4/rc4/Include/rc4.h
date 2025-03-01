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
struct l_array_256_uint32_t;
struct l_struct_struct_OC_rc4_state;
struct l_array_7_uint8_t;
struct l_array_26_uint8_t;
struct l_array_10_uint8_t;
struct l_array_9_uint8_t;
struct l_array_2_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;
struct l_array_30_uint8_t;
struct l_array_21_uint8_t;
struct l_unnamed_4;
struct l_unnamed_5;
struct l_array_11_uint8_t;
struct l_unnamed_6;
struct l_unnamed_1;
struct l_array_29_uint8_t;
struct l_unnamed_7;
struct l_array_25_uint8_t;
struct l_unnamed_8;
struct l_unnamed_2;
struct l_array_8_uint8_t;
struct l_array_22_uint8_t;
struct l_unnamed_9;
struct l_array_20_uint8_t;
struct l_unnamed_10;
struct l_unnamed_11;
struct l_unnamed_3;
struct l_array_7_struct_AC_l_array_30_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_256_uint32_t {
  uint32_t array[256];
};
struct l_struct_struct_OC_rc4_state {
  uint32_t field0;
  uint32_t field1;
  struct l_array_256_uint32_t field2;
};
struct l_array_7_uint8_t {
  uint8_t array[7];
};
struct l_array_26_uint8_t {
  uint8_t array[26];
};
struct l_array_10_uint8_t {
  uint8_t array[10];
};
struct l_array_9_uint8_t {
  uint8_t array[9];
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
struct l_array_30_uint8_t {
  uint8_t array[30];
};
struct l_array_21_uint8_t {
  uint8_t array[21];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_4 {
  struct l_array_9_uint8_t field0;
  struct l_array_21_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_5 {
  struct l_array_21_uint8_t field0;
  struct l_array_9_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_11_uint8_t {
  uint8_t array[11];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_6 {
  struct l_array_11_uint8_t field0;
  struct l_array_19_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_1 {
  struct l_unnamed_4 field0;
  struct l_unnamed_4 field1;
  struct l_unnamed_4 field2;
  struct l_unnamed_5 field3;
  struct l_array_30_uint8_t field4;
  struct l_unnamed_6 field5;
  struct l_array_30_uint8_t field6;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_29_uint8_t {
  uint8_t array[29];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_7 {
  uint8_t field0;
  struct l_array_29_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_25_uint8_t {
  uint8_t array[25];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_8 {
  uint8_t field0;
  uint8_t field1;
  uint8_t field2;
  uint8_t field3;
  uint8_t field4;
  struct l_array_25_uint8_t field5;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_2 {
  struct l_unnamed_4 field0;
  struct l_unnamed_4 field1;
  struct l_unnamed_7 field2;
  struct l_unnamed_8 field3;
  struct l_unnamed_4 field4;
  struct l_unnamed_8 field5;
  struct l_array_30_uint8_t field6;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_22_uint8_t {
  uint8_t array[22];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_9 {
  struct l_array_8_uint8_t field0;
  struct l_array_22_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_20_uint8_t {
  uint8_t array[20];
};
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_10 {
  struct l_array_20_uint8_t field0;
  struct l_array_10_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_11 {
  struct l_array_10_uint8_t field0;
  struct l_array_20_uint8_t field1;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
#ifdef _MSC_VER
#pragma pack(push, 1)
#endif
struct l_unnamed_3 {
  struct l_unnamed_9 field0;
  struct l_unnamed_9 field1;
  struct l_unnamed_9 field2;
  struct l_unnamed_10 field3;
  struct l_array_30_uint8_t field4;
  struct l_unnamed_11 field5;
  struct l_array_30_uint8_t field6;
} __attribute__ ((packed));
#ifdef _MSC_VER
#pragma pack(pop)
#endif
struct l_array_7_struct_AC_l_array_30_uint8_t {
  struct l_array_30_uint8_t array[7];
};

/* Global Variable Declarations */
static struct l_array_7_uint8_t data_len;
const static struct l_array_26_uint8_t _OC_str_OC_4;
const static struct l_array_10_uint8_t _OC_str_OC_5;
const static struct l_array_9_uint8_t _OC_str_OC_6;
const static struct l_array_9_uint8_t _OC_str_OC_7;
const static struct l_array_2_uint8_t _OC_str_OC_8;
const static struct l_array_19_uint8_t _OC_str_OC_9;
const static struct l_array_48_uint8_t _OC_str_OC_10;
static __PREFIXALIGN__(16) struct l_unnamed_1 data __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_unnamed_2 keys __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_unnamed_3 output __POSTFIXALIGN__(16);

/* Function Declarations */
/*void rc4_setup(void* _1, void* _2, uint32_t _3) __ATTRIBUTELIST__((noinline, nothrow));
void rc4_crypt(void* _51, void* _52, uint32_t _53) __ATTRIBUTELIST__((noinline, nothrow));
void d_rc4(void* _101, void* _102, void* _103) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t memcmp(void* _181, void* _182, uint64_t _183) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t atoi(void* _184) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _185, ...);
void* memcpy(void* _186, void* _187, uint64_t _188);
*/

/* Global Variable Definitions and Initialization */
static struct l_array_7_uint8_t data_len = { "\x08\x08\x08\x14\x1C\n" };
static const struct l_array_26_uint8_t _OC_str_OC_4 = { "\n RC4 Validation Tests:\n\n" };
static const struct l_array_10_uint8_t _OC_str_OC_5 = { " Test %d " };
static const struct l_array_9_uint8_t _OC_str_OC_6 = { "failed!\n" };
static const struct l_array_9_uint8_t _OC_str_OC_7 = { "passed.\n" };
static const struct l_array_2_uint8_t _OC_str_OC_8 = { "\n" };
static const struct l_array_19_uint8_t _OC_str_OC_9 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_10 = { "**********************************************\n" };
static __PREFIXALIGN__(16) struct l_unnamed_1 data __POSTFIXALIGN__(16) = { { { "\x01#Eg\x89\xAB\xCD\xEF\xFF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\x00\x00\x00\x00\x00\x00\x00\x00\xFF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\x00\x00\x00\x00\x00\x00\x00\x00\xFF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { "\x12\x34Vx\x9A\xBC\xDE\xF0\x12\x34Vx\x9A\xBC\xDE\xF0\x12\x34Vx\x9A\xBC\xDE\xF0\x12\x34Vx\xFF" }, { { "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };
static __PREFIXALIGN__(16) struct l_unnamed_2 keys __POSTFIXALIGN__(16) = { { { "\x08\x01#Eg\x89\xAB\xCD\xEF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\x08\x01#Eg\x89\xAB\xCD\xEF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { 8, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { 4, -17, 1, 35, 69u, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\x08\x01#Eg\x89\xAB\xCD\xEF" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { 4, -17, 1, 35, 69u, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };
static __PREFIXALIGN__(16) struct l_unnamed_3 output __POSTFIXALIGN__(16) = { { { "u\xB7\x87\x80\x99\xE0\xC5\x96" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "t\x94\xC2\xE7\x10K\x08y" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\xDE\x18\x89\x41\xA3\x37]:" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { "\xD6\xA1\x41\xA7\xEC<8\xDF\xBD\x61Z\x11\x62\xE1\xC7\xBA\x36\xB6xX" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { "f\xA0\x94\x9F\x8A\xF7\xD6\x89\x1F\x7F\x83+\xA8\x33\xC0\x0C\x89.\xBE\x30\x14<\xE2\x87@\x01\x1E\xCF\x00" }, { { "\xD6\xA1\x41\xA7\xEC<8\xDF\xBD\x61" }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } }, { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}


/* Function Bodies */
#endif