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
float relu(float llvm_cbe_x);
void soft_max(float *llvm_cbe_dense_array, float *llvm_cbe_pred);


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

float relu(float llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  float llvm_cbe_storemerge;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @relu\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = select i1 %%1, float %%x, float 0.000000e+00, !dbg !3 for 0x%I64xth hint within @relu  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (float )(((llvm_fcmp_ogt(llvm_cbe_x, 0x0p0))) ? ((float )llvm_cbe_x) : ((float )0x0p0));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge = %f,  0x%x\n", llvm_cbe_storemerge, *(int*)(&llvm_cbe_storemerge));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @relu}\n");
  return llvm_cbe_storemerge;
}


void soft_max(float *llvm_cbe_dense_array, float *llvm_cbe_pred) {
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
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  float llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  float llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  float llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  float *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  float llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  float llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  float llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  float *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  float llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  float llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  float *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  float llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  float *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  float llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  float *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  float llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  float llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  float *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  float llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  float llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  float llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  float *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  float llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  float llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  float llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  float *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  float llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  float llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  float *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  float llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  float llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  float llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  float llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  float llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  float *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  float llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  float *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  float llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  float llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  float *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  float llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  float llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  float llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  float *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  float llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  float llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  float *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  float llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  float llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  float llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  float *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  float llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  float llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  float *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  float llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  float llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  float llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  float *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  float llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  float llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  float *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @soft_max\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = load float* %%dense_array, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__1 = (float )*llvm_cbe_dense_array;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__1, *(int*)(&llvm_cbe_tmp__1));
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call float @expf(float %%0) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_19_count);
  llvm_cbe_tmp__2 = (float ) /*tail*/ expf(llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__1, *(int*)(&llvm_cbe_tmp__1));
