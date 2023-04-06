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
extern float conv_weights[8][3][3];
extern float conv_biases[8];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void convolutional_layer(float (*llvm_cbe_src)[30], float (*llvm_cbe_dst)[28][28]);
float relu(float );


/* Global Variable Definitions and Initialization */
float conv_weights[8][3][3] = { { { -0x1.8a8d5p-2, -0x1.b2ace8p0, -0x1.dd869ep-1 }, { 0x1.fc9d9ap-3, -0x1.9c4ef4p-1, -0x1.cd4892p0 }, { 0x1.1e773cp1, 0x1.5ca7dap0, -0x1.33e75p0 } }, { { 0x1.4b894cp-1, 0x1.2995e4p0, 0x1.07b4fcp0 }, { -0x1.a7b19p-5, 0x1.228d0ep-1, -0x1.acd10ap-4 }, { -0x1.06297p1, -0x1.71970cp0, -0x1.add038p0 } }, { { 0x1.00b914p-1, 0x1.bf770ap-3, 0x1.9eb846p-4 }, { -0x1.aa854ep-6, 0x1.b72d2ep-4, 0x1.d73e82p-1 }, { 0x1.e08a3p-2, 0x1.aa3be8p-1, -0x1.c8a32ap-2 } }, { { 0x1.895b36p-1, 0x1.0f0abp0, 0x1.b7fc6ep-5 }, { -0x1.19bdb6p-3, 0x1.8c2866p-3, 0x1.e25e04p0 }, { -0x1.5f70e6p0, -0x1.91bc84p0, 0x1.f48304p-3 } }, { { -0x1.62ac4ap0, -0x1.bcf072p0, -0x1.0cd6d4p1 }, { 0x1.dc523cp-3, 0x1.77f658p-3, 0x1.5d8d2ep-1 }, { 0x1.278df2p-2, 0x1.7c71f6p0, 0x1.61df4p-1 } }, { { 0x1.b21a34p-3, -0x1.234bd8p-1, -0x1.47299cp-1 }, { -0x1.ea716cp-2, 0x1.023c82p0, -0x1.544d9ep-3 }, { -0x1.f8a4b6p-4, 0x1.433e12p-4, -0x1.4cf7b2p-3 } }, { { -0x1.9c4a3p-1, -0x1.4da5c8p-3, 0x1.6431c8p0 }, { -0x1.a9cc0ep-1, -0x1.ebcbb8p-1, 0x1.a20812p-4 }, { -0x1.88ea86p-1, -0x1.0c67d4p-1, -0x1.4c7d6p0 } }, { { -0x1.600ebep0, -0x1.f31e3cp-4, 0x1.dee06ap-1 }, { -0x1.ec8f56p0, -0x1.678c24p-4, 0x1.6477f6p0 }, { -0x1.b67b2ap0, 0x1.e8da62p-1, 0x1.276c04p0 } } };
float conv_biases[8] = { -0x1.111fa6p-6, -0x1.fab688p-3, -0x1.a9a9d6p-1, -0x1.f6cb28p-1, -0x1.35b1d8p-5, 0x1.74a3e6p-7, 0x1.0a17cap-1, -0x1.72325ep-2 };
static float aesl_internal_convolutional_layer_OC_linebuf[90];


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

void convolutional_layer(float (*llvm_cbe_src)[30], float (*llvm_cbe_dst)[28][28]) {
  static  unsigned long long aesl_llvm_cbe_out_val_count = 0;
  float llvm_cbe_out_val[8];    /* Address-exposed local */
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
  static  unsigned long long aesl_llvm_cbe_storemerge22_count = 0;
  unsigned int llvm_cbe_storemerge22;
  unsigned int llvm_cbe_storemerge22__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge121_count = 0;
  unsigned int llvm_cbe_storemerge121;
  unsigned int llvm_cbe_storemerge121__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  float *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  float llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge218_count = 0;
  unsigned int llvm_cbe_storemerge218;
  unsigned int llvm_cbe_storemerge218__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  float *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned int llvm_cbe_tmp__12;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge413_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge413_2e_us;
  unsigned int llvm_cbe_storemerge413_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  float llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  float *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge413_count = 0;
  unsigned int llvm_cbe_storemerge413;
  unsigned int llvm_cbe_storemerge413__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  float *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  float llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  float llvm_cbe_tmp__28;
  float llvm_cbe_tmp__28__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  float *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond25_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond26_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_count = 0;
  bool llvm_cbe_or_2e_cond8;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  float *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  float llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  float *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  float *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  float llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  float llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  float *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  float llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  float llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  float *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  float *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  float llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  float llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  float llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  float *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  float *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  float llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  float llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  float llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  float *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  float *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  float llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  float llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  float llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  float *llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  float *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  float llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  float llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  float llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  float llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  float *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  float *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  float llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  float llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  float llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  float llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  float *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond27_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond28_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  float *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  float llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  float llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  float *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  float *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  float llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  float llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  float *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  float *llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  float llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  float llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  float *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  float *llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  float llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  float *llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  float *llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  float llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  float llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  float *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  float *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  float llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  float llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  float *llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  float *llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  float llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  float llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  float *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  float *llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  float llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  float *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  float *llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  float llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  float llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  float *llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  float llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  float llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  float *llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  float llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  float llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  float *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  float llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  float llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  float *llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  float llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  float llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  float *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  float llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  float llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  float *llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  float llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  float llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  float *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  float llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  float llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  float *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  float llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  float llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  float *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  float llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  float llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  float *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  float llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  float llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  float *llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  float llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  float llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  float *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  float llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  float llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  float *llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  float llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  float llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  float *llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  float llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  float llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  float *llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  float llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  float llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  float *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  float llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  float llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  float *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  float *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  float llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  float *llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  float *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  float llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  float llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  float *llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  float *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  float llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  float llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  float *llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  float *llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  float llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  float *llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  float *llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  float llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  float llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  float *llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  float *llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  float llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  float llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  float *llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  float *llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  float llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  float llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  float *llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  float *llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  float llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  float llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  float *llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  float llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  float llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  float *llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  float llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  float llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  float *llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  float llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  float llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  float *llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  float llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  float llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  float *llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  float llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  float llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  float *llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  float llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  float llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  float *llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  float llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  float llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  float *llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  float llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  float llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  float *llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  float llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  float llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  float *llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  float llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  float llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  float *llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  float llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  float llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  float *llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  float llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  float llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  float *llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  float llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  float llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  float *llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  float llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  float llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  float *llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  float llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  float llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @convolutional_layer\n");
  llvm_cbe_storemerge22__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader20;

  do {     /* Syntactic loop '.preheader20' to make GCC happy */
llvm_cbe__2e_preheader20:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge22 = phi i32 [ 0, %%0 ], [ %%109, %%108  for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_storemerge22_count);
  llvm_cbe_storemerge22 = (unsigned int )llvm_cbe_storemerge22__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge22 = 0x%X",llvm_cbe_storemerge22);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__83);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge22 to i64, !dbg !4 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge22);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge22, -3, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__2 = (unsigned int )((unsigned int )(llvm_cbe_storemerge22&4294967295ull)) + ((unsigned int )(4294967293u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__2&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
  llvm_cbe_storemerge121__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__244;

llvm_cbe_tmp__245:
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = add nsw i32 %%storemerge22, 1, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_294_count);
  llvm_cbe_tmp__83 = (unsigned int )((unsigned int )(llvm_cbe_storemerge22&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__83&4294967295ull)));
  if (((llvm_cbe_tmp__83&4294967295U) == (30u&4294967295U))) {
    goto llvm_cbe_tmp__246;
  } else {
    llvm_cbe_storemerge22__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__83;   /* for PHI node */
    goto llvm_cbe__2e_preheader20;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__244:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge121 = phi i32 [ 0, %%.preheader20 ], [ %%107, %%106  for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_storemerge121_count);
  llvm_cbe_storemerge121 = (unsigned int )llvm_cbe_storemerge121__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge121 = 0x%X",llvm_cbe_storemerge121);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__82);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge121 to i64, !dbg !4 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge121);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [30 x float]* %%src, i64 %%1, i64 %%6, !dbg !4 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__5 = (float *)(&llvm_cbe_src[(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 30
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__4) < 30)) fprintf(stderr, "%s:%d: warning: Read access out of array 'src' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !4 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__6 = (float )*llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__6, *(int*)(&llvm_cbe_tmp__6));
  llvm_cbe_storemerge218__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

llvm_cbe_tmp__247:
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = add nsw i32 %%storemerge121, 1, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__82 = (unsigned int )((unsigned int )(llvm_cbe_storemerge121&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__82&4294967295ull)));
  if (((llvm_cbe_tmp__82&4294967295U) == (30u&4294967295U))) {
    goto llvm_cbe_tmp__245;
  } else {
    llvm_cbe_storemerge121__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__82;   /* for PHI node */
    goto llvm_cbe_tmp__244;
  }

