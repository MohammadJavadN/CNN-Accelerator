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
/* Structure forward decls */
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC__iobuf {
   char *field0;
  unsigned int field1;
   char *field2;
  unsigned int field3;
  unsigned int field4;
  unsigned int field5;
  unsigned int field6;
   char *field7;
};


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int read_images( char *llvm_cbe_file, float (*llvm_cbe_images)[28][28]);
signed int read_labels( char *llvm_cbe_file, signed int *llvm_cbe_labels);
signed int get_max_prediction(float *llvm_cbe_prediction);
signed int main(void);
void cnn(float (*)[28], float *);
void normalization(float (*)[28], float (*)[28]);
void print_img(float (*)[28]);


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str[2] = "r";
static  char aesl_internal__OC_str1[3] = "%f";
static  char aesl_internal__OC_str2[3] = "%d";
static  char aesl_internal__OC_str3[7] = "in.dat";
static  char aesl_internal__OC_str5[8] = "out.dat";
static  char aesl_internal__OC_str7[15] = "\nExpected: %d\n";
static  char aesl_internal__OC_str9[8] = "%d: %f\n";
static  char aesl_internal__OC_str11[23] = "Total predictions: %d\n";
static  char aesl_internal__OC_str12[30] = "Correct predictions: %.2f %%\n";
static  char aesl_internal__OC_str13[26] = "Average latency: %f (ms)\n";
static  char aesl_internal_str2[12] = "Prediction:";
static  char aesl_internal_str[42] = "Error: can't open file ``../Data/in.dat''";
static  char aesl_internal_str1[43] = "Error: can't open file ``../Data/out.dat''";


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

signed int read_images( char *llvm_cbe_file, float (*llvm_cbe_images)[28][28]) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned int llvm_cbe_storemerge2;
  unsigned int llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  float *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @read_images\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call %%struct._iobuf* @fopen(i8* %%file, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str, i64 0, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__1 = (l_struct_OC__iobuf *) /*tail*/ aesl_fopen(( char *)llvm_cbe_file, ( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__1);
}
  if (((llvm_cbe_tmp__1) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader4;
  }

  do {     /* Syntactic loop '.preheader4' to make GCC happy */
llvm_cbe__2e_preheader4:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%19, %%18 ], [ 0, %%0  for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__9);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge) < ((signed int )500u))) {
    goto llvm_cbe__2e_preheader3;
  } else {
    goto llvm_cbe_tmp__11;
  }

llvm_cbe_tmp__12:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add nsw i32 %%storemerge, 1, !dbg !9 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__9;   /* for PHI node */
  goto llvm_cbe__2e_preheader4;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__13:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ %%17, %%16 ], [ 0, %%.preheader3  for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",llvm_cbe_tmp__8);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge1) < ((signed int )28u))) {
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe_tmp__12;
  }

llvm_cbe_tmp__14:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge1, 1, !dbg !9 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__8 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__8&4294967295ull)));
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__8;   /* for PHI node */
  goto llvm_cbe_tmp__13;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i32 [ %%15, %%10 ], [ 0, %%.preheader  for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned int )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",llvm_cbe_tmp__7);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge2) < ((signed int )28u))) {
    goto llvm_cbe_tmp__16;
  } else {
    goto llvm_cbe_tmp__14;
  }

llvm_cbe_tmp__16:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%storemerge2 to i64, !dbg !6 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [28 x [28 x float]]* %%images, i64 %%4, i64 %%7, i64 %%11, !dbg !6 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__5 = (float *)(&llvm_cbe_images[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%1, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str1, i64 0, i64 0), float* %%12) nounwind, !dbg !6 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__6 = (unsigned int ) /*tail*/ fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (float *)llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add nsw i32 %%storemerge2, 1, !dbg !9 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__7&4294967295ull)));
  if (((llvm_cbe_tmp__6&4294967295U) == (1u&4294967295U))) {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__7;   /* for PHI node */
    goto llvm_cbe_tmp__15;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge1 to i64, !dbg !6 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__15;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader3:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge to i64, !dbg !6 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__13;

  } while (1); /* end of syntactic loop '.preheader4' */
