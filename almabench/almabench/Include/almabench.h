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
#include <math.h>
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

static __forceinline int llvm_fcmp_oge(double X, double Y) { return X >= Y; }
static __forceinline int llvm_fcmp_olt(double X, double Y) { return X <  Y; }


/* Global Declarations */

/* Types Declarations */
struct l_array_4_uint8_t;
struct l_array_3_double;
struct l_array_8_struct_AC_l_array_3_double;
struct l_array_9_double;
struct l_array_8_struct_AC_l_array_9_double;
struct l_array_10_double;
struct l_array_8_struct_AC_l_array_10_double;
struct l_array_8_double;
struct l_array_10_uint8_t;
struct l_array_19_uint8_t;
struct l_array_48_uint8_t;
struct l_array_2_double;
struct l_array_2_struct_AC_l_array_3_double;

/* Function definitions */

/* Types Definitions */
struct l_array_4_uint8_t {
  uint8_t array[4];
};
struct l_array_3_double {
  double array[3];
};
struct l_array_8_struct_AC_l_array_3_double {
  struct l_array_3_double array[8];
};
struct l_array_9_double {
  double array[9];
};
struct l_array_8_struct_AC_l_array_9_double {
  struct l_array_9_double array[8];
};
struct l_array_10_double {
  double array[10];
};
struct l_array_8_struct_AC_l_array_10_double {
  struct l_array_10_double array[8];
};
struct l_array_8_double {
  double array[8];
};
struct l_array_10_uint8_t {
  uint8_t array[10];
};
struct l_array_19_uint8_t {
  uint8_t array[19];
};
struct l_array_48_uint8_t {
  uint8_t array[48];
};
struct l_array_2_double {
  double array[2];
};
struct l_array_2_struct_AC_l_array_3_double {
  struct l_array_3_double array[2];
};

/* Global Variable Declarations */
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double a __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double dlm __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double e __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double pi __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double dinc __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double omega __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_9_double kp __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_10_double kq __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_9_double ca __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_9_double sa __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_10_double cl __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_10_double sl __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_double amas __POSTFIXALIGN__(16);
const static struct l_array_4_uint8_t _OC_str_OC_4;
const static struct l_array_10_uint8_t _OC_str_OC_5;
const static struct l_array_19_uint8_t _OC_str_OC_6;
const static struct l_array_48_uint8_t _OC_str_OC_7;

/* Function Declarations */
/*double anpm(double _1) __ATTRIBUTELIST__((noinline, nothrow));
double fmod(double _463, double _464) __ATTRIBUTELIST__((nothrow));
void planetpv(void* _14, uint32_t _15, void* _16) __ATTRIBUTELIST__((noinline, nothrow));
double cos(double _465) __ATTRIBUTELIST__((nothrow));
double sin(double _466) __ATTRIBUTELIST__((nothrow));
double atan2(double _467, double _468) __ATTRIBUTELIST__((nothrow));
void radecdist(void* _347, void* _348) __ATTRIBUTELIST__((noinline, nothrow));
double asin(double _469) __ATTRIBUTELIST__((nothrow));
void d_al(void* _386) __ATTRIBUTELIST__((noinline, nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t clock(void) __ATTRIBUTELIST__((nothrow));
uint32_t strcmp(void* _470, void* _471) __ATTRIBUTELIST__((nothrow));
uint32_t printf(void* _472, ...);
*/