llvm_cbe_tmp__248:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8 = and i1 %%2, %%57, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_or_2e_cond8_count);
  llvm_cbe_or_2e_cond8 = (bool )(((((signed int )llvm_cbe_storemerge22) > ((signed int )2u)) & (((signed int )llvm_cbe_storemerge121) < ((signed int )28u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8 = 0x%X\n", llvm_cbe_or_2e_cond8);
  if (llvm_cbe_or_2e_cond8) {
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe_tmp__247;
  }

  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge218 = phi i32 [ 0, %%5 ], [ %%55, %%.us-lcssa14.us  for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_storemerge218_count);
  llvm_cbe_storemerge218 = (unsigned int )llvm_cbe_storemerge218__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge218 = 0x%X",llvm_cbe_storemerge218);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = mul nsw i32 %%storemerge218, 30, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(llvm_cbe_storemerge218&4294967295ull)) * ((unsigned int )(30u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__7&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%storemerge218 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__8 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge218);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%10, -1, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_tmp__7&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [90 x float]* @aesl_internal_convolutional_layer.linebuf, i64 0, i64 %%14, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__11 = (float *)(&aesl_internal_convolutional_layer_OC_linebuf[(((signed long long )llvm_cbe_tmp__10))
#ifdef AESL_BC_SIM
 % 90
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
  if ((((signed int )llvm_cbe_storemerge218) < ((signed int )2u))) {
    llvm_cbe_storemerge413_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader12_2e_split_2e_us;
  } else {
    llvm_cbe_storemerge413__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader12_2e__2e_preheader12_2e_split_crit_edge;
  }

llvm_cbe__2e_us_2d_lcssa14_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = add nsw i32 %%storemerge218, 1, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__33 = (unsigned int )((unsigned int )(llvm_cbe_storemerge218&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__33&4294967295ull)));
  if (((llvm_cbe_tmp__33&4294967295U) == (3u&4294967295U))) {
    goto llvm_cbe_tmp__248;
  } else {
    llvm_cbe_storemerge218__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__33;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '.preheader12.split.us' to make GCC happy */
llvm_cbe__2e_preheader12_2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge413.us = phi i32 [ %%17, %%16 ], [ 0, %%.preheader12  for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_storemerge413_2e_us_count);
  llvm_cbe_storemerge413_2e_us = (unsigned int )llvm_cbe_storemerge413_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge413.us = 0x%X",llvm_cbe_storemerge413_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__12);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add nsw i32 %%storemerge413.us, %%10, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__13 = (unsigned int )((unsigned int )(llvm_cbe_storemerge413_2e_us&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__7&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__13&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = sext i32 %%22 to i64, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__14 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [90 x float]* @aesl_internal_convolutional_layer.linebuf, i64 0, i64 %%23, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__15 = (float *)(&aesl_internal_convolutional_layer_OC_linebuf[(((signed long long )llvm_cbe_tmp__14))
#ifdef AESL_BC_SIM
 % 90
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__14) < 90)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_convolutional_layer.linebuf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load float* %%24, align 4, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__16 = (float )*llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__16, *(int*)(&llvm_cbe_tmp__16));
  if ((((signed int )llvm_cbe_storemerge413_2e_us) < ((signed int )3u))) {
    goto llvm_cbe__2e_preheader10_2e_us;
  } else {
    goto llvm_cbe__2e_thread6_2e_us;
  }

llvm_cbe_tmp__249:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge413.us, 1, !dbg !9 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge413_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
  if (((llvm_cbe_tmp__12&4294967295U) == (30u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa14_2e_us;
  } else {
    llvm_cbe_storemerge413_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__12;   /* for PHI node */
    goto llvm_cbe__2e_preheader12_2e_split_2e_us;
  }

llvm_cbe_tmp__250:
  goto llvm_cbe_tmp__249;

llvm_cbe_tmp__251:
  if ((((signed int )llvm_cbe_storemerge218) > ((signed int )0u))) {
    goto llvm_cbe_tmp__252;
  } else {
    goto llvm_cbe_tmp__250;
  }

llvm_cbe_tmp__253:
  if ((((signed int )llvm_cbe_storemerge413_2e_us) > ((signed int )0u))) {
    goto llvm_cbe__2e_thread6_2e_us;
  } else {
    goto llvm_cbe_tmp__251;
  }

llvm_cbe__2e_us_2d_lcssa_2e_us_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 0, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__84 = (float *)(&conv_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = load float* %%111, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__85 = (float )*llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__85, *(int*)(&llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = fmul float %%25, %%112, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__86 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__86, *(int*)(&llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__87 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%113, float* %%114, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_307_count);
  *llvm_cbe_tmp__87 = llvm_cbe_tmp__86;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 1, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__88 = (float *)(&conv_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = load float* %%115, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__89 = (float )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__89, *(int*)(&llvm_cbe_tmp__89));
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = fmul float %%25, %%116, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__90 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__89));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__90, *(int*)(&llvm_cbe_tmp__90));
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 1, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__91 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%117, float* %%118, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_319_count);
  *llvm_cbe_tmp__91 = llvm_cbe_tmp__90;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 2, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_327_count);
  llvm_cbe_tmp__92 = (float *)(&conv_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = load float* %%119, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_328_count);
  llvm_cbe_tmp__93 = (float )*llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__93, *(int*)(&llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = fmul float %%25, %%120, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_329_count);
  llvm_cbe_tmp__94 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__94, *(int*)(&llvm_cbe_tmp__94));
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 2, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_330_count);
  llvm_cbe_tmp__95 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%121, float* %%122, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_331_count);
  *llvm_cbe_tmp__95 = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 3, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__96 = (float *)(&conv_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = load float* %%123, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__97 = (float )*llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__97, *(int*)(&llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = fmul float %%25, %%124, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__98 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__98, *(int*)(&llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 3, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_342_count);
  llvm_cbe_tmp__99 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%125, float* %%126, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_343_count);
  *llvm_cbe_tmp__99 = llvm_cbe_tmp__98;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 4, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__100 = (float *)(&conv_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = load float* %%127, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__101 = (float )*llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__101, *(int*)(&llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = fmul float %%25, %%128, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__102 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__102, *(int*)(&llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_354_count);
  llvm_cbe_tmp__103 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%129, float* %%130, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_355_count);
  *llvm_cbe_tmp__103 = llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 5, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__104 = (float *)(&conv_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = load float* %%131, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__105 = (float )*llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__105, *(int*)(&llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = fmul float %%25, %%132, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__106 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__106, *(int*)(&llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 5, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__107 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%133, float* %%134, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_367_count);
  *llvm_cbe_tmp__107 = llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 6, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_375_count);
  llvm_cbe_tmp__108 = (float *)(&conv_weights[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = load float* %%135, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_376_count);
  llvm_cbe_tmp__109 = (float )*llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__109, *(int*)(&llvm_cbe_tmp__109));
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = fmul float %%25, %%136, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__110 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__109));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__110, *(int*)(&llvm_cbe_tmp__110));
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 6, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__111 = (float *)(&llvm_cbe_out_val[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%137, float* %%138, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_379_count);
  *llvm_cbe_tmp__111 = llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 7, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__112 = (float *)(&conv_weights[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = load float* %%139, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_388_count);
  llvm_cbe_tmp__113 = (float )*llvm_cbe_tmp__112;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__113, *(int*)(&llvm_cbe_tmp__113));
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = fmul float %%25, %%140, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__114 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__113));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 7, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__115 = (float *)(&llvm_cbe_out_val[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%141, float* %%142, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_391_count);
  *llvm_cbe_tmp__115 = llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__114);
  goto llvm_cbe_tmp__253;