llvm_cbe_tmp__11:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = tail call i32 @fclose(%%struct._iobuf* %%1) nounwind, !dbg !8 for 0x%I64xth hint within @read_images  --> \n", ++aesl_llvm_cbe_44_count);
   /*tail*/ fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}
  goto llvm_cbe__2e_loopexit;

llvm_cbe__2e_loopexit:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @read_images}\n");
  return 0u;
}


signed int read_labels( char *llvm_cbe_file, signed int *llvm_cbe_labels) {
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  signed int *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  unsigned int llvm_cbe_tmp__23;
  unsigned int llvm_cbe_tmp__23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @read_labels\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call %%struct._iobuf* @fopen(i8* %%file, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str, i64 0, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__17 = (l_struct_OC__iobuf *) /*tail*/ aesl_fopen(( char *)llvm_cbe_file, ( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__17);
}
  if (((llvm_cbe_tmp__17) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    llvm_cbe_tmp__23__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ %%9, %%4 ], [ 0, %%0  for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",llvm_cbe_tmp__21);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge) < ((signed int )500u))) {
    goto llvm_cbe_tmp__24;
  } else {
    goto llvm_cbe_tmp__25;
  }

llvm_cbe_tmp__24:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge to i64, !dbg !6 for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__18 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i32* %%labels, i64 %%5, !dbg !6 for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__19 = (signed int *)(&llvm_cbe_labels[(((signed long long )llvm_cbe_tmp__18))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%1, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32* %%6) nounwind, !dbg !6 for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__20 = (unsigned int ) /*tail*/ fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__17, ( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (signed int *)llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge, 1, !dbg !9 for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__21 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__21&4294967295ull)));
  if (((llvm_cbe_tmp__20&4294967295U) == (1u&4294967295U))) {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__21;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_tmp__23__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__25:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @fclose(%%struct._iobuf* %%1) nounwind, !dbg !8 for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__22 = (unsigned int ) /*tail*/ fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__22);
}
  llvm_cbe_tmp__23__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__22;   /* for PHI node */
  goto llvm_cbe__2e_loopexit;

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = phi i32 [ %%11, %%10 ], [ -1, %%0 ], [ 1, %%4  for 0x%I64xth hint within @read_labels  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__23 = (unsigned int )llvm_cbe_tmp__23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__23);
printf("\n = 0x%X",llvm_cbe_tmp__22);
printf("\n = 0x%X",4294967295u);
printf("\n = 0x%X",1u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @read_labels}\n");
  return llvm_cbe_tmp__23;
}


