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
struct l_array_32_uint64_t;
struct l_struct_struct_OC_des_context;
struct l_array_96_uint64_t;
struct l_struct_struct_OC_des3_context;
struct l_array_64_uint64_t;
struct l_array_16_uint64_t;
struct l_array_8_uint8_t;
struct l_array_3_struct_AC_l_array_8_uint8_t;
struct l_array_44_uint8_t;
struct l_array_13_uint8_t;
struct l_array_32_uint8_t;
struct l_array_9_uint8_t;
struct l_array_2_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_32_uint64_t {
  uint64_t array[32];
};
struct l_struct_struct_OC_des_context {
  struct l_array_32_uint64_t field0;
  struct l_array_32_uint64_t field1;
};
struct l_array_96_uint64_t {
  uint64_t array[96];
};
struct l_struct_struct_OC_des3_context {
  struct l_array_96_uint64_t field0;
  struct l_array_96_uint64_t field1;
};
struct l_array_64_uint64_t {
  uint64_t array[64];
};
struct l_array_16_uint64_t {
  uint64_t array[16];
};
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_3_struct_AC_l_array_8_uint8_t {
  struct l_array_8_uint8_t array[3];
};
struct l_array_44_uint8_t {
  uint8_t array[44];
};
struct l_array_13_uint8_t {
  uint8_t array[13];
};
struct l_array_32_uint8_t {
  uint8_t array[32];
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

/* Global Variable Declarations */
extern __PREFIXALIGN__(16) struct l_array_64_uint64_t SB1 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_16_uint64_t LHs __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_16_uint64_t RHs __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB8 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB6 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB4 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB2 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB7 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB5 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB3 __POSTFIXALIGN__(16);
static struct l_array_8_uint8_t DES3_init;
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_keys __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_enc_test __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_dec_test __POSTFIXALIGN__(16);
const static struct l_array_44_uint8_t _OC_str_OC_4;
const static struct l_array_13_uint8_t _OC_str_OC_5;
const static struct l_array_13_uint8_t _OC_str_OC_6;
const static struct l_array_32_uint8_t _OC_str_OC_7;
const static struct l_array_9_uint8_t _OC_str_OC_8;
const static struct l_array_9_uint8_t _OC_str_OC_9;
const static struct l_array_2_uint8_t _OC_str_OC_10;
const static struct l_array_19_uint8_t _OC_str_OC_11;
const static struct l_array_48_uint8_t _OC_str_OC_12;

/* Function Declarations */
/*uint32_t des_main_ks(void* _1, void* _2) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des_set_key(void* _139, void* _140) __ATTRIBUTELIST__((noinline, nothrow));
void des_crypt(void* _163, void* _164, void* _165) __ATTRIBUTELIST__((noinline, nothrow));
void des_encrypt(void* _672, void* _673, void* _674) __ATTRIBUTELIST__((noinline, nothrow));
void des_decrypt(void* _681, void* _682, void* _683) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des3_set_2keys(void* _690, void* _691, void* _692) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des3_set_3keys(void* _749, void* _750, void* _751, void* _752) __ATTRIBUTELIST__((noinline, nothrow));
void des3_crypt(void* _803, void* _804, void* _805) __ATTRIBUTELIST__((noinline, nothrow));
void des3_encrypt(void* _2112, void* _2113, void* _2114) __ATTRIBUTELIST__((noinline, nothrow));
void des3_decrypt(void* _2121, void* _2122, void* _2123) __ATTRIBUTELIST__((noinline, nothrow));
void d_des(void* _2130, void* _2131, void* _2132, void* _2133) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t memcmp(void* _2260, void* _2261, uint64_t _2262) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t atoi(void* _2263) __ATTRIBUTELIST__((nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _2264, ...);
void* memcpy(void* _2265, void* _2266, uint64_t _2267);
*/

/* Global Variable Definitions and Initialization */
__PREFIXALIGN__(16) struct l_array_64_uint64_t SB1 __POSTFIXALIGN__(16) = { { 16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756 } };
static __PREFIXALIGN__(16) struct l_array_16_uint64_t LHs __POSTFIXALIGN__(16) = { { 0, 1, 256, 257, 65536, 65537, 65792, 65793, 16777216, 16777217, 16777472, 16777473, 16842752, 16842753, 16843008, 16843009 } };
static __PREFIXALIGN__(16) struct l_array_16_uint64_t RHs __POSTFIXALIGN__(16) = { { 0, 16777216, 65536, 16842752, 256, 16777472, 65792, 16843008, 1, 16777217, 65537, 16842753, 257, 16777473, 65793, 16843009 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB8 __POSTFIXALIGN__(16) = { { 268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB6 __POSTFIXALIGN__(16) = { { 536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB4 __POSTFIXALIGN__(16) = { { 8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB2 __POSTFIXALIGN__(16) = { { INT64_C(2148565024), INT64_C(2147516416), 32768, 1081376, 1048576, 32, INT64_C(2148532256), INT64_C(2147516448), INT64_C(2147483680), INT64_C(2148565024), INT64_C(2148564992), INT64_C(2147483648), INT64_C(2147516416), 1048576, 32, INT64_C(2148532256), 1081344, 1048608, INT64_C(2147516448), 0, INT64_C(2147483648), 32768, 1081376, INT64_C(2148532224), 1048608, INT64_C(2147483680), 0, 1081344, 32800, INT64_C(2148564992), INT64_C(2148532224), 32800, 0, 1081376, INT64_C(2148532256), 1048576, INT64_C(2147516448), INT64_C(2148532224), INT64_C(2148564992), 32768, INT64_C(2148532224), INT64_C(2147516416), 32, INT64_C(2148565024), 1081376, 32, 32768, INT64_C(2147483648), 32800, INT64_C(2148564992), 1048576, INT64_C(2147483680), 1048608, INT64_C(2147516448), INT64_C(2147483680), 1048608, 1081344, 0, INT64_C(2147516416), 32800, INT64_C(2147483648), INT64_C(2148532256), INT64_C(2148565024), 1081344 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB7 __POSTFIXALIGN__(16) = { { 2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB5 __POSTFIXALIGN__(16) = { { 256, 34078976, 34078720, INT64_C(1107296512), 524288, 256, INT64_C(1073741824), 34078720, INT64_C(1074266368), 524288, 33554688, INT64_C(1074266368), INT64_C(1107296512), INT64_C(1107820544), 524544, INT64_C(1073741824), 33554432, INT64_C(1074266112), INT64_C(1074266112), 0, INT64_C(1073742080), INT64_C(1107820800), INT64_C(1107820800), 33554688, INT64_C(1107820544), INT64_C(1073742080), 0, INT64_C(1107296256), 34078976, 33554432, INT64_C(1107296256), 524544, 524288, INT64_C(1107296512), 256, 33554432, INT64_C(1073741824), 34078720, INT64_C(1107296512), INT64_C(1074266368), 33554688, INT64_C(1073741824), INT64_C(1107820544), 34078976, INT64_C(1074266368), 256, 33554432, INT64_C(1107820544), INT64_C(1107820800), 524544, INT64_C(1107296256), INT64_C(1107820800), 34078720, 0, INT64_C(1074266112), INT64_C(1107296256), 524544, 33554688, INT64_C(1073742080), 524288, 0, INT64_C(1074266112), 34078976, INT64_C(1073742080) } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB3 __POSTFIXALIGN__(16) = { { 520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584 } };
static struct l_array_8_uint8_t DES3_init = { "Now is t" };
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_keys __POSTFIXALIGN__(16) = { { { "\x01#Eg\x89\xAB\xCD\xEF" }, { "#Eg\x89\xAB\xCD\xEF\x01" }, { "Eg\x89\xAB\xCD\xEF\x01#" } } };
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_enc_test __POSTFIXALIGN__(16) = { { { "j*\x19\xF4\x1E\xCA\x85K" }, { "\x03\xE6\x9F[\xFAX\xEB\x42" }, { "\xDD\x17\xE8\xB8\xB4\x37\xD2\x32" } } };
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_dec_test __POSTFIXALIGN__(16) = { { { "\xCD\xD6O/\x94'\xC1]" }, { "i\x96\xC8\xFAG\xA2\xAB\xEB" }, { "\x83%9vD\t\x1A\n" } } };
static const struct l_array_44_uint8_t _OC_str_OC_4 = { "\n Triple-DES Monte Carlo Test (ECB mode) - " };
static const struct l_array_13_uint8_t _OC_str_OC_5 = { "encryption\n\n" };
static const struct l_array_13_uint8_t _OC_str_OC_6 = { "decryption\n\n" };
static const struct l_array_32_uint8_t _OC_str_OC_7 = { " Test %d, key size = %3d bits: " };
static const struct l_array_9_uint8_t _OC_str_OC_8 = { "failed!\n" };
static const struct l_array_9_uint8_t _OC_str_OC_9 = { "passed.\n" };
static const struct l_array_2_uint8_t _OC_str_OC_10 = { "\n" };
static const struct l_array_19_uint8_t _OC_str_OC_11 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_12 = { "**********************************************\n" };


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
static __forceinline uint64_t llvm_lshr_u64(uint64_t a, uint64_t b) {
  uint64_t r = a >> b;
  return r;
}


/* Function Bodies */
#endif