llvm_cbe__2e_preheader10_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = or i32 %%storemerge413.us, %%storemerge218, !dbg !7 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__20 = (unsigned int )llvm_cbe_storemerge413_2e_us | llvm_cbe_storemerge218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%storemerge413.us to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__21 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge413_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__21);
  if (((llvm_cbe_tmp__20&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us_2e_us;
  } else {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us17;
  }

llvm_cbe__2e_us_2d_lcssa_2e_us17:
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 0, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__116 = (float *)(&conv_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = load float* %%143, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_401_count);
  llvm_cbe_tmp__117 = (float )*llvm_cbe_tmp__116;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = fmul float %%25, %%144, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__118 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__118, *(int*)(&llvm_cbe_tmp__118));
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_403_count);
  llvm_cbe_tmp__119 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = load float* %%146, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__120 = (float )*llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__120, *(int*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = fadd float %%147, %%145, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__121 = (float )((float )(llvm_cbe_tmp__120 + llvm_cbe_tmp__118));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__121, *(int*)(&llvm_cbe_tmp__121));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%148, float* %%146, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_406_count);
  *llvm_cbe_tmp__119 = llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 1, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__122 = (float *)(&conv_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = load float* %%149, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_415_count);
  llvm_cbe_tmp__123 = (float )*llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__123, *(int*)(&llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = fmul float %%25, %%150, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__124 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__124, *(int*)(&llvm_cbe_tmp__124));
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 1, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_417_count);
  llvm_cbe_tmp__125 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = load float* %%152, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__126 = (float )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__126, *(int*)(&llvm_cbe_tmp__126));
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = fadd float %%153, %%151, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__127 = (float )((float )(llvm_cbe_tmp__126 + llvm_cbe_tmp__124));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__127, *(int*)(&llvm_cbe_tmp__127));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%154, float* %%152, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_420_count);
  *llvm_cbe_tmp__125 = llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 2, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__128 = (float *)(&conv_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = load float* %%155, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__129 = (float )*llvm_cbe_tmp__128;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__129, *(int*)(&llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = fmul float %%25, %%156, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__130 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__130, *(int*)(&llvm_cbe_tmp__130));
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 2, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_431_count);
  llvm_cbe_tmp__131 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = load float* %%158, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_432_count);
  llvm_cbe_tmp__132 = (float )*llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__132, *(int*)(&llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = fadd float %%159, %%157, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__133 = (float )((float )(llvm_cbe_tmp__132 + llvm_cbe_tmp__130));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__133, *(int*)(&llvm_cbe_tmp__133));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%160, float* %%158, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_434_count);
  *llvm_cbe_tmp__131 = llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 3, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__134 = (float *)(&conv_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = load float* %%161, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_443_count);
  llvm_cbe_tmp__135 = (float )*llvm_cbe_tmp__134;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__135, *(int*)(&llvm_cbe_tmp__135));
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = fmul float %%25, %%162, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_444_count);
  llvm_cbe_tmp__136 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__135));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__136, *(int*)(&llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 3, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_445_count);
  llvm_cbe_tmp__137 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = load float* %%164, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_446_count);
  llvm_cbe_tmp__138 = (float )*llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__138, *(int*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = fadd float %%165, %%163, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__139 = (float )((float )(llvm_cbe_tmp__138 + llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__139, *(int*)(&llvm_cbe_tmp__139));

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%166, float* %%164, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_448_count);
  *llvm_cbe_tmp__137 = llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 4, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_456_count);
  llvm_cbe_tmp__140 = (float *)(&conv_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = load float* %%167, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_457_count);
  llvm_cbe_tmp__141 = (float )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__141, *(int*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = fmul float %%25, %%168, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_458_count);
  llvm_cbe_tmp__142 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__142, *(int*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_459_count);
  llvm_cbe_tmp__143 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = load float* %%170, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__144 = (float )*llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__144, *(int*)(&llvm_cbe_tmp__144));
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = fadd float %%171, %%169, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_461_count);
  llvm_cbe_tmp__145 = (float )((float )(llvm_cbe_tmp__144 + llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__145, *(int*)(&llvm_cbe_tmp__145));

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%172, float* %%170, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_462_count);
  *llvm_cbe_tmp__143 = llvm_cbe_tmp__145;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 5, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_470_count);
  llvm_cbe_tmp__146 = (float *)(&conv_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = load float* %%173, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__147 = (float )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__147, *(int*)(&llvm_cbe_tmp__147));
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = fmul float %%25, %%174, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__148 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__147));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__148, *(int*)(&llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 5, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_473_count);
  llvm_cbe_tmp__149 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%177 = load float* %%176, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__150 = (float )*llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__150, *(int*)(&llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = fadd float %%177, %%175, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__151 = (float )((float )(llvm_cbe_tmp__150 + llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__151, *(int*)(&llvm_cbe_tmp__151));

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%178, float* %%176, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_476_count);
  *llvm_cbe_tmp__149 = llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 6, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__152 = (float *)(&conv_weights[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = load float* %%179, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__153 = (float )*llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__153, *(int*)(&llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = fmul float %%25, %%180, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_486_count);
  llvm_cbe_tmp__154 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__154, *(int*)(&llvm_cbe_tmp__154));
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 6, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_487_count);
  llvm_cbe_tmp__155 = (float *)(&llvm_cbe_out_val[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = load float* %%182, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_488_count);
  llvm_cbe_tmp__156 = (float )*llvm_cbe_tmp__155;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__156, *(int*)(&llvm_cbe_tmp__156));
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = fadd float %%183, %%181, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_489_count);
  llvm_cbe_tmp__157 = (float )((float )(llvm_cbe_tmp__156 + llvm_cbe_tmp__154));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__157, *(int*)(&llvm_cbe_tmp__157));

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%184, float* %%182, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_490_count);
  *llvm_cbe_tmp__155 = llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 7, i64 %%11, i64 %%33, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_498_count);
  llvm_cbe_tmp__158 = (float *)(&conv_weights[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = load float* %%185, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_499_count);
  llvm_cbe_tmp__159 = (float )*llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__159, *(int*)(&llvm_cbe_tmp__159));
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = fmul float %%25, %%186, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_500_count);
  llvm_cbe_tmp__160 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__159));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__160, *(int*)(&llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 7, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_501_count);
  llvm_cbe_tmp__161 = (float *)(&llvm_cbe_out_val[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = load float* %%188, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_502_count);
  llvm_cbe_tmp__162 = (float )*llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = fadd float %%189, %%187, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_503_count);
  llvm_cbe_tmp__163 = (float )((float )(llvm_cbe_tmp__162 + llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__163, *(int*)(&llvm_cbe_tmp__163));

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%190, float* %%188, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_504_count);
  *llvm_cbe_tmp__161 = llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__163);
  goto llvm_cbe_tmp__253;

