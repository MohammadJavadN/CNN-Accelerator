/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
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
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void normalization_and_padding(float (*llvm_cbe_img_in)[28], float (*llvm_cbe_img_out)[32]);
void normalization(float (*llvm_cbe_img_in)[28], float (*llvm_cbe_img_out)[28]);
void print_img(float (*llvm_cbe_img)[28]);
void print_pad_img(float (*llvm_cbe_img)[32]);
void print_features(float (*llvm_cbe_features)[28][28]);
void print_pool_features(float (*llvm_cbe_pool_features)[12][12]);


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str[5] = "%.0f";
static  char aesl_internal__OC_str2[17] = "Feature map %d:\n";
static  char aesl_internal__OC_str3[22] = "Pool feature map %d:\n";


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void normalization_and_padding(float (*llvm_cbe_img_in)[28], float (*llvm_cbe_img_out)[32]) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge7_count = 0;
  unsigned int llvm_cbe_storemerge7;
  unsigned int llvm_cbe_storemerge7__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge15_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge15_2e_us;
  unsigned int llvm_cbe_storemerge15_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  float *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond8_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge15_2e_us6_count = 0;
  unsigned int llvm_cbe_storemerge15_2e_us6;
  unsigned int llvm_cbe_storemerge15_2e_us6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  float *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge15_count = 0;
  unsigned int llvm_cbe_storemerge15;
  unsigned int llvm_cbe_storemerge15__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  float *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  float *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  float *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  float llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  float *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond9_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @normalization_and_padding\n");
  llvm_cbe_storemerge7__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge7 = phi i32 [ 0, %%0 ], [ %%32, %%.us-lcssa.us  for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_storemerge7_count);
  llvm_cbe_storemerge7 = (unsigned int )llvm_cbe_storemerge7__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge7 = 0x%X",llvm_cbe_storemerge7);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = add nsw i32 %%storemerge7, -1, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__1 = (unsigned int )((unsigned int )(llvm_cbe_storemerge7&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%1 to i64, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge7 to i64, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge7);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
  if (((llvm_cbe_storemerge7&4294967295U) == (29u&4294967295U))) {
    llvm_cbe_storemerge15_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__23;
  } else {
    goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;
  }

