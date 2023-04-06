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

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void max_pool(float (*llvm_cbe_feature)[28], float (*llvm_cbe_pool_feature)[14]);
void max_pooling_layer(float (*llvm_cbe_features)[28][28], float (*llvm_cbe_pool_features)[14][14]);


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

void max_pool(float (*llvm_cbe_feature)[28], float (*llvm_cbe_pool_feature)[14]) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge10_count = 0;
  unsigned int llvm_cbe_storemerge10;
  unsigned int llvm_cbe_storemerge10__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge19_count = 0;
  unsigned int llvm_cbe_storemerge19;
  unsigned int llvm_cbe_storemerge19__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned long long llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  float *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  float llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  float llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned long long llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  float *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  float llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  float llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  float *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  float llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  float *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @max_pool\n");
  llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge10 = phi i32 [ 0, %%0 ], [ %%31, %%30  for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_storemerge10_count);
  llvm_cbe_storemerge10 = (unsigned int )llvm_cbe_storemerge10__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge10 = 0x%X",llvm_cbe_storemerge10);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__25);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sdiv i32 %%storemerge10, 2, !dbg !5 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__1 = (unsigned int )((signed int )(((signed int )llvm_cbe_storemerge10) / ((signed int )2u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__1));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%1 to i64, !dbg !5 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = or i32 %%storemerge10, 1, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__3 = (unsigned int )llvm_cbe_storemerge10 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
  llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader5;

llvm_cbe_tmp__26:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%storemerge10, 2, !dbg !6 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__25 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__25&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__25) < ((signed int )28u))) {
    llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__25;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  } else {
    goto llvm_cbe_tmp__27;
  }

  do {     /* Syntactic loop '.preheader5' to make GCC happy */
llvm_cbe__2e_preheader5:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge19 = phi i32 [ 0, %%.preheader8 ], [ %%28, %%.preheader5  for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_storemerge19_count);
  llvm_cbe_storemerge19 = (unsigned int )llvm_cbe_storemerge19__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge19 = 0x%X",llvm_cbe_storemerge19);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__24);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge19 to i64, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__5 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge10 to i64, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__6 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge10);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [28 x float]* %%feature, i64 %%6, i64 %%5, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__7 = (float *)(&llvm_cbe_feature[(((signed long long )llvm_cbe_tmp__6))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__5))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'feature' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__8 = (float )*llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__8, *(int*)(&llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = select i1 %%9, float %%8, float 0x3810000000000000, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__9 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__8, 0x1p-126))) ? ((float )llvm_cbe_tmp__8) : ((float )0x1p-126));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__9, *(int*)(&llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = or i32 %%storemerge19, 1, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__10 = (unsigned int )llvm_cbe_storemerge19 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%11 to i64, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__11 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [28 x float]* %%feature, i64 %%6, i64 %%12, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__12 = (float *)(&llvm_cbe_feature[(((signed long long )llvm_cbe_tmp__6))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__11))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__11));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__11) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'feature' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__13 = (float )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = select i1 %%15, float %%14, float %%10, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__14 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__13, llvm_cbe_tmp__9))) ? ((float )llvm_cbe_tmp__13) : ((float )llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__14, *(int*)(&llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [28 x float]* %%feature, i64 %%4, i64 %%5, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__15 = (float *)(&llvm_cbe_feature[(((signed long long )llvm_cbe_tmp__4))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__5))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'feature' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__16 = (float )*llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__16, *(int*)(&llvm_cbe_tmp__16));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = select i1 %%19, float %%18, float %%16, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__17 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__16, llvm_cbe_tmp__14))) ? ((float )llvm_cbe_tmp__16) : ((float )llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [28 x float]* %%feature, i64 %%4, i64 %%12, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__18 = (float *)(&llvm_cbe_feature[(((signed long long )llvm_cbe_tmp__4))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__11))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__11));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__11) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'feature' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* %%21, align 4, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__19 = (float )*llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, float %%22, float %%20, !dbg !4 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__20 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__19, llvm_cbe_tmp__17))) ? ((float )llvm_cbe_tmp__19) : ((float )llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__20, *(int*)(&llvm_cbe_tmp__20));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sdiv i32 %%storemerge19, 2, !dbg !5 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__21 = (unsigned int )((signed int )(((signed int )llvm_cbe_storemerge19) / ((signed int )2u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !5 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__22 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [14 x float]* %%pool_feature, i64 %%2, i64 %%26, !dbg !5 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__23 = (float *)(&llvm_cbe_pool_feature[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__22))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__22));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__22) < 14 && "Write access out of array 'pool_feature' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* %%27, align 4, !dbg !5 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_107_count);
  *llvm_cbe_tmp__23 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add nsw i32 %%storemerge19, 2, !dbg !6 for 0x%I64xth hint within @max_pool  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )(llvm_cbe_storemerge19&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__24&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__24) < ((signed int )28u))) {
    llvm_cbe_storemerge19__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__24;   /* for PHI node */
    goto llvm_cbe__2e_preheader5;
  } else {
    goto llvm_cbe_tmp__26;
  }

  } while (1); /* end of syntactic loop '.preheader5' */
  } while (1); /* end of syntactic loop '.preheader8' */
