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
void cnn(float (*llvm_cbe_img_in)[28], float *llvm_cbe_prediction);
void normalization_and_padding(float (*)[28], float (*)[30]);
void convolutional_layer(float (*)[30], float (*)[28][28]);
void max_pooling_layer(float (*)[28][28], float (*)[14][14]);
void flattening_layer(float (*)[14][14], float *);
void dense_layer(float *, float *);


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

void cnn(float (*llvm_cbe_img_in)[28], float *llvm_cbe_prediction) {
  static  unsigned long long aesl_llvm_cbe_pad_img_count = 0;
  float llvm_cbe_pad_img[30][30];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_features_count = 0;
  float llvm_cbe_features[8][28][28];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_pool_features_count = 0;
  float llvm_cbe_pool_features[8][14][14];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_flat_array_count = 0;
  float llvm_cbe_flat_array[1568];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  float (*llvm_cbe_tmp__3)[30];
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  float (*llvm_cbe_tmp__6)[28][28];
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  float (*llvm_cbe_tmp__9)[14][14];
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
   char *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  float *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @cnn\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast [30 x [30 x float]]* %%pad_img to i8*, !dbg !3 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__1 = ( char *)(( char *)(&llvm_cbe_pad_img));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memset(i8* %%1, i32 0, i64 3600 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_7_count);
  ( char *)memset(( char *)llvm_cbe_tmp__1, 0u, 3600ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",3600ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [30 x [30 x float]]* %%pad_img, i64 0, i64 0, !dbg !2 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__3 = (float (*)[30])(&llvm_cbe_pad_img[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @normalization_and_padding([28 x float]* %%img_in, [30 x float]* %%3) nounwind, !dbg !2 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_9_count);
  normalization_and_padding(llvm_cbe_img_in, llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = bitcast [8 x [28 x [28 x float]]]* %%features to i8*, !dbg !4 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__4 = ( char *)(( char *)(&llvm_cbe_features));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = call i8* @memset(i8* %%4, i32 0, i64 25088 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_12_count);
  ( char *)memset(( char *)llvm_cbe_tmp__4, 0u, 25088ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",25088ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [8 x [28 x [28 x float]]]* %%features, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__6 = (float (*)[28][28])(&llvm_cbe_features[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer([30 x float]* %%3, [28 x [28 x float]]* %%6) nounwind, !dbg !4 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_14_count);
  convolutional_layer(llvm_cbe_tmp__3, llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = bitcast [8 x [14 x [14 x float]]]* %%pool_features to i8*, !dbg !4 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__7 = ( char *)(( char *)(&llvm_cbe_pool_features));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i8* @memset(i8* %%7, i32 0, i64 6272 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_17_count);
  ( char *)memset(( char *)llvm_cbe_tmp__7, 0u, 6272ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",6272ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [8 x [14 x [14 x float]]]* %%pool_features, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__9 = (float (*)[14][14])(&llvm_cbe_pool_features[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @max_pooling_layer([28 x [28 x float]]* %%6, [14 x [14 x float]]* %%9) nounwind, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_19_count);
  max_pooling_layer(llvm_cbe_tmp__6, llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = bitcast [1568 x float]* %%flat_array to i8*, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__10 = ( char *)(( char *)(&llvm_cbe_flat_array));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i8* @memset(i8* %%10, i32 0, i64 6272 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_22_count);
  ( char *)memset(( char *)llvm_cbe_tmp__10, 0u, 6272ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",6272ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__11);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [1568 x float]* %%flat_array, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__12 = (float *)(&llvm_cbe_flat_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1568
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @flattening_layer([14 x [14 x float]]* %%9, float* %%12) nounwind, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_24_count);
  flattening_layer(llvm_cbe_tmp__9, (float *)llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @dense_layer(float* %%12, float* %%prediction) nounwind, !dbg !3 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_25_count);
  dense_layer((float *)llvm_cbe_tmp__12, (float *)llvm_cbe_prediction);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @cnn}\n");
  return;
}