llvm_cbe_tmp__252:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__10) < 90 && "Write access out of array 'aesl_internal_convolutional_layer.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%25, float* %%15, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_91_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__16);
  goto llvm_cbe_tmp__250;

llvm_cbe__2e_thread6_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add i32 %%13, %%storemerge413.us, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__17 = (unsigned int )((unsigned int )(llvm_cbe_tmp__9&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge413_2e_us&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__17&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sext i32 %%28 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__18 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [90 x float]* @aesl_internal_convolutional_layer.linebuf, i64 0, i64 %%29, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__19 = (float *)(&aesl_internal_convolutional_layer_OC_linebuf[(((signed long long )llvm_cbe_tmp__18))
#ifdef AESL_BC_SIM
 % 90
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__18) < 90 && "Write access out of array 'aesl_internal_convolutional_layer.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%25, float* %%30, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_96_count);
  *llvm_cbe_tmp__19 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__16);
  goto llvm_cbe_tmp__249;

  } while (1); /* end of syntactic loop '.preheader12.split.us' */
  do {     /* Syntactic loop '.preheader12..preheader12.split_crit_edge' to make GCC happy */
llvm_cbe__2e_preheader12_2e__2e_preheader12_2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge413 = phi i32 [ %%54, %%53 ], [ 0, %%.preheader12  for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_storemerge413_count);
  llvm_cbe_storemerge413 = (unsigned int )llvm_cbe_storemerge413__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge413 = 0x%X",llvm_cbe_storemerge413);
printf("\n = 0x%X",llvm_cbe_tmp__32);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge413) < ((signed int )29u))) {
    goto llvm_cbe_tmp__254;
  } else {
    llvm_cbe_tmp__28__PHI_TEMPORARY = (float )llvm_cbe_tmp__6;   /* for PHI node */
    goto llvm_cbe__2e_thread6;
  }