llvm_cbe__2e_us_2d_lcssa_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add nsw i32 %%storemerge7, 1, !dbg !8 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__22 = (unsigned int )((unsigned int )(llvm_cbe_storemerge7&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__22&4294967295ull)));
  if (((llvm_cbe_tmp__22&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__24;
  } else {
    llvm_cbe_storemerge7__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__22;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__23:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15.us = phi i32 [ %%9, %%6 ], [ 0, %%.preheader  for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_storemerge15_2e_us_count);
  llvm_cbe_storemerge15_2e_us = (unsigned int )llvm_cbe_storemerge15_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15.us = 0x%X",llvm_cbe_storemerge15_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__6);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge15.us to i64, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [32 x float]* %%img_out, i64 %%3, i64 %%7, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__5 = (float *)(&llvm_cbe_img_out[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__4) < 32 && "Write access out of array 'img_out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%8, align 4, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_34_count);
  *llvm_cbe_tmp__5 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge15.us, 1, !dbg !8 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
  if (((llvm_cbe_tmp__6&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge15_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__6;   /* for PHI node */
    goto llvm_cbe_tmp__23;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_us_2d_lcssa:
  goto llvm_cbe__2e_us_2d_lcssa_2e_us;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__25:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15.us6 = phi i32 [ %%13, %%10 ], [ 0, %%.preheader..preheader.split_crit_edge  for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_storemerge15_2e_us6_count);
  llvm_cbe_storemerge15_2e_us6 = (unsigned int )llvm_cbe_storemerge15_2e_us6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15.us6 = 0x%X",llvm_cbe_storemerge15_2e_us6);
printf("\n = 0x%X",llvm_cbe_tmp__9);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%storemerge15.us6 to i64, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__7 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15_2e_us6);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [32 x float]* %%img_out, i64 %%3, i64 %%11, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__8 = (float *)(&llvm_cbe_img_out[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__7))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__7) < 32 && "Write access out of array 'img_out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%12, align 4, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_48_count);
  *llvm_cbe_tmp__8 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%storemerge15.us6, 1, !dbg !8 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15_2e_us6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
  if (((llvm_cbe_tmp__9&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa;
  } else {
    llvm_cbe_storemerge15_2e_us6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__9;   /* for PHI node */
    goto llvm_cbe_tmp__25;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge:
  if (((llvm_cbe_storemerge7&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_storemerge15_2e_us6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__25;
  } else {
    llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_split_2e__2e_preheader_2e_split_2e_split_crit_edge;
  }

  do {     /* Syntactic loop '.preheader.split..preheader.split.split_crit_edge' to make GCC happy */
llvm_cbe__2e_preheader_2e_split_2e__2e_preheader_2e_split_2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge15 = phi i32 [ %%31, %%30 ], [ 0, %%.preheader..preheader.split_crit_edge  for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_storemerge15_count);
  llvm_cbe_storemerge15 = (unsigned int )llvm_cbe_storemerge15__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge15 = 0x%X",llvm_cbe_storemerge15);
printf("\n = 0x%X",llvm_cbe_tmp__21);
printf("\n = 0x%X",0u);
}
  switch (((unsigned int )(llvm_cbe_storemerge7&4294967295ull))) {
  default:
    goto llvm_cbe_tmp__26;
;
  case ((unsigned int )(29u&4294967295ull)):
    goto llvm_cbe_tmp__27;
    break;
  case ((unsigned int )(0u&4294967295ull)):
    goto llvm_cbe_tmp__27;
    break;
  }
llvm_cbe_tmp__28:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%storemerge15, 1, !dbg !8 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__21 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__21&4294967295ull)));
  if (((llvm_cbe_tmp__21&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa;
  } else {
    llvm_cbe_storemerge15__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__21;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_split_2e__2e_preheader_2e_split_2e_split_crit_edge;
  }

llvm_cbe_tmp__27:
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = sext i32 %%storemerge15 to i64, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [32 x float]* %%img_out, i64 %%3, i64 %%15, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__11 = (float *)(&llvm_cbe_img_out[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__10))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__10) < 32 && "Write access out of array 'img_out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%16, align 4, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_63_count);
  *llvm_cbe_tmp__11 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  goto llvm_cbe_tmp__28;

llvm_cbe_tmp__29:
  goto llvm_cbe_tmp__28;

llvm_cbe_tmp__30:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sext i32 %%storemerge15 to i64, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__12 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [32 x float]* %%img_out, i64 %%3, i64 %%19, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__13 = (float *)(&llvm_cbe_img_out[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__12))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__12));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__12) < 32 && "Write access out of array 'img_out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%20, align 4, !dbg !7 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_68_count);
  *llvm_cbe_tmp__13 = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  goto llvm_cbe_tmp__29;

llvm_cbe_tmp__26:
  switch (((unsigned int )(llvm_cbe_storemerge15&4294967295ull))) {
  default:
    goto llvm_cbe_tmp__31;
;
  case ((unsigned int )(29u&4294967295ull)):
    goto llvm_cbe_tmp__30;
    break;
  case ((unsigned int )(0u&4294967295ull)):
    goto llvm_cbe_tmp__30;
    break;
  }
llvm_cbe_tmp__31:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add nsw i32 %%storemerge15, -1, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__14 = (unsigned int )((unsigned int )(llvm_cbe_storemerge15&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__14&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = sext i32 %%22 to i64, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__15 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [28 x float]* %%img_in, i64 %%2, i64 %%23, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__16 = (float *)(&llvm_cbe_img_in[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__15))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__15));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__15) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'img_in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load float* %%24, align 4, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__17 = (float )*llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = fdiv float %%25, 2.550000e+02, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__18 = (float )((float )(llvm_cbe_tmp__17 / 0x1.fep7));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__18, *(int*)(&llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = sext i32 %%storemerge15 to i64, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__19 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [32 x float]* %%img_out, i64 %%3, i64 %%27, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__20 = (float *)(&llvm_cbe_img_out[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__19))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__19) < 32 && "Write access out of array 'img_out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%28, align 4, !dbg !6 for 0x%I64xth hint within @normalization_and_padding  --> \n", ++aesl_llvm_cbe_77_count);
  *llvm_cbe_tmp__20 = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__18);
  goto llvm_cbe_tmp__29;

  } while (1); /* end of syntactic loop '.preheader.split..preheader.split.split_crit_edge' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__24:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @normalization_and_padding}\n");
  return;
}


void normalization(float (*llvm_cbe_img_in)[28], float (*llvm_cbe_img_out)[28]) {
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  float *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  float llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  float *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @normalization\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%10, %%9  for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__39);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge3 to i64, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__32 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__40;

llvm_cbe_tmp__41:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge3, 1, !dbg !7 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__39&4294967295ull)));
  if (((llvm_cbe_tmp__39&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__42;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__39;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__40:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.preheader ], [ %%8, %%2  for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__38);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge12 to i64, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__33 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [28 x float]* %%img_in, i64 %%1, i64 %%3, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__34 = (float *)(&llvm_cbe_img_in[(((signed long long )llvm_cbe_tmp__32))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__33))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__33) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'img_in' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%4, align 4, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__35 = (float )*llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = fdiv float %%5, 2.550000e+02, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__36 = (float )((float )(llvm_cbe_tmp__35 / 0x1.fep7));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__36, *(int*)(&llvm_cbe_tmp__36));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [28 x float]* %%img_out, i64 %%1, i64 %%3, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__37 = (float *)(&llvm_cbe_img_out[(((signed long long )llvm_cbe_tmp__32))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__33))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__33) < 28 && "Write access out of array 'img_out' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%6, float* %%7, align 4, !dbg !6 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_125_count);
  *llvm_cbe_tmp__37 = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge12, 1, !dbg !8 for 0x%I64xth hint within @normalization  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__38 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__38&4294967295ull)));
  if (((llvm_cbe_tmp__38&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__41;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__38;   /* for PHI node */
    goto llvm_cbe_tmp__40;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__42:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @normalization}\n");
  return;
}