llvm_cbe_tmp__27:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @max_pool}\n");
  return;
}


void max_pooling_layer(float (*llvm_cbe_features)[28][28], float (*llvm_cbe_pool_features)[14][14]) {
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  float (*llvm_cbe_tmp__28)[28];
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  float (*llvm_cbe_tmp__29)[14];
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  float (*llvm_cbe_tmp__30)[28];
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  float (*llvm_cbe_tmp__31)[14];
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  float (*llvm_cbe_tmp__32)[28];
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  float (*llvm_cbe_tmp__33)[14];
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  float (*llvm_cbe_tmp__34)[28];
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  float (*llvm_cbe_tmp__35)[14];
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  float (*llvm_cbe_tmp__36)[28];
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  float (*llvm_cbe_tmp__37)[14];
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  float (*llvm_cbe_tmp__38)[28];
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  float (*llvm_cbe_tmp__39)[14];
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  float (*llvm_cbe_tmp__40)[28];
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  float (*llvm_cbe_tmp__41)[14];
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  float (*llvm_cbe_tmp__42)[28];
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  float (*llvm_cbe_tmp__43)[14];
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @max_pooling_layer\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__28 = (float (*)[28])(&(*llvm_cbe_features)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__29 = (float (*)[14])(&(*llvm_cbe_pool_features)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%1, [14 x float]* %%2), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_138_count);
   /*tail*/ max_pool(llvm_cbe_tmp__28, llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 1, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__30 = (float (*)[28])(&llvm_cbe_features[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 1, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__31 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%3, [14 x float]* %%4), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_146_count);
   /*tail*/ max_pool(llvm_cbe_tmp__30, llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 2, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__32 = (float (*)[28])(&llvm_cbe_features[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 2, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__33 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%5, [14 x float]* %%6), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_154_count);
   /*tail*/ max_pool(llvm_cbe_tmp__32, llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 3, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__34 = (float (*)[28])(&llvm_cbe_features[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 3, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__35 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%7, [14 x float]* %%8), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_162_count);
   /*tail*/ max_pool(llvm_cbe_tmp__34, llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 4, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__36 = (float (*)[28])(&llvm_cbe_features[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 4, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__37 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%9, [14 x float]* %%10), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_170_count);
   /*tail*/ max_pool(llvm_cbe_tmp__36, llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 5, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__38 = (float (*)[28])(&llvm_cbe_features[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 5, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__39 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%11, [14 x float]* %%12), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_178_count);
   /*tail*/ max_pool(llvm_cbe_tmp__38, llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 6, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__40 = (float (*)[28])(&llvm_cbe_features[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 6, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__41 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%13, [14 x float]* %%14), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_186_count);
   /*tail*/ max_pool(llvm_cbe_tmp__40, llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [28 x [28 x float]]* %%features, i64 7, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__42 = (float (*)[28])(&llvm_cbe_features[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 7, i64 0, !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__43 = (float (*)[14])(&llvm_cbe_pool_features[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 14
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @max_pool([28 x float]* %%15, [14 x float]* %%16), !dbg !4 for 0x%I64xth hint within @max_pooling_layer  --> \n", ++aesl_llvm_cbe_194_count);
   /*tail*/ max_pool(llvm_cbe_tmp__42, llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @max_pooling_layer}\n");
  return;
}