llvm_cbe_tmp__255:
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = add nsw i32 %%storemerge413, 1, !dbg !9 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(llvm_cbe_storemerge413&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__32&4294967295ull)));
  if (((llvm_cbe_tmp__32&4294967295U) == (30u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa14_2e_us;
  } else {
    llvm_cbe_storemerge413__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__32;   /* for PHI node */
    goto llvm_cbe__2e_preheader12_2e__2e_preheader12_2e_split_crit_edge;
  }

llvm_cbe__2e_thread6:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = phi float [ %%39, %%44 ], [ %%39, %%35 ], [ %%8, %%.preheader12..preheader12.split_crit_edge  for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_138_count);
  llvm_cbe_tmp__28 = (float )llvm_cbe_tmp__28__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__28);
printf("\n = %f",llvm_cbe_tmp__25);
printf("\n = %f",llvm_cbe_tmp__25);
printf("\n = %f",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add i32 %%13, %%storemerge413, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__29 = (unsigned int )((unsigned int )(llvm_cbe_tmp__9&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge413&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__29&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = sext i32 %%47 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__30 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [90 x float]* @aesl_internal_convolutional_layer.linebuf, i64 0, i64 %%48, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__31 = (float *)(&aesl_internal_convolutional_layer_OC_linebuf[(((signed long long )llvm_cbe_tmp__30))
#ifdef AESL_BC_SIM
 % 90
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__30));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__30) < 90 && "Write access out of array 'aesl_internal_convolutional_layer.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%46, float* %%49, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_142_count);
  *llvm_cbe_tmp__31 = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__28);
  goto llvm_cbe_tmp__255;

llvm_cbe_tmp__254:
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add nsw i32 %%storemerge413, %%10, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__22 = (unsigned int )((unsigned int )(llvm_cbe_storemerge413&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__7&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__22&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = sext i32 %%36 to i64, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__23 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [90 x float]* @aesl_internal_convolutional_layer.linebuf, i64 0, i64 %%37, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__24 = (float *)(&aesl_internal_convolutional_layer_OC_linebuf[(((signed long long )llvm_cbe_tmp__23))
#ifdef AESL_BC_SIM
 % 90
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__23) < 90)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_convolutional_layer.linebuf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load float* %%38, align 4, !dbg !6 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__25 = (float )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__25, *(int*)(&llvm_cbe_tmp__25));
  if ((((signed int )llvm_cbe_storemerge413) < ((signed int )3u))) {
    goto llvm_cbe__2e_preheader10;
  } else {
    llvm_cbe_tmp__28__PHI_TEMPORARY = (float )llvm_cbe_tmp__25;   /* for PHI node */
    goto llvm_cbe__2e_thread6;
  }

llvm_cbe_tmp__256:
  if ((((signed int )llvm_cbe_storemerge413) > ((signed int )0u))) {
    llvm_cbe_tmp__28__PHI_TEMPORARY = (float )llvm_cbe_tmp__25;   /* for PHI node */
    goto llvm_cbe__2e_thread6;
  } else {
    goto llvm_cbe_tmp__257;
  }

llvm_cbe__2e_us_2d_lcssa_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 0, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_513_count);
  llvm_cbe_tmp__164 = (float *)(&conv_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = load float* %%191, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__165 = (float )*llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__165, *(int*)(&llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = fmul float %%39, %%192, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_515_count);
  llvm_cbe_tmp__166 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__166, *(int*)(&llvm_cbe_tmp__166));
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_516_count);
  llvm_cbe_tmp__167 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%193, float* %%194, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_517_count);
  *llvm_cbe_tmp__167 = llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 1, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__168 = (float *)(&conv_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%196 = load float* %%195, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__169 = (float )*llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = fmul float %%39, %%196, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__170 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__170, *(int*)(&llvm_cbe_tmp__170));
if (AESL_DEBUG_TRACE)
printf("\n  %%198 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 1, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_528_count);
  llvm_cbe_tmp__171 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%197, float* %%198, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_529_count);
  *llvm_cbe_tmp__171 = llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  %%199 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 2, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__172 = (float *)(&conv_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%200 = load float* %%199, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__173 = (float )*llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__173, *(int*)(&llvm_cbe_tmp__173));
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = fmul float %%39, %%200, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_539_count);
  llvm_cbe_tmp__174 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__173));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__174, *(int*)(&llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 2, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__175 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%201, float* %%202, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_541_count);
  *llvm_cbe_tmp__175 = llvm_cbe_tmp__174;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 3, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__176 = (float *)(&conv_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = load float* %%203, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_550_count);
  llvm_cbe_tmp__177 = (float )*llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__177, *(int*)(&llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = fmul float %%39, %%204, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_551_count);
  llvm_cbe_tmp__178 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__178, *(int*)(&llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 3, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_552_count);
  llvm_cbe_tmp__179 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%205, float* %%206, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_553_count);
  *llvm_cbe_tmp__179 = llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%207 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 4, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_561_count);
  llvm_cbe_tmp__180 = (float *)(&conv_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = load float* %%207, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_562_count);
  llvm_cbe_tmp__181 = (float )*llvm_cbe_tmp__180;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__181, *(int*)(&llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = fmul float %%39, %%208, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_563_count);
  llvm_cbe_tmp__182 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__182, *(int*)(&llvm_cbe_tmp__182));
if (AESL_DEBUG_TRACE)
printf("\n  %%210 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_564_count);
  llvm_cbe_tmp__183 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%209, float* %%210, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_565_count);
  *llvm_cbe_tmp__183 = llvm_cbe_tmp__182;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%211 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 5, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_573_count);
  llvm_cbe_tmp__184 = (float *)(&conv_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%212 = load float* %%211, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_574_count);
  llvm_cbe_tmp__185 = (float )*llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__185, *(int*)(&llvm_cbe_tmp__185));