void print_img(float (*llvm_cbe_img)[28]) {
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  unsigned long long llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  float llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  double llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print_img\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%10, %%9  for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__50);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge3 to i64, !dbg !6 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__43 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__43);
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__52:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_putchar_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge3, 1, !dbg !7 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__50 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__50&4294967295ull)));
  if (((llvm_cbe_tmp__50&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__53;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__50;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.preheader ], [ %%8, %%2  for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__49);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge12 to i64, !dbg !6 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__44 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [28 x float]* %%img, i64 %%1, i64 %%3, !dbg !6 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__45 = (float *)(&llvm_cbe_img[(((signed long long )llvm_cbe_tmp__43))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__44))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__43));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__44) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'img' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%4, align 4, !dbg !6 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__46 = (float )*llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__46, *(int*)(&llvm_cbe_tmp__46));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = fpext float %%5 to double, !dbg !6 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__47 = (double )((double )llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__47, *(long long*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%6) nounwind, !dbg !6 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_157_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__47, *(long long*)(&llvm_cbe_tmp__47));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge12, 1, !dbg !7 for 0x%I64xth hint within @print_img  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__49 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__49&4294967295ull)));
  if (((llvm_cbe_tmp__49&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__52;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__49;   /* for PHI node */
    goto llvm_cbe_tmp__51;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__53:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print_img}\n");
  return;
}


void print_pad_img(float (*llvm_cbe_img)[32]) {
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned long long llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  float *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  float llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  double llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print_pad_img\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%10, %%9  for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__61);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge3 to i64, !dbg !6 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__54 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__62;

llvm_cbe_tmp__63:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_putchar_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge3, 1, !dbg !7 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__61 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__61&4294967295ull)));
  if (((llvm_cbe_tmp__61&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__64;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__61;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.preheader ], [ %%8, %%2  for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__60);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge12 to i64, !dbg !6 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__55 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [32 x float]* %%img, i64 %%1, i64 %%3, !dbg !6 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__56 = (float *)(&llvm_cbe_img[(((signed long long )llvm_cbe_tmp__54))
#ifdef AESL_BC_SIM
 % 32
#endif
][(((signed long long )llvm_cbe_tmp__55))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__54));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__55));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__55) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'img' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%4, align 4, !dbg !6 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__57 = (float )*llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__57, *(int*)(&llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = fpext float %%5 to double, !dbg !6 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__58 = (double )((double )llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__58, *(long long*)(&llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%6) nounwind, !dbg !6 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_187_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__58, *(long long*)(&llvm_cbe_tmp__58));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__59);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge12, 1, !dbg !7 for 0x%I64xth hint within @print_pad_img  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__60 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__60&4294967295ull)));
  if (((llvm_cbe_tmp__60&4294967295U) == (32u&4294967295U))) {
    goto llvm_cbe_tmp__63;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__60;   /* for PHI node */
    goto llvm_cbe_tmp__62;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__64:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print_pad_img}\n");
  return;
}