signed int get_max_prediction(float *llvm_cbe_prediction) {
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  float llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  float *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  float llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  float *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  float llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  float *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  float llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  float *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  float *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  float llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  float *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  float llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  float *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  float llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned long long llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  float *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  float llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  float *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  float llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned long long llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  float *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  float llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  float *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  float llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  unsigned long long llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  float *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  float llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  float *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  float llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned long long llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  float *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  float llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  float *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  unsigned long long llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  float *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  float llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @get_max_prediction\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load float* %%prediction, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__26 = (float )*llvm_cbe_prediction;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__26, *(int*)(&llvm_cbe_tmp__26));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds float* %%prediction, i64 1, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__27 = (float *)(&llvm_cbe_prediction[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load float* %%2, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__28 = (float )*llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__28, *(int*)(&llvm_cbe_tmp__28));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i1 %%4 to i32, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__29 = (unsigned int )((unsigned int )(bool )(llvm_fcmp_ogt(llvm_cbe_tmp__28, llvm_cbe_tmp__26))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds float* %%prediction, i64 2, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__30 = (float *)(&llvm_cbe_prediction[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load float* %%6, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__31 = (float )*llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__31, *(int*)(&llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i1 %%4 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__32 = (unsigned long long )((unsigned long long )(bool )(llvm_fcmp_ogt(llvm_cbe_tmp__28, llvm_cbe_tmp__26))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds float* %%prediction, i64 %%8, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__33 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__32))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* %%9, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__34 = (float )*llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__34, *(int*)(&llvm_cbe_tmp__34));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = select i1 %%11, i32 2, i32 %%5, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__35 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__31, llvm_cbe_tmp__34))) ? ((unsigned int )2u) : ((unsigned int )llvm_cbe_tmp__29));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds float* %%prediction, i64 3, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__36 = (float *)(&llvm_cbe_prediction[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* %%13, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__37 = (float )*llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i32 %%12 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__38 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__35&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds float* %%prediction, i64 %%15, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_127_count);
  llvm_cbe_tmp__39 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* %%16, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__40 = (float )*llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__40, *(int*)(&llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = select i1 %%18, i32 3, i32 %%12, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__41 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__37, llvm_cbe_tmp__40))) ? ((unsigned int )3u) : ((unsigned int )llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds float* %%prediction, i64 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__42 = (float *)(&llvm_cbe_prediction[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load float* %%20, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__43 = (float )*llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i32 %%19 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__44 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__41&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds float* %%prediction, i64 %%22, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__45 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__44))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__46 = (float )*llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__46, *(int*)(&llvm_cbe_tmp__46));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = select i1 %%25, i32 4, i32 %%19, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__47 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__43, llvm_cbe_tmp__46))) ? ((unsigned int )4u) : ((unsigned int )llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds float* %%prediction, i64 5, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__48 = (float *)(&llvm_cbe_prediction[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__49 = (float )*llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i32 %%26 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__50 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__47&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds float* %%prediction, i64 %%29, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_159_count);
  llvm_cbe_tmp__51 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__50))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__50));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load float* %%30, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__52 = (float )*llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__52, *(int*)(&llvm_cbe_tmp__52));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = select i1 %%32, i32 5, i32 %%26, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_165_count);
  llvm_cbe_tmp__53 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__49, llvm_cbe_tmp__52))) ? ((unsigned int )5u) : ((unsigned int )llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds float* %%prediction, i64 6, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__54 = (float *)(&llvm_cbe_prediction[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load float* %%34, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__55 = (float )*llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = zext i32 %%33 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__56 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__53&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds float* %%prediction, i64 %%36, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__57 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__56))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__56));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__58 = (float )*llvm_cbe_tmp__57;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__58, *(int*)(&llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = select i1 %%39, i32 6, i32 %%33, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__59 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__55, llvm_cbe_tmp__58))) ? ((unsigned int )6u) : ((unsigned int )llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds float* %%prediction, i64 7, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__60 = (float *)(&llvm_cbe_prediction[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%41, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__61 = (float )*llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = sext i32 %%40 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__62 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds float* %%prediction, i64 %%43, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__63 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__62))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__62));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = load float* %%44, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__64 = (float )*llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__64, *(int*)(&llvm_cbe_tmp__64));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = select i1 %%46, i32 7, i32 %%40, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__65 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__61, llvm_cbe_tmp__64))) ? ((unsigned int )7u) : ((unsigned int )llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds float* %%prediction, i64 8, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__66 = (float *)(&llvm_cbe_prediction[(((signed long long )8ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load float* %%48, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__67 = (float )*llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = sext i32 %%47 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__68 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = getelementptr inbounds float* %%prediction, i64 %%50, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__69 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__68))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__68));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load float* %%51, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__70 = (float )*llvm_cbe_tmp__69;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__70, *(int*)(&llvm_cbe_tmp__70));
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = select i1 %%53, i32 8, i32 %%47, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__71 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__67, llvm_cbe_tmp__70))) ? ((unsigned int )8u) : ((unsigned int )llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds float* %%prediction, i64 9, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__72 = (float *)(&llvm_cbe_prediction[(((signed long long )9ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* %%55, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__73 = (float )*llvm_cbe_tmp__72;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = sext i32 %%54 to i64, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__74 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds float* %%prediction, i64 %%57, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__75 = (float *)(&llvm_cbe_prediction[(((signed long long )llvm_cbe_tmp__74))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__74));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load float* %%58, align 4, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__76 = (float )*llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__76, *(int*)(&llvm_cbe_tmp__76));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = select i1 %%60, i32 9, i32 %%54, !dbg !6 for 0x%I64xth hint within @get_max_prediction  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__77 = (unsigned int )(((llvm_fcmp_ogt(llvm_cbe_tmp__73, llvm_cbe_tmp__76))) ? ((unsigned int )9u) : ((unsigned int )llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @get_max_prediction}\n");
  return llvm_cbe_tmp__77;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_images_count = 0;
  float llvm_cbe_images[500][28][28];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_labels_count = 0;
  signed int llvm_cbe_labels[500];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_prediction_count = 0;
  float llvm_cbe_prediction[10];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_norm_img_count = 0;
  float llvm_cbe_norm_img[28][28];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  float (*llvm_cbe_tmp__78)[28][28];
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  unsigned int llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts_count = 0;
  unsigned int llvm_cbe_puts;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  signed int *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  float *llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  float (*llvm_cbe_tmp__83)[28];
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts2_count = 0;
  unsigned int llvm_cbe_puts2;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge6_count = 0;
  unsigned int llvm_cbe_storemerge6;
  unsigned int llvm_cbe_storemerge6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  double llvm_cbe_tmp__84;
  double llvm_cbe_tmp__84__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned int llvm_cbe_tmp__85;
  unsigned int llvm_cbe_tmp__85__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  unsigned long long llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  float (*llvm_cbe_tmp__88)[28];
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  signed int *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  unsigned int llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts3_count = 0;
  unsigned int llvm_cbe_puts3;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  float llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  double llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  float *llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  float llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  double llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  unsigned int llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  float *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  float llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  double llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  float *llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  float llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  double llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  float *llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  float llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  double llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  unsigned int llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  float *llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  float llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  double llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  unsigned int llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  float *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  float llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  double llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  unsigned int llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  float *llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  float llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  double llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  unsigned int llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  float *llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  float llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  double llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  unsigned int llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  float *llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  float llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  double llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_putchar_count = 0;
  unsigned int llvm_cbe_putchar;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  unsigned int llvm_cbe_tmp__134;
  unsigned int llvm_cbe_tmp__134__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  unsigned int llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  double llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  double llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  double llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  double llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  double llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  double llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  unsigned int llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  double llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  double llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned int llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  unsigned int llvm_cbe_tmp__148;
  unsigned int llvm_cbe_tmp__148__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [500 x [28 x [28 x float]]]* %%images, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_239_count);
  llvm_cbe_tmp__78 = (float (*)[28][28])(&llvm_cbe_images[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 500
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i32 @read_images(i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str3, i64 0, i64 0), [28 x [28 x float]]* %%1), !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__79 = (unsigned int )read_images(( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__79);
}
  if (((llvm_cbe_tmp__79&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__149;
  } else {
    goto llvm_cbe_tmp__150;
  }

llvm_cbe_tmp__150:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts = call i32 @puts(i8* getelementptr inbounds ([42 x i8]* @aesl_internal_str, i64 0, i64 0)), !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts_count);
  puts(( char *)((&aesl_internal_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 42
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts = 0x%X",llvm_cbe_puts);
}
  llvm_cbe_tmp__148__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__151;

llvm_cbe_tmp__149:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [500 x i32]* %%labels, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_245_count);
  llvm_cbe_tmp__80 = (signed int *)(&llvm_cbe_labels[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 500
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32 @read_labels(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0), i32* %%6), !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_246_count);
  llvm_cbe_tmp__81 = (unsigned int )read_labels(( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), (signed int *)llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__81);
}
  if (((llvm_cbe_tmp__81&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe_tmp__152;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__82 = (float *)(&llvm_cbe_prediction[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [28 x [28 x float]]* %%norm_img, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__83 = (float (*)[28])(&llvm_cbe_norm_img[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__84__PHI_TEMPORARY = (double )0x0p0;   /* for PHI node */
  llvm_cbe_tmp__85__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__153;

llvm_cbe_tmp__152:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts2 = call i32 @puts(i8* getelementptr inbounds ([43 x i8]* @aesl_internal_str1, i64 0, i64 0)), !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts2_count);
  puts(( char *)((&aesl_internal_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 43
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts2 = 0x%X",llvm_cbe_puts2);
}
  llvm_cbe_tmp__148__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__151;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__153:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge6 = phi i32 [ 0, %%.preheader ], [ %%72, %%66  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge6_count);
  llvm_cbe_storemerge6 = (unsigned int )llvm_cbe_storemerge6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge6 = 0x%X",llvm_cbe_storemerge6);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__139);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = phi double [ 0.000000e+00, %%.preheader ], [ %%71, %%66  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__84 = (double )llvm_cbe_tmp__84__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %lf",llvm_cbe_tmp__84);
printf("\n = %lf",0x0p0);
printf("\n = %lf",llvm_cbe_tmp__138);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = phi i32 [ 0, %%.preheader ], [ %%67, %%66  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__85 = (unsigned int )llvm_cbe_tmp__85__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__85);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__134);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = call i32 @clock() nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__86 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__86);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i32 %%storemerge6 to i64, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__87 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge6);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [500 x [28 x [28 x float]]]* %%images, i64 0, i64 %%16, i64 0, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__88 = (float (*)[28])(&llvm_cbe_images[(((signed long long )llvm_cbe_tmp__87))
#ifdef AESL_BC_SIM
 % 500
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__87));
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @cnn([28 x float]* %%17, float* %%9) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_266_count);
  cnn(llvm_cbe_tmp__88, (float *)llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = call i32 @clock() nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__89 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = call i32 @get_max_prediction(float* %%9), !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__90 = (unsigned int )get_max_prediction((float *)llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [500 x i32]* %%labels, i64 0, i64 %%16, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_271_count);
  llvm_cbe_tmp__91 = (signed int *)(&llvm_cbe_labels[(((signed long long )llvm_cbe_tmp__87))
#ifdef AESL_BC_SIM
 % 500
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__87));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__87) < 500)) fprintf(stderr, "%s:%d: warning: Read access out of array 'labels' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i32* %%20, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__92 = (unsigned int )*llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
  if (((llvm_cbe_tmp__90&4294967295U) == (llvm_cbe_tmp__92&4294967295U))) {
    goto llvm_cbe_tmp__154;
  } else {
    goto llvm_cbe_tmp__155;
  }

llvm_cbe_tmp__156:
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = phi i32 [ %%14, %%25 ], [ %%24, %%23  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_379_count);
  llvm_cbe_tmp__134 = (unsigned int )llvm_cbe_tmp__134__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__134);
printf("\n = 0x%X",llvm_cbe_tmp__85);
printf("\n = 0x%X",llvm_cbe_tmp__93);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = sub nsw i32 %%18, %%15, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_380_count);
  llvm_cbe_tmp__135 = (unsigned int )((unsigned int )(llvm_cbe_tmp__89&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__86&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__135&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = sitofp i32 %%68 to double, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_381_count);
  llvm_cbe_tmp__136 = (double )((double )(signed int )llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__136, *(long long*)(&llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fdiv double %%69, 1.000000e+03, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_382_count);
  llvm_cbe_tmp__137 = (double )llvm_cbe_tmp__136 / 0x1.f4p9;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__137, *(long long*)(&llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = fadd double %%13, %%70, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__138 = (double )llvm_cbe_tmp__84 + llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__138, *(long long*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = add nsw i32 %%storemerge6, 1, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__139 = (unsigned int )((unsigned int )(llvm_cbe_storemerge6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__139&4294967295ull)));
  if (((llvm_cbe_tmp__139&4294967295U) == (500u&4294967295U))) {
    goto llvm_cbe_tmp__157;
  } else {
    llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__139;   /* for PHI node */
    llvm_cbe_tmp__84__PHI_TEMPORARY = (double )llvm_cbe_tmp__138;   /* for PHI node */
    llvm_cbe_tmp__85__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__134;   /* for PHI node */
    goto llvm_cbe_tmp__153;
  }

llvm_cbe_tmp__154:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add nsw i32 %%14, 1, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__93 = (unsigned int )((unsigned int )(llvm_cbe_tmp__85&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__93&4294967295ull)));
  llvm_cbe_tmp__134__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__93;   /* for PHI node */
  goto llvm_cbe_tmp__156;

llvm_cbe_tmp__155:
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 %%21) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_280_count);
  printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 15
#endif
])), llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__92);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__94);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @normalization([28 x float]* %%17, [28 x float]* %%10) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_282_count);
  normalization(llvm_cbe_tmp__88, llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @print_img([28 x float]* %%10) nounwind, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_283_count);
  print_img(llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts3 = call i32 @puts(i8* getelementptr inbounds ([12 x i8]* @aesl_internal_str2, i64 0, i64 0)), !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts3_count);
  puts(( char *)((&aesl_internal_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts3 = 0x%X",llvm_cbe_puts3);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load float* %%9, align 16, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_289_count);
  llvm_cbe_tmp__95 = (float )*llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__95, *(int*)(&llvm_cbe_tmp__95));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = fpext float %%27 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__96 = (double )((double )llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__96, *(long long*)(&llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 0, double %%28) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_291_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 0u, llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__96, *(long long*)(&llvm_cbe_tmp__96));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__97);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 1, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__98 = (float *)(&llvm_cbe_prediction[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load float* %%30, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_298_count);
  llvm_cbe_tmp__99 = (float )*llvm_cbe_tmp__98;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__99, *(int*)(&llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fpext float %%31 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__100 = (double )((double )llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__100, *(long long*)(&llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 1, double %%32) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_300_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 1u, llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__100, *(long long*)(&llvm_cbe_tmp__100));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__101);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 2, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__102 = (float *)(&llvm_cbe_prediction[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load float* %%34, align 8, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__103 = (float )*llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__103, *(int*)(&llvm_cbe_tmp__103));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = fpext float %%35 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__104 = (double )((double )llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__104, *(long long*)(&llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 2, double %%36) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_309_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 2u, llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__104, *(long long*)(&llvm_cbe_tmp__104));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__105);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 3, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__106 = (float *)(&llvm_cbe_prediction[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load float* %%38, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__107 = (float )*llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__107, *(int*)(&llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = fpext float %%39 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__108 = (double )((double )llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__108, *(long long*)(&llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 3, double %%40) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_318_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 3u, llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__108, *(long long*)(&llvm_cbe_tmp__108));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__109);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_324_count);
  llvm_cbe_tmp__110 = (float *)(&llvm_cbe_prediction[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 16, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__111 = (float )*llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__111, *(int*)(&llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = fpext float %%43 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__112 = (double )((double )llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__112, *(long long*)(&llvm_cbe_tmp__112));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 4, double %%44) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_327_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 4u, llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",4u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__112, *(long long*)(&llvm_cbe_tmp__112));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__113);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 5, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_333_count);
  llvm_cbe_tmp__114 = (float *)(&llvm_cbe_prediction[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load float* %%46, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_334_count);
  llvm_cbe_tmp__115 = (float )*llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__115, *(int*)(&llvm_cbe_tmp__115));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = fpext float %%47 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__116 = (double )((double )llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__116, *(long long*)(&llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 5, double %%48) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_336_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 5u, llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",5u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__116, *(long long*)(&llvm_cbe_tmp__116));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__117);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 6, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_342_count);
  llvm_cbe_tmp__118 = (float *)(&llvm_cbe_prediction[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load float* %%50, align 8, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_343_count);
  llvm_cbe_tmp__119 = (float )*llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__119, *(int*)(&llvm_cbe_tmp__119));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fpext float %%51 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__120 = (double )((double )llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__120, *(long long*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 6, double %%52) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_345_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 6u, llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",6u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__120, *(long long*)(&llvm_cbe_tmp__120));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__121);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 7, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__122 = (float *)(&llvm_cbe_prediction[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load float* %%54, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__123 = (float )*llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__123, *(int*)(&llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = fpext float %%55 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__124 = (double )((double )llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__124, *(long long*)(&llvm_cbe_tmp__124));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 7, double %%56) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_354_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 7u, llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",7u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__124, *(long long*)(&llvm_cbe_tmp__124));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__125);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 8, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_360_count);
  llvm_cbe_tmp__126 = (float *)(&llvm_cbe_prediction[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load float* %%58, align 16, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_361_count);
  llvm_cbe_tmp__127 = (float )*llvm_cbe_tmp__126;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__127, *(int*)(&llvm_cbe_tmp__127));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = fpext float %%59 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__128 = (double )((double )llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__128, *(long long*)(&llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 8, double %%60) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_363_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 8u, llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",8u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__128, *(long long*)(&llvm_cbe_tmp__128));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__129);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [10 x float]* %%prediction, i64 0, i64 9, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__130 = (float *)(&llvm_cbe_prediction[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'prediction' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* %%62, align 4, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__131 = (float )*llvm_cbe_tmp__130;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__131, *(int*)(&llvm_cbe_tmp__131));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fpext float %%63 to double, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__132 = (double )((double )llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__132, *(long long*)(&llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str9, i64 0, i64 0), i32 9, double %%64) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_372_count);
  printf(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), 9u, llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",9u);
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__132, *(long long*)(&llvm_cbe_tmp__132));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__133);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%putchar = call i32 @putchar(i32 10) nounwind, !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_putchar_count);
  putchar(10u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn putchar = 0x%X",llvm_cbe_putchar);
}
  llvm_cbe_tmp__134__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__85;   /* for PHI node */
  goto llvm_cbe_tmp__156;

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__157:
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = sitofp i32 %%67 to double, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_398_count);
  llvm_cbe_tmp__140 = (double )((double )(signed int )llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__140, *(long long*)(&llvm_cbe_tmp__140));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = fmul double %%74, 1.000000e+02, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_399_count);
  llvm_cbe_tmp__141 = (double )llvm_cbe_tmp__140 * 0x1.9p6;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__141, *(long long*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = fdiv double %%75, 5.000000e+02, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__142 = (double )llvm_cbe_tmp__141 / 0x1.f4p8;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__142, *(long long*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([23 x i8]* @aesl_internal_.str11, i64 0, i64 0), i32 500) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_403_count);
  printf(( char *)((&aesl_internal__OC_str11[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 23
#endif
])), 500u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",500u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__143);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str12, i64 0, i64 0), double %%76) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_404_count);
  printf(( char *)((&aesl_internal__OC_str12[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__142, *(long long*)(&llvm_cbe_tmp__142));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__144);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = fdiv double %%71, 5.000000e+02, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__145 = (double )llvm_cbe_tmp__138 / 0x1.f4p8;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__145, *(long long*)(&llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = fmul double %%79, 1.000000e+03, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__146 = (double )llvm_cbe_tmp__145 * 0x1.f4p9;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__146, *(long long*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([26 x i8]* @aesl_internal_.str13, i64 0, i64 0), double %%80) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_407_count);
  printf(( char *)((&aesl_internal__OC_str13[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 26
#endif
])), llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__146, *(long long*)(&llvm_cbe_tmp__146));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__147);
}
  llvm_cbe_tmp__148__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__151;

llvm_cbe_tmp__151:
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = phi i32 [ 0, %%73 ], [ 1, %%11 ], [ 1, %%4  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__148 = (unsigned int )llvm_cbe_tmp__148__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__148);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",1u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return llvm_cbe_tmp__148;
}