if (AESL_DEBUG_TRACE)
printf("\n  %%213 = fmul float %%39, %%212, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__186 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__185));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__186, *(int*)(&llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 5, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__187 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%213, float* %%214, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_577_count);
  *llvm_cbe_tmp__187 = llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 6, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_585_count);
  llvm_cbe_tmp__188 = (float *)(&conv_weights[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = load float* %%215, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_586_count);
  llvm_cbe_tmp__189 = (float )*llvm_cbe_tmp__188;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__189, *(int*)(&llvm_cbe_tmp__189));
if (AESL_DEBUG_TRACE)
printf("\n  %%217 = fmul float %%39, %%216, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_587_count);
  llvm_cbe_tmp__190 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__189));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__190, *(int*)(&llvm_cbe_tmp__190));
if (AESL_DEBUG_TRACE)
printf("\n  %%218 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 6, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_588_count);
  llvm_cbe_tmp__191 = (float *)(&llvm_cbe_out_val[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%217, float* %%218, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_589_count);
  *llvm_cbe_tmp__191 = llvm_cbe_tmp__190;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%219 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 7, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_597_count);
  llvm_cbe_tmp__192 = (float *)(&conv_weights[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = load float* %%219, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_598_count);
  llvm_cbe_tmp__193 = (float )*llvm_cbe_tmp__192;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__193, *(int*)(&llvm_cbe_tmp__193));
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = fmul float %%39, %%220, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_599_count);
  llvm_cbe_tmp__194 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__193));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__194, *(int*)(&llvm_cbe_tmp__194));
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 7, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_600_count);
  llvm_cbe_tmp__195 = (float *)(&llvm_cbe_out_val[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%221, float* %%222, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_601_count);
  *llvm_cbe_tmp__195 = llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__194);
  goto llvm_cbe_tmp__256;

llvm_cbe__2e_preheader10:
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = or i32 %%storemerge413, %%storemerge218, !dbg !7 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__26 = (unsigned int )llvm_cbe_storemerge413 | llvm_cbe_storemerge218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = sext i32 %%storemerge413 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__27 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge413);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__27);
  if (((llvm_cbe_tmp__26&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    goto llvm_cbe__2e_us_2d_lcssa;
  }

llvm_cbe__2e_us_2d_lcssa:
if (AESL_DEBUG_TRACE)
printf("\n  %%223 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 0, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_610_count);
  llvm_cbe_tmp__196 = (float *)(&conv_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = load float* %%223, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__197 = (float )*llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__197, *(int*)(&llvm_cbe_tmp__197));
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = fmul float %%39, %%224, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__198 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__197));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__198, *(int*)(&llvm_cbe_tmp__198));
if (AESL_DEBUG_TRACE)
printf("\n  %%226 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_613_count);
  llvm_cbe_tmp__199 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%227 = load float* %%226, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_614_count);
  llvm_cbe_tmp__200 = (float )*llvm_cbe_tmp__199;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__200, *(int*)(&llvm_cbe_tmp__200));
if (AESL_DEBUG_TRACE)
printf("\n  %%228 = fadd float %%227, %%225, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_615_count);
  llvm_cbe_tmp__201 = (float )((float )(llvm_cbe_tmp__200 + llvm_cbe_tmp__198));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__201, *(int*)(&llvm_cbe_tmp__201));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%228, float* %%226, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_616_count);
  *llvm_cbe_tmp__199 = llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%229 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 1, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_624_count);
  llvm_cbe_tmp__202 = (float *)(&conv_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%230 = load float* %%229, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_625_count);
  llvm_cbe_tmp__203 = (float )*llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__203, *(int*)(&llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n  %%231 = fmul float %%39, %%230, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_626_count);
  llvm_cbe_tmp__204 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__204, *(int*)(&llvm_cbe_tmp__204));
if (AESL_DEBUG_TRACE)
printf("\n  %%232 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 1, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_627_count);
  llvm_cbe_tmp__205 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%233 = load float* %%232, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_628_count);
  llvm_cbe_tmp__206 = (float )*llvm_cbe_tmp__205;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__206, *(int*)(&llvm_cbe_tmp__206));
if (AESL_DEBUG_TRACE)
printf("\n  %%234 = fadd float %%233, %%231, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_629_count);
  llvm_cbe_tmp__207 = (float )((float )(llvm_cbe_tmp__206 + llvm_cbe_tmp__204));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__207, *(int*)(&llvm_cbe_tmp__207));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%234, float* %%232, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_630_count);
  *llvm_cbe_tmp__205 = llvm_cbe_tmp__207;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%235 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 2, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_638_count);
  llvm_cbe_tmp__208 = (float *)(&conv_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%236 = load float* %%235, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_639_count);
  llvm_cbe_tmp__209 = (float )*llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__209, *(int*)(&llvm_cbe_tmp__209));
if (AESL_DEBUG_TRACE)
printf("\n  %%237 = fmul float %%39, %%236, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_640_count);
  llvm_cbe_tmp__210 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__209));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__210, *(int*)(&llvm_cbe_tmp__210));
if (AESL_DEBUG_TRACE)
printf("\n  %%238 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 2, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_641_count);
  llvm_cbe_tmp__211 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%239 = load float* %%238, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_642_count);
  llvm_cbe_tmp__212 = (float )*llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__212, *(int*)(&llvm_cbe_tmp__212));
if (AESL_DEBUG_TRACE)
printf("\n  %%240 = fadd float %%239, %%237, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_643_count);
  llvm_cbe_tmp__213 = (float )((float )(llvm_cbe_tmp__212 + llvm_cbe_tmp__210));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__213, *(int*)(&llvm_cbe_tmp__213));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%240, float* %%238, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_644_count);
  *llvm_cbe_tmp__211 = llvm_cbe_tmp__213;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%241 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 3, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_652_count);
  llvm_cbe_tmp__214 = (float *)(&conv_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%242 = load float* %%241, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__215 = (float )*llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__215, *(int*)(&llvm_cbe_tmp__215));