void print_features(float (*llvm_cbe_features)[28][28]) {
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned long long llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_count = 0;
  unsigned int llvm_cbe_storemerge23;
  unsigned int llvm_cbe_storemerge23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  float *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  double llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge14_2e_1;
  unsigned int llvm_cbe_storemerge14_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  unsigned long long llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge23_2e_1;
  unsigned int llvm_cbe_storemerge23_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  unsigned long long llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  float *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  float llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  double llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_2e_1_count = 0;
  unsigned int llvm_cbe_putchar_2e_1;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge14_2e_2;
  unsigned int llvm_cbe_storemerge14_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  unsigned long long llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge23_2e_2;
  unsigned int llvm_cbe_storemerge23_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  unsigned long long llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  float *llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  float llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  double llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_2e_2_count = 0;
  unsigned int llvm_cbe_putchar_2e_2;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_3_count = 0;
  unsigned int llvm_cbe_storemerge14_2e_3;
  unsigned int llvm_cbe_storemerge14_2e_3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  unsigned long long llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_2e_3_count = 0;
  unsigned int llvm_cbe_storemerge23_2e_3;
  unsigned int llvm_cbe_storemerge23_2e_3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  float *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  float llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  double llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_2e_3_count = 0;
  unsigned int llvm_cbe_putchar_2e_3;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_2e_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  unsigned int llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_4_count = 0;
  unsigned int llvm_cbe_storemerge14_2e_4;
  unsigned int llvm_cbe_storemerge14_2e_4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  unsigned long long llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_2e_4_count = 0;
  unsigned int llvm_cbe_storemerge23_2e_4;
  unsigned int llvm_cbe_storemerge23_2e_4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  unsigned long long llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  float *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  float llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  double llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  unsigned int llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_2e_4_count = 0;
  unsigned int llvm_cbe_putchar_2e_4;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_2e_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  unsigned int llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_2e_5_count = 0;
  unsigned int llvm_cbe_storemerge14_2e_5;
  unsigned int llvm_cbe_storemerge14_2e_5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  unsigned long long llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_2e_5_count = 0;
  unsigned int llvm_cbe_storemerge23_2e_5;
  unsigned int llvm_cbe_storemerge23_2e_5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  unsigned long long llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  float *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  double llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  unsigned int llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_2e_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_2e_5_count = 0;
  unsigned int llvm_cbe_putchar_2e_5;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  unsigned int llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_2e_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print_features\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 0) nounwind, !dbg !7 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_208_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 0u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__65);
}
  llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ 0, %%0 ], [ %%11, %%10  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge14 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__66 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__66);
  llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__119;