printf("\nReturn  = %f",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = fadd float %%1, 0.000000e+00, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__3 = (float )((float )(llvm_cbe_tmp__2 + 0x0p0));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__3, *(int*)(&llvm_cbe_tmp__3));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds float* %%dense_array, i64 1, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__4 = (float *)(&llvm_cbe_dense_array[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load float* %%3, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__5 = (float )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__5, *(int*)(&llvm_cbe_tmp__5));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call float @expf(float %%4) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__6 = (float ) /*tail*/ expf(llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__5, *(int*)(&llvm_cbe_tmp__5));
printf("\nReturn  = %f",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = fadd float %%2, %%5, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__7 = (float )((float )(llvm_cbe_tmp__3 + llvm_cbe_tmp__6));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__7, *(int*)(&llvm_cbe_tmp__7));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds float* %%dense_array, i64 2, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__8 = (float *)(&llvm_cbe_dense_array[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__9 = (float )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__9, *(int*)(&llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = tail call float @expf(float %%8) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__10 = (float ) /*tail*/ expf(llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__9, *(int*)(&llvm_cbe_tmp__9));
printf("\nReturn  = %f",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = fadd float %%6, %%9, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__11 = (float )((float )(llvm_cbe_tmp__7 + llvm_cbe_tmp__10));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds float* %%dense_array, i64 3, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__12 = (float *)(&llvm_cbe_dense_array[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* %%11, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__13 = (float )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call float @expf(float %%12) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__14 = (float ) /*tail*/ expf(llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
printf("\nReturn  = %f",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = fadd float %%10, %%13, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__15 = (float )((float )(llvm_cbe_tmp__11 + llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__15, *(int*)(&llvm_cbe_tmp__15));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds float* %%dense_array, i64 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__16 = (float *)(&llvm_cbe_dense_array[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* %%15, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__17 = (float )*llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = tail call float @expf(float %%16) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__18 = (float ) /*tail*/ expf(llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
printf("\nReturn  = %f",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = fadd float %%14, %%17, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__19 = (float )((float )(llvm_cbe_tmp__15 + llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds float* %%dense_array, i64 5, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__20 = (float *)(&llvm_cbe_dense_array[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* %%19, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__21 = (float )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = tail call float @expf(float %%20) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__22 = (float ) /*tail*/ expf(llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
printf("\nReturn  = %f",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = fadd float %%18, %%21, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__23 = (float )((float )(llvm_cbe_tmp__19 + llvm_cbe_tmp__22));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds float* %%dense_array, i64 6, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__24 = (float *)(&llvm_cbe_dense_array[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__25 = (float )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__25, *(int*)(&llvm_cbe_tmp__25));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = tail call float @expf(float %%24) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__26 = (float ) /*tail*/ expf(llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__25, *(int*)(&llvm_cbe_tmp__25));
printf("\nReturn  = %f",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = fadd float %%22, %%25, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__27 = (float )((float )(llvm_cbe_tmp__23 + llvm_cbe_tmp__26));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__27, *(int*)(&llvm_cbe_tmp__27));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds float* %%dense_array, i64 7, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__28 = (float *)(&llvm_cbe_dense_array[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__29 = (float )*llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__29, *(int*)(&llvm_cbe_tmp__29));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = tail call float @expf(float %%28) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__30 = (float ) /*tail*/ expf(llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__29, *(int*)(&llvm_cbe_tmp__29));
printf("\nReturn  = %f",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = fadd float %%26, %%29, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__31 = (float )((float )(llvm_cbe_tmp__27 + llvm_cbe_tmp__30));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__31, *(int*)(&llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds float* %%dense_array, i64 8, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__32 = (float *)(&llvm_cbe_dense_array[(((signed long long )8ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load float* %%31, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__33 = (float )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__33, *(int*)(&llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = tail call float @expf(float %%32) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__34 = (float ) /*tail*/ expf(llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__33, *(int*)(&llvm_cbe_tmp__33));
printf("\nReturn  = %f",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = fadd float %%30, %%33, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__35 = (float )((float )(llvm_cbe_tmp__31 + llvm_cbe_tmp__34));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds float* %%dense_array, i64 9, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__36 = (float *)(&llvm_cbe_dense_array[(((signed long long )9ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* %%35, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__37 = (float )*llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = tail call float @expf(float %%36) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__38 = (float ) /*tail*/ expf(llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
printf("\nReturn  = %f",llvm_cbe_tmp__38);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = fadd float %%34, %%37, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__39 = (float )((float )(llvm_cbe_tmp__35 + llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__39, *(int*)(&llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load float* %%dense_array, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__40 = (float )*llvm_cbe_dense_array;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__40, *(int*)(&llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = tail call float @expf(float %%39) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__41 = (float ) /*tail*/ expf(llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__40, *(int*)(&llvm_cbe_tmp__40));
printf("\nReturn  = %f",llvm_cbe_tmp__41);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = fdiv float %%40, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__42 = (float )((float )(llvm_cbe_tmp__41 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__42, *(int*)(&llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%41, float* %%pred, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_134_count);
  *llvm_cbe_pred = llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* %%3, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__43 = (float )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = tail call float @expf(float %%42) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__44 = (float ) /*tail*/ expf(llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
printf("\nReturn  = %f",llvm_cbe_tmp__44);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = fdiv float %%43, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__45 = (float )((float )(llvm_cbe_tmp__44 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__45, *(int*)(&llvm_cbe_tmp__45));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds float* %%pred, i64 1, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__46 = (float *)(&llvm_cbe_pred[(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%44, float* %%45, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_144_count);
  *llvm_cbe_tmp__46 = llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load float* %%7, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__47 = (float )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = tail call float @expf(float %%46) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__48 = (float ) /*tail*/ expf(llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
printf("\nReturn  = %f",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = fdiv float %%47, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__49 = (float )((float )(llvm_cbe_tmp__48 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds float* %%pred, i64 2, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__50 = (float *)(&llvm_cbe_pred[(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* %%49, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_154_count);
  *llvm_cbe_tmp__50 = llvm_cbe_tmp__49;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* %%11, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__51 = (float )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__51, *(int*)(&llvm_cbe_tmp__51));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = tail call float @expf(float %%50) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__52 = (float ) /*tail*/ expf(llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__51, *(int*)(&llvm_cbe_tmp__51));
printf("\nReturn  = %f",llvm_cbe_tmp__52);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = fdiv float %%51, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__53 = (float )((float )(llvm_cbe_tmp__52 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds float* %%pred, i64 3, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_163_count);
  llvm_cbe_tmp__54 = (float *)(&llvm_cbe_pred[(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%52, float* %%53, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_164_count);
  *llvm_cbe_tmp__54 = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* %%15, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__55 = (float )*llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = tail call float @expf(float %%54) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__56 = (float ) /*tail*/ expf(llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
printf("\nReturn  = %f",llvm_cbe_tmp__56);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = fdiv float %%55, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__57 = (float )((float )(llvm_cbe_tmp__56 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__57, *(int*)(&llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds float* %%pred, i64 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__58 = (float *)(&llvm_cbe_pred[(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%56, float* %%57, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_174_count);
  *llvm_cbe_tmp__58 = llvm_cbe_tmp__57;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load float* %%19, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__59 = (float )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = tail call float @expf(float %%58) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__60 = (float ) /*tail*/ expf(llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
printf("\nReturn  = %f",llvm_cbe_tmp__60);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = fdiv float %%59, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__61 = (float )((float )(llvm_cbe_tmp__60 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds float* %%pred, i64 5, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__62 = (float *)(&llvm_cbe_pred[(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%60, float* %%61, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_184_count);
  *llvm_cbe_tmp__62 = llvm_cbe_tmp__61;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%23, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__63 = (float )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = tail call float @expf(float %%62) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__64 = (float ) /*tail*/ expf(llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
printf("\nReturn  = %f",llvm_cbe_tmp__64);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = fdiv float %%63, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__65 = (float )((float )(llvm_cbe_tmp__64 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds float* %%pred, i64 6, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__66 = (float *)(&llvm_cbe_pred[(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%64, float* %%65, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_194_count);
  *llvm_cbe_tmp__66 = llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* %%27, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__67 = (float )*llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = tail call float @expf(float %%66) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__68 = (float ) /*tail*/ expf(llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
printf("\nReturn  = %f",llvm_cbe_tmp__68);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = fdiv float %%67, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__69 = (float )((float )(llvm_cbe_tmp__68 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__69, *(int*)(&llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds float* %%pred, i64 7, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__70 = (float *)(&llvm_cbe_pred[(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%68, float* %%69, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_204_count);
  *llvm_cbe_tmp__70 = llvm_cbe_tmp__69;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load float* %%31, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__71 = (float )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = tail call float @expf(float %%70) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__72 = (float ) /*tail*/ expf(llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
printf("\nReturn  = %f",llvm_cbe_tmp__72);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = fdiv float %%71, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__73 = (float )((float )(llvm_cbe_tmp__72 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds float* %%pred, i64 8, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__74 = (float *)(&llvm_cbe_pred[(((signed long long )8ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%72, float* %%73, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_214_count);
  *llvm_cbe_tmp__74 = llvm_cbe_tmp__73;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* %%35, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__75 = (float )*llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__75, *(int*)(&llvm_cbe_tmp__75));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = tail call float @expf(float %%74) nounwind, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__76 = (float ) /*tail*/ expf(llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__75, *(int*)(&llvm_cbe_tmp__75));
printf("\nReturn  = %f",llvm_cbe_tmp__76);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = fdiv float %%75, %%38, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__77 = (float )((float )(llvm_cbe_tmp__76 / llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__77, *(int*)(&llvm_cbe_tmp__77));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = getelementptr inbounds float* %%pred, i64 9, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__78 = (float *)(&llvm_cbe_pred[(((signed long long )9ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%76, float* %%77, align 4, !dbg !3 for 0x%I64xth hint within @soft_max  --> \n", ++aesl_llvm_cbe_224_count);
  *llvm_cbe_tmp__78 = llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__77);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @soft_max}\n");
  return;
}