if (AESL_DEBUG_TRACE)
printf("\n  %%243 = fmul float %%39, %%242, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__216 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__215));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__216, *(int*)(&llvm_cbe_tmp__216));
if (AESL_DEBUG_TRACE)
printf("\n  %%244 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 3, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_655_count);
  llvm_cbe_tmp__217 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%245 = load float* %%244, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_656_count);
  llvm_cbe_tmp__218 = (float )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__218, *(int*)(&llvm_cbe_tmp__218));
if (AESL_DEBUG_TRACE)
printf("\n  %%246 = fadd float %%245, %%243, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_657_count);
  llvm_cbe_tmp__219 = (float )((float )(llvm_cbe_tmp__218 + llvm_cbe_tmp__216));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__219, *(int*)(&llvm_cbe_tmp__219));

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%246, float* %%244, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_658_count);
  *llvm_cbe_tmp__217 = llvm_cbe_tmp__219;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%247 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 4, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_666_count);
  llvm_cbe_tmp__220 = (float *)(&conv_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%248 = load float* %%247, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_667_count);
  llvm_cbe_tmp__221 = (float )*llvm_cbe_tmp__220;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__221, *(int*)(&llvm_cbe_tmp__221));
if (AESL_DEBUG_TRACE)
printf("\n  %%249 = fmul float %%39, %%248, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_668_count);
  llvm_cbe_tmp__222 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__221));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__222, *(int*)(&llvm_cbe_tmp__222));
if (AESL_DEBUG_TRACE)
printf("\n  %%250 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_669_count);
  llvm_cbe_tmp__223 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%251 = load float* %%250, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_670_count);
  llvm_cbe_tmp__224 = (float )*llvm_cbe_tmp__223;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__224, *(int*)(&llvm_cbe_tmp__224));
if (AESL_DEBUG_TRACE)
printf("\n  %%252 = fadd float %%251, %%249, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_671_count);
  llvm_cbe_tmp__225 = (float )((float )(llvm_cbe_tmp__224 + llvm_cbe_tmp__222));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__225, *(int*)(&llvm_cbe_tmp__225));

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%252, float* %%250, align 16, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_672_count);
  *llvm_cbe_tmp__223 = llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%253 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 5, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_680_count);
  llvm_cbe_tmp__226 = (float *)(&conv_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%254 = load float* %%253, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_681_count);
  llvm_cbe_tmp__227 = (float )*llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__227, *(int*)(&llvm_cbe_tmp__227));
if (AESL_DEBUG_TRACE)
printf("\n  %%255 = fmul float %%39, %%254, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_682_count);
  llvm_cbe_tmp__228 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__227));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__228, *(int*)(&llvm_cbe_tmp__228));
if (AESL_DEBUG_TRACE)
printf("\n  %%256 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 5, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_683_count);
  llvm_cbe_tmp__229 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%257 = load float* %%256, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_684_count);
  llvm_cbe_tmp__230 = (float )*llvm_cbe_tmp__229;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__230, *(int*)(&llvm_cbe_tmp__230));
if (AESL_DEBUG_TRACE)
printf("\n  %%258 = fadd float %%257, %%255, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_685_count);
  llvm_cbe_tmp__231 = (float )((float )(llvm_cbe_tmp__230 + llvm_cbe_tmp__228));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__231, *(int*)(&llvm_cbe_tmp__231));

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%258, float* %%256, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_686_count);
  *llvm_cbe_tmp__229 = llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%259 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 6, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_694_count);
  llvm_cbe_tmp__232 = (float *)(&conv_weights[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%260 = load float* %%259, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_695_count);
  llvm_cbe_tmp__233 = (float )*llvm_cbe_tmp__232;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__233, *(int*)(&llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n  %%261 = fmul float %%39, %%260, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_696_count);
  llvm_cbe_tmp__234 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__234, *(int*)(&llvm_cbe_tmp__234));
if (AESL_DEBUG_TRACE)
printf("\n  %%262 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 6, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_697_count);
  llvm_cbe_tmp__235 = (float *)(&llvm_cbe_out_val[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%263 = load float* %%262, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_698_count);
  llvm_cbe_tmp__236 = (float )*llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__236, *(int*)(&llvm_cbe_tmp__236));
if (AESL_DEBUG_TRACE)
printf("\n  %%264 = fadd float %%263, %%261, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_699_count);
  llvm_cbe_tmp__237 = (float )((float )(llvm_cbe_tmp__236 + llvm_cbe_tmp__234));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__237, *(int*)(&llvm_cbe_tmp__237));

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%264, float* %%262, align 8, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_700_count);
  *llvm_cbe_tmp__235 = llvm_cbe_tmp__237;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%265 = getelementptr inbounds [8 x [3 x [3 x float]]]* @conv_weights, i64 0, i64 7, i64 %%11, i64 %%43, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__238 = (float *)(&conv_weights[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 3
#endif
][(((signed long long )llvm_cbe_tmp__27))
#ifdef AESL_BC_SIM
 % 3
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__27) < 3)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%266 = load float* %%265, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_709_count);
  llvm_cbe_tmp__239 = (float )*llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__239, *(int*)(&llvm_cbe_tmp__239));