llvm_cbe_tmp__120:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_putchar_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add nsw i32 %%storemerge14, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
  if (((llvm_cbe_tmp__73&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__121;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__73;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__119:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23 = phi i32 [ 0, %%.preheader ], [ %%9, %%3  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge23_count);
  llvm_cbe_storemerge23 = (unsigned int )llvm_cbe_storemerge23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23 = 0x%X",llvm_cbe_storemerge23);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__72);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge23 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__67 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 0, i64 %%2, i64 %%4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__68 = (float *)(&(*llvm_cbe_features)[(((signed long long )llvm_cbe_tmp__66))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__67))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__66));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__67));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__66) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__67) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load float* %%5, align 4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__69 = (float )*llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__69, *(int*)(&llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = fpext float %%6 to double, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__70 = (double )((double )llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__70, *(long long*)(&llvm_cbe_tmp__70));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%7) nounwind, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_223_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__70, *(long long*)(&llvm_cbe_tmp__70));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__71);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge23, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__72 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__72&4294967295ull)));
  if (((llvm_cbe_tmp__72&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__120;
  } else {
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__72;   /* for PHI node */
    goto llvm_cbe_tmp__119;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__121:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 1) nounwind, !dbg !7 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_241_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__74);
}
  llvm_cbe_storemerge14_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_1;

  do {     /* Syntactic loop '.preheader.1' to make GCC happy */
llvm_cbe__2e_preheader_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.1 = phi i32 [ 0, %%12 ], [ %%23, %%22  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge14_2e_1_count);
  llvm_cbe_storemerge14_2e_1 = (unsigned int )llvm_cbe_storemerge14_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.1 = 0x%X",llvm_cbe_storemerge14_2e_1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__82);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%storemerge14.1 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__75 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__75);
  llvm_cbe_storemerge23_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__122;

llvm_cbe_tmp__123:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar.1 = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_putchar_2e_1_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar.1 = 0x%X",llvm_cbe_putchar_2e_1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = add nsw i32 %%storemerge14.1, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__82 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__82&4294967295ull)));
  if (((llvm_cbe_tmp__82&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__124;
  } else {
    llvm_cbe_storemerge14_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__82;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_1;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__122:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23.1 = phi i32 [ 0, %%.preheader.1 ], [ %%21, %%15  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge23_2e_1_count);
  llvm_cbe_storemerge23_2e_1 = (unsigned int )llvm_cbe_storemerge23_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23.1 = 0x%X",llvm_cbe_storemerge23_2e_1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__81);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i32 %%storemerge23.1 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__76 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 1, i64 %%14, i64 %%16, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__77 = (float *)(&llvm_cbe_features[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__75))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__76))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__75));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__76));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__75) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__76) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__78 = (float )*llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__78, *(int*)(&llvm_cbe_tmp__78));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = fpext float %%18 to double, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__79 = (double )((double )llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__79, *(long long*)(&llvm_cbe_tmp__79));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%19) nounwind, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_256_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__79, *(long long*)(&llvm_cbe_tmp__79));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__80);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%storemerge23.1, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__81 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__81&4294967295ull)));
  if (((llvm_cbe_tmp__81&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__123;
  } else {
    llvm_cbe_storemerge23_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__81;   /* for PHI node */
    goto llvm_cbe_tmp__122;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader.1' */
llvm_cbe_tmp__124:
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 2) nounwind, !dbg !7 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_274_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 2u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__83);
}
  llvm_cbe_storemerge14_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_2;

  do {     /* Syntactic loop '.preheader.2' to make GCC happy */
llvm_cbe__2e_preheader_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.2 = phi i32 [ 0, %%24 ], [ %%35, %%34  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge14_2e_2_count);
  llvm_cbe_storemerge14_2e_2 = (unsigned int )llvm_cbe_storemerge14_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.2 = 0x%X",llvm_cbe_storemerge14_2e_2);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__91);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%storemerge14.2 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__84 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__84);
  llvm_cbe_storemerge23_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__125;

llvm_cbe_tmp__126:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar.2 = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_putchar_2e_2_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar.2 = 0x%X",llvm_cbe_putchar_2e_2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add nsw i32 %%storemerge14.2, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__91 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__91&4294967295ull)));
  if (((llvm_cbe_tmp__91&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__127;
  } else {
    llvm_cbe_storemerge14_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__91;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_2;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__125:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23.2 = phi i32 [ 0, %%.preheader.2 ], [ %%33, %%27  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge23_2e_2_count);
  llvm_cbe_storemerge23_2e_2 = (unsigned int )llvm_cbe_storemerge23_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23.2 = 0x%X",llvm_cbe_storemerge23_2e_2);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sext i32 %%storemerge23.2 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__85 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 2, i64 %%26, i64 %%28, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__86 = (float *)(&llvm_cbe_features[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__84))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__85))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__84));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__85));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__84) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__85) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__87 = (float )*llvm_cbe_tmp__86;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__87, *(int*)(&llvm_cbe_tmp__87));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fpext float %%30 to double, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__88 = (double )((double )llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__88, *(long long*)(&llvm_cbe_tmp__88));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%31) nounwind, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_289_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__88, *(long long*)(&llvm_cbe_tmp__88));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge23.2, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__90 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__90&4294967295ull)));
  if (((llvm_cbe_tmp__90&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__126;
  } else {
    llvm_cbe_storemerge23_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__90;   /* for PHI node */
    goto llvm_cbe_tmp__125;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader.2' */
llvm_cbe_tmp__127:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 3) nounwind, !dbg !7 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_307_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 3u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__92);
}
  llvm_cbe_storemerge14_2e_3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_3;

  do {     /* Syntactic loop '.preheader.3' to make GCC happy */
llvm_cbe__2e_preheader_2e_3:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.3 = phi i32 [ 0, %%36 ], [ %%47, %%46  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge14_2e_3_count);
  llvm_cbe_storemerge14_2e_3 = (unsigned int )llvm_cbe_storemerge14_2e_3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.3 = 0x%X",llvm_cbe_storemerge14_2e_3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__100);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = sext i32 %%storemerge14.3 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__93 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14_2e_3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__93);
  llvm_cbe_storemerge23_2e_3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__128;

llvm_cbe_tmp__129:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar.3 = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_putchar_2e_3_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar.3 = 0x%X",llvm_cbe_putchar_2e_3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add nsw i32 %%storemerge14.3, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_329_count);
  llvm_cbe_tmp__100 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14_2e_3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__100&4294967295ull)));
  if (((llvm_cbe_tmp__100&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__130;
  } else {
    llvm_cbe_storemerge14_2e_3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__100;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_3;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__128:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23.3 = phi i32 [ 0, %%.preheader.3 ], [ %%45, %%39  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge23_2e_3_count);
  llvm_cbe_storemerge23_2e_3 = (unsigned int )llvm_cbe_storemerge23_2e_3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23.3 = 0x%X",llvm_cbe_storemerge23_2e_3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__99);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = sext i32 %%storemerge23.3 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__94 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23_2e_3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 3, i64 %%38, i64 %%40, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__95 = (float *)(&llvm_cbe_features[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__93))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__94))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__93));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__93) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__94) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_320_count);
  llvm_cbe_tmp__96 = (float )*llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__96, *(int*)(&llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = fpext float %%42 to double, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__97 = (double )((double )llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__97, *(long long*)(&llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%43) nounwind, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_322_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__97, *(long long*)(&llvm_cbe_tmp__97));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__98);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = add nsw i32 %%storemerge23.3, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__99 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23_2e_3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__99&4294967295ull)));
  if (((llvm_cbe_tmp__99&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__129;
  } else {
    llvm_cbe_storemerge23_2e_3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__99;   /* for PHI node */
    goto llvm_cbe_tmp__128;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader.3' */
llvm_cbe_tmp__130:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 4) nounwind, !dbg !7 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_340_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 4u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",4u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__101);
}
  llvm_cbe_storemerge14_2e_4__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_4;

  do {     /* Syntactic loop '.preheader.4' to make GCC happy */
llvm_cbe__2e_preheader_2e_4:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.4 = phi i32 [ 0, %%48 ], [ %%59, %%58  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge14_2e_4_count);
  llvm_cbe_storemerge14_2e_4 = (unsigned int )llvm_cbe_storemerge14_2e_4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.4 = 0x%X",llvm_cbe_storemerge14_2e_4);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__109);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = sext i32 %%storemerge14.4 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_349_count);
  llvm_cbe_tmp__102 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14_2e_4);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__102);
  llvm_cbe_storemerge23_2e_4__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__131;

llvm_cbe_tmp__132:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar.4 = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_putchar_2e_4_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar.4 = 0x%X",llvm_cbe_putchar_2e_4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge14.4, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__109 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14_2e_4&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__109&4294967295ull)));
  if (((llvm_cbe_tmp__109&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__133;
  } else {
    llvm_cbe_storemerge14_2e_4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__109;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_4;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__131:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23.4 = phi i32 [ 0, %%.preheader.4 ], [ %%57, %%51  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge23_2e_4_count);
  llvm_cbe_storemerge23_2e_4 = (unsigned int )llvm_cbe_storemerge23_2e_4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23.4 = 0x%X",llvm_cbe_storemerge23_2e_4);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__108);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = sext i32 %%storemerge23.4 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__103 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23_2e_4);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 4, i64 %%50, i64 %%52, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__104 = (float *)(&llvm_cbe_features[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__102))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__103))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__102));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__103));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__102) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__103) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%53, align 4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__105 = (float )*llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__105, *(int*)(&llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = fpext float %%54 to double, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_354_count);
  llvm_cbe_tmp__106 = (double )((double )llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__106, *(long long*)(&llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%55) nounwind, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_355_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__106, *(long long*)(&llvm_cbe_tmp__106));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__107);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = add nsw i32 %%storemerge23.4, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_356_count);
  llvm_cbe_tmp__108 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23_2e_4&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__108&4294967295ull)));
  if (((llvm_cbe_tmp__108&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__132;
  } else {
    llvm_cbe_storemerge23_2e_4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__108;   /* for PHI node */
    goto llvm_cbe_tmp__131;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader.4' */
llvm_cbe_tmp__133:
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 5) nounwind, !dbg !7 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_373_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 5u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",5u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__110);
}
  llvm_cbe_storemerge14_2e_5__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_5;

  do {     /* Syntactic loop '.preheader.5' to make GCC happy */
llvm_cbe__2e_preheader_2e_5:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14.5 = phi i32 [ 0, %%60 ], [ %%71, %%70  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge14_2e_5_count);
  llvm_cbe_storemerge14_2e_5 = (unsigned int )llvm_cbe_storemerge14_2e_5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14.5 = 0x%X",llvm_cbe_storemerge14_2e_5);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__118);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = sext i32 %%storemerge14.5 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_382_count);
  llvm_cbe_tmp__111 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14_2e_5);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__111);
  llvm_cbe_storemerge23_2e_5__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__134;

llvm_cbe_tmp__135:
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar.5 = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_putchar_2e_5_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar.5 = 0x%X",llvm_cbe_putchar_2e_5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%storemerge14.5, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_395_count);
  llvm_cbe_tmp__118 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14_2e_5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__118&4294967295ull)));
  if (((llvm_cbe_tmp__118&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__136;
  } else {
    llvm_cbe_storemerge14_2e_5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__118;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_5;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__134:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23.5 = phi i32 [ 0, %%.preheader.5 ], [ %%69, %%63  for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_storemerge23_2e_5_count);
  llvm_cbe_storemerge23_2e_5 = (unsigned int )llvm_cbe_storemerge23_2e_5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23.5 = 0x%X",llvm_cbe_storemerge23_2e_5);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__117);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = sext i32 %%storemerge23.5 to i64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_384_count);
  llvm_cbe_tmp__112 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23_2e_5);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 5, i64 %%62, i64 %%64, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__113 = (float *)(&llvm_cbe_features[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__111))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__112))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__111));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__112));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__111) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__112) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%65, align 4, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__114 = (float )*llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = fpext float %%66 to double, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__115 = (double )((double )llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__115, *(long long*)(&llvm_cbe_tmp__115));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%67) nounwind, !dbg !6 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_388_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__115, *(long long*)(&llvm_cbe_tmp__115));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__116);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = add nsw i32 %%storemerge23.5, 1, !dbg !8 for 0x%I64xth hint within @print_features  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__117 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23_2e_5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__117&4294967295ull)));
  if (((llvm_cbe_tmp__117&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__135;
  } else {
    llvm_cbe_storemerge23_2e_5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__117;   /* for PHI node */
    goto llvm_cbe_tmp__134;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader.5' */
llvm_cbe_tmp__136:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print_features}\n");
  return;
}


void print_pool_features(float (*llvm_cbe_pool_features)[12][12]) {
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge5_count = 0;
  unsigned int llvm_cbe_storemerge5;
  unsigned int llvm_cbe_storemerge5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  unsigned int llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  unsigned long long llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  unsigned long long llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  float *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  float llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  double llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  float *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  float llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  double llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  unsigned int llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  float *llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  float llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  double llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  unsigned int llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  float *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  float llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  double llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  unsigned int llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  float *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  float llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  double llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  unsigned int llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  float *llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  float llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  double llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  unsigned int llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  float *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  float llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  double llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  unsigned int llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  float *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  double llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  unsigned int llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  float *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  float llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  double llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  unsigned int llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  float *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  float llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  double llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  unsigned int llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  float *llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  double llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  unsigned int llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  float *llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  float llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  double llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  unsigned int llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  unsigned int llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  unsigned int llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond6_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print_pool_features\n");
  llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__190;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__190:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge5 = phi i32 [ 0, %%0 ], [ %%55, %%54  for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_storemerge5_count);
  llvm_cbe_storemerge5 = (unsigned int )llvm_cbe_storemerge5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%X",llvm_cbe_storemerge5);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__189);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([22 x i8]* @aesl_internal_.str3, i64 0, i64 0), i32 %%storemerge5) nounwind, !dbg !7 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_415_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 22
#endif
])), llvm_cbe_storemerge5);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge5 = 0x%X",llvm_cbe_storemerge5);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__137);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge5 to i64, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__138 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge5);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__138);
  llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__191:
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = add nsw i32 %%storemerge5, 1, !dbg !7 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_528_count);
  llvm_cbe_tmp__189 = (unsigned int )((unsigned int )(llvm_cbe_storemerge5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__189&4294967295ull)));
  if (((llvm_cbe_tmp__189&4294967295U) == (6u&4294967295U))) {
    goto llvm_cbe_tmp__192;
  } else {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__189;   /* for PHI node */
    goto llvm_cbe_tmp__190;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ 0, %%1 ], [ %%53, %%.preheader  for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__188);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge14 to i64, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__139 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 0, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_426_count);
  llvm_cbe_tmp__140 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load float* %%5, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_427_count);
  llvm_cbe_tmp__141 = (float )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__141, *(int*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = fpext float %%6 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__142 = (double )((double )llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__142, *(long long*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%7) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_429_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__142, *(long long*)(&llvm_cbe_tmp__142));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__143);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 1, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__144 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* %%9, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_435_count);
  llvm_cbe_tmp__145 = (float )*llvm_cbe_tmp__144;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__145, *(int*)(&llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = fpext float %%10 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_436_count);
  llvm_cbe_tmp__146 = (double )((double )llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__146, *(long long*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%11) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_437_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__146, *(long long*)(&llvm_cbe_tmp__146));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__147);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 2, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__148 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_443_count);
  llvm_cbe_tmp__149 = (float )*llvm_cbe_tmp__148;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__149, *(int*)(&llvm_cbe_tmp__149));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = fpext float %%14 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_444_count);
  llvm_cbe_tmp__150 = (double )((double )llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__150, *(long long*)(&llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%15) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_445_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__150, *(long long*)(&llvm_cbe_tmp__150));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__151);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 3, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__152 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__153 = (float )*llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__153, *(int*)(&llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = fpext float %%18 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_452_count);
  llvm_cbe_tmp__154 = (double )((double )llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__154, *(long long*)(&llvm_cbe_tmp__154));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%19) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_453_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__154, *(long long*)(&llvm_cbe_tmp__154));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__155);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_458_count);
  llvm_cbe_tmp__156 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )4ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_459_count);
  llvm_cbe_tmp__157 = (float )*llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__157, *(int*)(&llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = fpext float %%22 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__158 = (double )((double )llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__158, *(long long*)(&llvm_cbe_tmp__158));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%23) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_461_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__158, *(long long*)(&llvm_cbe_tmp__158));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__159);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 5, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_466_count);
  llvm_cbe_tmp__160 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )5ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_467_count);
  llvm_cbe_tmp__161 = (float )*llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__161, *(int*)(&llvm_cbe_tmp__161));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = fpext float %%26 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__162 = (double )((double )llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__162, *(long long*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%27) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_469_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__162, *(long long*)(&llvm_cbe_tmp__162));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__163);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 6, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__164 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )6ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__165 = (float )*llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__165, *(int*)(&llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fpext float %%30 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_476_count);
  llvm_cbe_tmp__166 = (double )((double )llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__166, *(long long*)(&llvm_cbe_tmp__166));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%31) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_477_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__166, *(long long*)(&llvm_cbe_tmp__166));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__167);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 7, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__168 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )7ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load float* %%33, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_483_count);
  llvm_cbe_tmp__169 = (float )*llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = fpext float %%34 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__170 = (double )((double )llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__170, *(long long*)(&llvm_cbe_tmp__170));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%35) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_485_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__170, *(long long*)(&llvm_cbe_tmp__170));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__171);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 8, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_490_count);
  llvm_cbe_tmp__172 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )8ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )8ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_491_count);
  llvm_cbe_tmp__173 = (float )*llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__173, *(int*)(&llvm_cbe_tmp__173));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fpext float %%38 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_492_count);
  llvm_cbe_tmp__174 = (double )((double )llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__174, *(long long*)(&llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%39) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_493_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__174, *(long long*)(&llvm_cbe_tmp__174));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__175);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 9, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_498_count);
  llvm_cbe_tmp__176 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )9ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )9ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_499_count);
  llvm_cbe_tmp__177 = (float )*llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__177, *(int*)(&llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = fpext float %%42 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_500_count);
  llvm_cbe_tmp__178 = (double )((double )llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__178, *(long long*)(&llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%43) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_501_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__178, *(long long*)(&llvm_cbe_tmp__178));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__179);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 10, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_506_count);
  llvm_cbe_tmp__180 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )10ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )10ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load float* %%45, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_507_count);
  llvm_cbe_tmp__181 = (float )*llvm_cbe_tmp__180;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__181, *(int*)(&llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = fpext float %%46 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__182 = (double )((double )llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__182, *(long long*)(&llvm_cbe_tmp__182));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%47) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_509_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__182, *(long long*)(&llvm_cbe_tmp__182));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__183);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [12 x [12 x float]]* %%pool_features, i64 %%3, i64 %%4, i64 11, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__184 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__138))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )11ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__138));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )11ull) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%49, align 4, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_515_count);
  llvm_cbe_tmp__185 = (float )*llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__185, *(int*)(&llvm_cbe_tmp__185));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = fpext float %%50 to double, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_516_count);
  llvm_cbe_tmp__186 = (double )((double )llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__186, *(long long*)(&llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%51) nounwind, !dbg !6 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_517_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__186, *(long long*)(&llvm_cbe_tmp__186));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__187);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = tail call i32 @putchar(i32 10) nounwind, !dbg !8 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_putchar_count);
   /*tail*/ putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = add nsw i32 %%storemerge14, 1, !dbg !8 for 0x%I64xth hint within @print_pool_features  --> \n", ++aesl_llvm_cbe_522_count);
  llvm_cbe_tmp__188 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__188&4294967295ull)));
  if (((llvm_cbe_tmp__188&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__191;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__188;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__192:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print_pool_features}\n");
  return;
}