/* Global Variable Definitions and Initialization */
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double a __POSTFIXALIGN__(16) = { { { { 0.38709830979999998, 0, 0 } }, { { 0.72332982000000001, 0, 0 } }, { { 1.0000010178000001, 0, 0 } }, { { 1.5236793419000001, 3.0E-10, 0 } }, { { 5.2026032092000003, 1.9132000000000002E-6, -3.9000000000000002E-9 } }, { { 9.5549091915000001, -2.1389599999999999E-5, 4.4400000000000001E-8 } }, { { 19.218446061800002, -3.7160000000000002E-7, 9.7899999999999997E-8 } }, { { 30.110386869399999, -1.6635E-6, 6.8600000000000005E-8 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double dlm __POSTFIXALIGN__(16) = { { { { 252.25090552, 5381016286.8898201, -1.9278900000000001 } }, { { 181.97980085, 2106641364.33548, 0.59380999999999995 } }, { { 100.46645683, 1295977422.83429, -2.0441099999999999 } }, { { 355.43299958, 689050774.93988001, 0.94264000000000003 } }, { { 34.351518740000003, 109256603.77991, -30.60378 } }, { { 50.077444300000003, 43996098.557319999, 75.616140000000001 } }, { { 314.05500511000002, 15424811.93933, -1.7508300000000001 } }, { { 304.34866548000002, 7865503.20744, 0.21103 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double e __POSTFIXALIGN__(16) = { { { { 0.2056317526, 2.0406530000000001E-4, -2.8349000000000002E-6 } }, { { 0.0067719164000000004, -4.7765209999999999E-4, 9.8127000000000001E-6 } }, { { 0.016708634199999999, -4.2036539999999999E-4, -1.26734E-5 } }, { { 0.093400647700000005, 9.0484379999999995E-4, -8.0640999999999996E-6 } }, { { 0.048497925499999997, 0.0016322541999999999, -4.7136599999999999E-5 } }, { { 0.055548142600000003, -0.0034664062000000001, -6.4363900000000002E-5 } }, { { 0.046381222100000001, -2.7292929999999998E-4, 7.8913000000000002E-6 } }, { { 0.0094557470000000004, 6.0326299999999999E-5, 0 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double pi __POSTFIXALIGN__(16) = { { { { 77.456119040000004, 5719.1158999999998, -4.8301600000000002 } }, { { 131.563703, 175.4864, -498.48183999999998 } }, { { 102.93734808000001, 11612.3529, 53.275770000000001 } }, { { 336.06023395, 15980.459080000001, -62.328000000000003 } }, { { 14.331206870000001, 7758.7516299999997, 259.95938000000001 } }, { { 93.057237479999997, 20395.49439, 190.25952000000001 } }, { { 173.00529105999999, 3215.5623799999998, -34.092880000000001 } }, { { 48.120275540000002, 1050.71912, 27.397169999999999 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double dinc __POSTFIXALIGN__(16) = { { { { 7.00498625, -214.25629000000001, 0.28977000000000003 } }, { { 3.3946618900000001, -30.844370000000001, -11.67836 } }, { { 0, 469.97289000000001, -3.35053 } }, { { 1.84972648, -293.31722000000002, -8.1182999999999996 } }, { { 1.3032669800000001, -71.558899999999994, 11.952970000000001 } }, { { 2.4888787799999998, 91.851950000000002, -17.66225 } }, { { 0.77319689000000003, -60.727229999999999, 1.25759 } }, { { 1.7699525899999999, 8.1233299999999993, 0.081350000000000005 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_3_double omega __POSTFIXALIGN__(16) = { { { { 48.330893039999999, -4515.2172700000001, -31.798919999999999 } }, { { 76.679920190000004, -10008.481540000001, -51.326140000000002 } }, { { 174.87317576999999, -8679.2703399999991, 15.34191 } }, { { 49.558093210000003, -10620.900879999999, -230.57416000000001 } }, { { 100.46440702, 6362.0356099999999, 326.52177999999998 } }, { { 113.66550252, -9240.1994200000008, -66.237430000000003 } }, { { 74.005957010000003, 2669.1503299999999, 145.93964 } }, { { 131.78405702000001, -221.94322, -0.78727999999999998 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_9_double kp __POSTFIXALIGN__(16) = { { { { 69613, 75645, 88306, 59899, 15746, 71087, 142173, 3086, 0 } }, { { 21863, 32794, 26934, 10931, 26250, 43725, 53867, 28939, 0 } }, { { 16002, 21863, 32004, 10931, 14529, 16368, 15318, 32794, 0 } }, { { 6345, 7818, 15636, 7077, 8184, 14163, 1107, 4872, 0 } }, { { 1760, 1454, 1167, 880, 287, 2640, 19, 2047, 1454 } }, { { 574, 0, 880, 287, 19, 1760, 1167, 306, 574 } }, { { 204, 0, 177, 1265, 4, 385, 200, 208, 204 } }, { { 0, 102, 106, 4, 98, 1367, 487, 204, 0 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_10_double kq __POSTFIXALIGN__(16) = { { { { 3086, 15746, 69613, 59899, 75645, 88306, 12661, 2658, 0, 0 } }, { { 21863, 32794, 10931, 73, 4387, 26934, 1473, 2157, 0, 0 } }, { { 10, 16002, 21863, 10931, 1473, 32004, 4387, 73, 0, 0 } }, { { 10, 6345, 7818, 1107, 15636, 7077, 8184, 532, 10, 0 } }, { { 19, 1760, 1454, 287, 1167, 880, 574, 2640, 19, 1454 } }, { { 19, 574, 287, 306, 1760, 12, 31, 38, 19, 574 } }, { { 4, 204, 177, 8, 31, 200, 1265, 102, 4, 204 } }, { { 4, 102, 106, 8, 98, 1367, 487, 204, 4, 102 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_9_double ca __POSTFIXALIGN__(16) = { { { { 4, -13, 11, -9, -9, -3, -1, 4, 0 } }, { { -156, 59, -42, 6, 19, -20, -10, -12, 0 } }, { { 64, -152, 62, -8, 32, -41, 19, -11, 0 } }, { { 124, 621, -145, 208, 54, -57, 30, 15, 0 } }, { { -23437, -2634, 6601, 6259, -1507, -1821, 2620, -2115, -1489 } }, { { 62911, -119919, 79336, 17814, -24241, 12068, 8306, -4893, 8902 } }, { { 389061, -262125, -44088, 8387, -22976, -2093, -615, -9720, 6633 } }, { { -412235, -157046, -31430, 37817, -9740, -13, -7449, 9644, 0 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_9_double sa __POSTFIXALIGN__(16) = { { { { -29, -1, 9, 6, -6, 5, 4, 0, 0 } }, { { -48, -125, -26, -37, 18, -13, -20, -2, 0 } }, { { -150, -46, 68, 54, 14, 24, -28, 22, 0 } }, { { -621, 532, -694, -20, 192, -94, 71, -73, 0 } }, { { -14614, -19828, -5869, 1881, -4372, -2255, 782, 930, 913 } }, { { 139737, 0, 24667, 51123, -5102, 7429, -4095, -1976, -9566 } }, { { -138081, 0, 37205, -49039, -41901, -33872, -27037, -12474, 18797 } }, { { 0, 28492, 133236, 69654, 52322, -49577, -26430, -3593, 0 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_10_double cl __POSTFIXALIGN__(16) = { { { { 21, -95, -157, 41, -5, 42, 23, 30, 0, 0 } }, { { -160, -313, -235, 60, -74, -76, -27, 34, 0, 0 } }, { { -325, -322, -79, 232, -52, 97, 55, -41, 0, 0 } }, { { 2268, -979, 802, 602, -668, -33, 345, 201, -55, 0 } }, { { 7610, -4997, -7689, -5841, -2617, 1115, -748, -607, 6074, 354 } }, { { -18549, 30125, 20012, -730, 824, 23, 1289, -352, -14767, -2062 } }, { { -135245, -14594, 4197, -4030, -5630, -2898, 2540, -306, 2939, 1986 } }, { { 89948, 2103, 8963, 2695, 3682, 1648, 866, -154, -1963, -283 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_struct_AC_l_array_10_double sl __POSTFIXALIGN__(16) = { { { { -342, 136, -23, 62, 66, -52, -33, 17, 0, 0 } }, { { 524, -149, -35, 117, 151, 122, -71, -62, 0, 0 } }, { { -105, -137, 258, 35, -116, -88, -112, -80, 0, 0 } }, { { 854, -205, -936, -240, 140, -341, -97, -232, 536, 0 } }, { { -56980, 8016, 1012, 1448, -3024, -3710, 318, 503, 3767, 577 } }, { { 138606, -13478, -4964, 1441, -1319, -1482, 427, 1236, -9167, -1918 } }, { { 71234, -41116, 5334, -4935, -1848, 66, 434, -1748, 3780, -701 } }, { { -47645, 11647, 2166, 3194, 679, 0, -244, -419, -2531, 48 } } } };
static const __PREFIXALIGN__(16) struct l_array_8_double amas __POSTFIXALIGN__(16) = { { 6023600, 408523.5, 328900.5, 3098710, 1047.355, 3498.5, 22869, 19314 } };
static const struct l_array_4_uint8_t _OC_str_OC_4 = { "-ga" };
static const struct l_array_10_uint8_t _OC_str_OC_5 = { "%f %f %f\n" };
static const struct l_array_19_uint8_t _OC_str_OC_6 = { "use time: %.3f ms\n" };
static const struct l_array_48_uint8_t _OC_str_OC_7 = { "**********************************************\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline double llvm_select_f64(bool condition, double iftrue, double ifnot) {
  double r;
  r = condition ? iftrue : ifnot;
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
static __forceinline double llvm_OC_fabs_OC_f64(double a) {
  double r;
  r = fabs(a);
  return r;
}
static __forceinline double llvm_OC_fmuladd_OC_f64(double a, double b, double c) {
  double r;
  r = a * b + c;
  return r;
}


/* Function Bodies */
#endif