if (AESL_DEBUG_TRACE)
printf("\n  %%267 = fmul float %%39, %%266, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__240 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__239));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__240, *(int*)(&llvm_cbe_tmp__240));
if (AESL_DEBUG_TRACE)
printf("\n  %%268 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 7, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_711_count);
  llvm_cbe_tmp__241 = (float *)(&llvm_cbe_out_val[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%269 = load float* %%268, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_712_count);
  llvm_cbe_tmp__242 = (float )*llvm_cbe_tmp__241;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__242, *(int*)(&llvm_cbe_tmp__242));
if (AESL_DEBUG_TRACE)
printf("\n  %%270 = fadd float %%269, %%267, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__243 = (float )((float )(llvm_cbe_tmp__242 + llvm_cbe_tmp__240));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__243, *(int*)(&llvm_cbe_tmp__243));

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 8 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%270, float* %%268, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_714_count);
  *llvm_cbe_tmp__241 = llvm_cbe_tmp__243;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__243);
  goto llvm_cbe_tmp__256;

llvm_cbe_tmp__258:
  goto llvm_cbe_tmp__255;

llvm_cbe_tmp__257:
  if ((((signed int )llvm_cbe_storemerge218) > ((signed int )0u))) {
    goto llvm_cbe_tmp__259;
  } else {
    goto llvm_cbe_tmp__258;
  }

llvm_cbe_tmp__259:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__10) < 90 && "Write access out of array 'aesl_internal_convolutional_layer.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%39, float* %%15, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_145_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__25);
  goto llvm_cbe_tmp__258;

  } while (1); /* end of syntactic loop '.preheader12..preheader12.split_crit_edge' */
  } while (1); /* end of syntactic loop '.preheader12' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__34 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load float* %%58, align 16, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__35 = (float )*llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 0), align 16, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__36 = (float )*((&conv_biases[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__36, *(int*)(&llvm_cbe_tmp__36));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = fadd float %%59, %%60, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__37 = (float )((float )(llvm_cbe_tmp__35 + llvm_cbe_tmp__36));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = call float @relu(float %%61) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__38 = (float )relu(llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
printf("\nReturn  = %f",llvm_cbe_tmp__38);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 0, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__39 = (float *)(&(*llvm_cbe_dst)[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%62, float* %%63, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_187_count);
  *llvm_cbe_tmp__39 = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 1, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__40 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* %%64, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__41 = (float )*llvm_cbe_tmp__40;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 1), align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__42 = (float )*((&conv_biases[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__42, *(int*)(&llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = fadd float %%65, %%66, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__43 = (float )((float )(llvm_cbe_tmp__41 + llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = call float @relu(float %%67) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__44 = (float )relu(llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
printf("\nReturn  = %f",llvm_cbe_tmp__44);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 1, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__45 = (float *)(&llvm_cbe_dst[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%68, float* %%69, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_200_count);
  *llvm_cbe_tmp__45 = llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 2, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__46 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load float* %%70, align 8, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__47 = (float )*llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 2), align 8, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__48 = (float )*((&conv_biases[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__48, *(int*)(&llvm_cbe_tmp__48));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = fadd float %%71, %%72, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__49 = (float )((float )(llvm_cbe_tmp__47 + llvm_cbe_tmp__48));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = call float @relu(float %%73) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__50 = (float )relu(llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
printf("\nReturn  = %f",llvm_cbe_tmp__50);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 2, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__51 = (float *)(&llvm_cbe_dst[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* %%75, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_213_count);
  *llvm_cbe_tmp__51 = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 3, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__52 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load float* %%76, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__53 = (float )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 3), align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__54 = (float )*((&conv_biases[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__54, *(int*)(&llvm_cbe_tmp__54));
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = fadd float %%77, %%78, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__55 = (float )((float )(llvm_cbe_tmp__53 + llvm_cbe_tmp__54));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = call float @relu(float %%79) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__56 = (float )relu(llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
printf("\nReturn  = %f",llvm_cbe_tmp__56);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 3, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_225_count);
  llvm_cbe_tmp__57 = (float *)(&llvm_cbe_dst[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%80, float* %%81, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_226_count);
  *llvm_cbe_tmp__57 = llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__58 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load float* %%82, align 16, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__59 = (float )*llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 4), align 16, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__60 = (float )*((&conv_biases[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__60, *(int*)(&llvm_cbe_tmp__60));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = fadd float %%83, %%84, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__61 = (float )((float )(llvm_cbe_tmp__59 + llvm_cbe_tmp__60));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = call float @relu(float %%85) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__62 = (float )relu(llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
printf("\nReturn  = %f",llvm_cbe_tmp__62);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 4, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__63 = (float *)(&llvm_cbe_dst[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%86, float* %%87, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_239_count);
  *llvm_cbe_tmp__63 = llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 5, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_246_count);
  llvm_cbe_tmp__64 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load float* %%88, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_247_count);
  llvm_cbe_tmp__65 = (float )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 5), align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__66 = (float )*((&conv_biases[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__66, *(int*)(&llvm_cbe_tmp__66));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = fadd float %%89, %%90, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_249_count);
  llvm_cbe_tmp__67 = (float )((float )(llvm_cbe_tmp__65 + llvm_cbe_tmp__66));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = call float @relu(float %%91) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__68 = (float )relu(llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
printf("\nReturn  = %f",llvm_cbe_tmp__68);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 5, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__69 = (float *)(&llvm_cbe_dst[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%92, float* %%93, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_252_count);
  *llvm_cbe_tmp__69 = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__70 = (float *)(&llvm_cbe_out_val[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load float* %%94, align 8, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__71 = (float )*llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 6), align 8, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__72 = (float )*((&conv_biases[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__72, *(int*)(&llvm_cbe_tmp__72));
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = fadd float %%95, %%96, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__73 = (float )((float )(llvm_cbe_tmp__71 + llvm_cbe_tmp__72));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = call float @relu(float %%97) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__74 = (float )relu(llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
printf("\nReturn  = %f",llvm_cbe_tmp__74);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 6, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__75 = (float *)(&llvm_cbe_dst[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%98, float* %%99, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_265_count);
  *llvm_cbe_tmp__75 = llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = getelementptr inbounds [8 x float]* %%out_val, i64 0, i64 7, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__76 = (float *)(&llvm_cbe_out_val[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* %%100, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_273_count);
  llvm_cbe_tmp__77 = (float )*llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__77, *(int*)(&llvm_cbe_tmp__77));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load float* getelementptr inbounds ([8 x float]* @conv_biases, i64 0, i64 7), align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__78 = (float )*((&conv_biases[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__78, *(int*)(&llvm_cbe_tmp__78));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = fadd float %%101, %%102, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__79 = (float )((float )(llvm_cbe_tmp__77 + llvm_cbe_tmp__78));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__79, *(int*)(&llvm_cbe_tmp__79));
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = call float @relu(float %%103) nounwind, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__80 = (float )relu(llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__79, *(int*)(&llvm_cbe_tmp__79));
printf("\nReturn  = %f",llvm_cbe_tmp__80);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = getelementptr inbounds [28 x [28 x float]]* %%dst, i64 7, i64 %%4, i64 %%6, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__81 = (float *)(&llvm_cbe_dst[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 28 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__4) < 28 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%104, float* %%105, align 4, !dbg !5 for 0x%I64xth hint within @convolutional_layer  --> \n", ++aesl_llvm_cbe_278_count);
  *llvm_cbe_tmp__81 = llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__80);
  goto llvm_cbe_tmp__247;

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader20' */
llvm_cbe_tmp__246:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @convolutional_layer}\n");
  return;
}

