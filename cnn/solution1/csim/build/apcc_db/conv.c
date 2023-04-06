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
extern float conv1_weights[6][5][5];
extern float conv1_biases[6];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void convolutional_layer1(float (*llvm_cbe_src)[28], float (*llvm_cbe_dst)[24][24]);
float relu(float );
void convolutional_layer2(float (*llvm_cbe_src)[12], float (*llvm_cbe_dst)[8][8], float (*llvm_cbe_weights)[5][5]);


/* Global Variable Definitions and Initialization */
float conv1_weights[6][5][5] = { { { 0x1.13f3a2p-3, 0x1.559ffcp-1, 0x1.225826p-2, -0x1.32a51cp-2, -0x1.77fd24p-2 }, { -0x1.1f1452p-3, 0x1.874e16p-2, 0x1.b71e82p-1, 0x1.3d472ap-2, -0x1.bd97cap-3 }, { -0x1.4c0e06p-1, -0x1.3491c8p-2, 0x1.b50564p-2, 0x1.11fe16p-1, 0x1.08936cp-5 }, { -0x1.8ce7p-1, -0x1.d8f398p-2, 0x1.ab93e8p-8, 0x1.08ab48p-2, 0x1.1281b2p-2 }, { 0x1.a98a84p-7, -0x1.74fa42p-4, -0x1.122838p-2, 0x1.8052b6p-4, 0x1.89059ap-3 } }, { { -0x1.86c3dep-6, -0x1.fe88dp-6, 0x1.3c7a14p-2, 0x1.485bap-1, 0x1.2f319ap-1 }, { 0x1.36c5e8p-4, -0x1.5a667cp-3, -0x1.b3011cp-1, -0x1.28913cp-1, -0x1.be1308p-2 }, { -0x1.15320ap-3, 0x1.b578dep-5, -0x1.113ddp-2, -0x1.311d7ep-1, -0x1.22fb8ap-1 }, { -0x1.9ae06cp-4, -0x1.69f1aap-4, 0x1.06dfb8p-4, 0x1.687e44p-6, 0x1.1a3eb2p-5 }, { 0x1.8c5bbp-2, 0x1.7a02dp-2, 0x1.a72feap-2, 0x1.21cbf4p-1, 0x1.1ef4c4p-2 } }, { { -0x1.718fd8p-6, 0x1.2b4768p-4, -0x1.e949e8p-2, -0x1.577af4p-2, 0x1.dd33b8p-5 }, { -0x1.381684p-7, -0x1.087e6p-3, -0x1.e323aep-3, 0x1.395152p-2, 0x1.0eaff6p-3 }, { -0x1.626262p-4, -0x1.62efd2p-2, 0x1.7ca55ep-3, 0x1.ab1848p-2, 0x1.dd67fp-4 }, { 0x1.611d5ap-3, 0x1.cf1fd4p-3, 0x1.1f4d6p-1, 0x1.cd45fp-5, -0x1.a9b27p-6 }, { 0x1.68f23ap-2, 0x1.2b343cp-2, 0x1.b15084p-4, -0x1.4cfacep-3, -0x1.4d3638p-4 } }, { { 0x1.e7f6dap-7, -0x1.89d5aep-7, 0x1.b55404p-4, -0x1.67c628p-4, 0x1.128038p-6 }, { -0x1.a8a3bap-4, -0x1.97936p-3, -0x1.6b26f8p-4, -0x1.168d14p-4, 0x1.849642p-2 }, { 0x1.354c38p-4, 0x1.249e08p-1, 0x1.f051d4p-2, -0x1.0a2c94p-5, 0x1.620e18p-3 }, { 0x1.ea0958p-2, 0x1.38d534p-1, -0x1.65e8c6p-2, -0x1.9988e8p-3, 0x1.51e296p-3 }, { -0x1.2d5bp-3, -0x1.ea011ep-4, -0x1.bd282ep-2, 0x1.8dbdccp-4, 0x1.3ac1e2p-6 } }, { { -0x1.13313ap-1, -0x1.1aec1cp-1, -0x1.fc6476p-2, -0x1.3981e8p-5, 0x1.efc244p-2 }, { -0x1.430302p-1, -0x1.a356b8p-4, -0x1.891414p-2, 0x1.4311cap-3, 0x1.cda6e6p-2 }, { -0x1.b2752p-2, -0x1.0b900ep-4, -0x1.3c07aap-2, 0x1.cab51ep-2, 0x1.054848p-1 }, { -0x1.49a544p-1, -0x1.e48cb8p-5, -0x1.c948ccp-4, 0x1.275734p-2, 0x1.549e32p-2 }, { -0x1.01a708p-2, -0x1.f79f16p-3, -0x1.fdffa6p-3, 0x1.238de6p-2, 0x1.020258p-2 } }, { { -0x1.294432p-3, -0x1.82e04cp-4, -0x1.a77e26p-3, -0x1.480872p-4, -0x1.69801ep-3 }, { 0x1.237292p-3, 0x1.20bfd2p-2, -0x1.e11fd6p-4, -0x1.1c8d92p-2, -0x1.1548f4p-1 }, { 0x1.3a233p-4, 0x1.ed5fb2p-2, 0x1.4f3184p-3, -0x1.b8276ap-2, -0x1.861e78p-1 }, { 0x1.128eaap-4, 0x1.93c24ap-2, 0x1.35607p-1, 0x1.5e55acp-5, -0x1.77ae6ep-1 }, { 0x1.97c142p-4, 0x1.8f5458p-3, 0x1.26ad38p-1, 0x1.3cdcbap-2, -0x1.56ad1p-6 } } };
float conv1_biases[6] = { -0x1.1b76e8p-1, -0x1.51a2c2p-4, -0x1.3856aep-5, -0x1.e7af28p-5, -0x1.7e033ep-4, -0x1.fd8deap-4 };
static float aesl_internal_convolutional_layer1_OC_linebuf[140];
static float aesl_internal_convolutional_layer2_OC_linebuf[60];


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

void convolutional_layer1(float (*llvm_cbe_src)[28], float (*llvm_cbe_dst)[24][24]) {
  static  unsigned long long aesl_llvm_cbe_out_val_count = 0;
  float llvm_cbe_out_val[6];    /* Address-exposed local */
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
  static  unsigned long long aesl_llvm_cbe_storemerge20_count = 0;
  unsigned int llvm_cbe_storemerge20;
  unsigned int llvm_cbe_storemerge20__PHI_TEMPORARY;
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
  static  unsigned long long aesl_llvm_cbe_storemerge119_count = 0;
  unsigned int llvm_cbe_storemerge119;
  unsigned int llvm_cbe_storemerge119__PHI_TEMPORARY;
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
  static  unsigned long long aesl_llvm_cbe_storemerge217_count = 0;
  unsigned int llvm_cbe_storemerge217;
  unsigned int llvm_cbe_storemerge217__PHI_TEMPORARY;
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
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  float *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned int llvm_cbe_tmp__12;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge412_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge412_2e_us;
  unsigned int llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  float llvm_cbe_tmp__16;
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
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  float *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond6_2e_us;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge412_count = 0;
  unsigned int llvm_cbe_storemerge412;
  unsigned int llvm_cbe_storemerge412__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  float *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  float llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_count = 0;
  bool llvm_cbe_or_2e_cond6;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  float llvm_cbe_tmp__30;
  float llvm_cbe_tmp__30__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  float *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond23_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond24_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond7_count = 0;
  bool llvm_cbe_or_2e_cond7;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  float *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  float llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  float llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  float llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  float *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  float *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  float llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  float llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  float *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  float *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  float llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  float llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  float *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  float *llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  float llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  float llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  float llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  float *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  float *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  float llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  float llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  float llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  float llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  float *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  float *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  float llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  float llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  float llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  float llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  float *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond25_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond26_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  float *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  float llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  float llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  float *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  float *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  float llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  float llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  float *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  float *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  float llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  float llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  float *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  float *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  float llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  float llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  float *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  float *llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  float llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  float llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  float *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  float *llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  float llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  float *llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  float *llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  float llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  float llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  float *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  float llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  float llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  float *llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  float llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  float llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  float *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  float llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  float llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  float *llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  float llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  float *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  float llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  float llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  float *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  float llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  float llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  float *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  float llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  float llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  float *llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  float llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  float llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  float *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  float llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  float llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  float *llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  float llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  float llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  float *llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  float llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  float llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  float *llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  float llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  float llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  float *llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  float *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  float llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  float llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  float *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  float *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  float llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  float llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  float *llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  float *llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  float llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  float llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  float *llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  float *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  float llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  float llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  float *llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  float *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  float llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  float llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  float *llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  unsigned long long llvm_cbe_tmp__160;
  unsigned long long llvm_cbe_tmp__160__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe__2e_ph29_count = 0;
  float llvm_cbe__2e_ph29;
  float llvm_cbe__2e_ph29__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  float *llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  float llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  float llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  float *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  float llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  float llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  float *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  float llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  float *llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  float llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  float llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  float *llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  float llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  float llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  float *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  float llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  float llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  float *llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  float llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  float *llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  float llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  float llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  float *llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  float llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  float llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  float *llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  float llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  float llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  float *llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  float llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  float llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  float *llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  float llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  float llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @convolutional_layer1\n");
  llvm_cbe_storemerge20__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader18;

  do {     /* Syntactic loop '.preheader18' to make GCC happy */
llvm_cbe__2e_preheader18:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge20 = phi i32 [ 0, %%0 ], [ %%103, %%102  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_storemerge20_count);
  llvm_cbe_storemerge20 = (unsigned int )llvm_cbe_storemerge20__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge20 = 0x%X",llvm_cbe_storemerge20);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__75);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge20 to i64, !dbg !6 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge20);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge20, -4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__2 = (unsigned int )((unsigned int )(llvm_cbe_storemerge20&4294967295ull)) + ((unsigned int )(4294967292u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__2&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
  llvm_cbe_storemerge119__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__197;

llvm_cbe_tmp__198:
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = add nsw i32 %%storemerge20, 1, !dbg !8 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__75 = (unsigned int )((unsigned int )(llvm_cbe_storemerge20&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__75&4294967295ull)));
  if (((llvm_cbe_tmp__75&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__199;
  } else {
    llvm_cbe_storemerge20__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__75;   /* for PHI node */
    goto llvm_cbe__2e_preheader18;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__197:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge119 = phi i32 [ 0, %%.preheader18 ], [ %%101, %%100  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_storemerge119_count);
  llvm_cbe_storemerge119 = (unsigned int )llvm_cbe_storemerge119__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge119 = 0x%X",llvm_cbe_storemerge119);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__74);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge119 to i64, !dbg !6 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge119);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [28 x float]* %%src, i64 %%1, i64 %%6, !dbg !6 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__5 = (float *)(&llvm_cbe_src[(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 28
#endif
][(((signed long long )llvm_cbe_tmp__4))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__4) < 28)) fprintf(stderr, "%s:%d: warning: Read access out of array 'src' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !6 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__6 = (float )*llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__6, *(int*)(&llvm_cbe_tmp__6));
  llvm_cbe_storemerge217__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader11;

llvm_cbe_tmp__200:
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = add nsw i32 %%storemerge119, 1, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_273_count);
  llvm_cbe_tmp__74 = (unsigned int )((unsigned int )(llvm_cbe_storemerge119&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__74&4294967295ull)));
  if (((llvm_cbe_tmp__74&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe_tmp__198;
  } else {
    llvm_cbe_storemerge119__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__74;   /* for PHI node */
    goto llvm_cbe_tmp__197;
  }

llvm_cbe_tmp__201:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond7 = and i1 %%2, %%61, !dbg !8 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_or_2e_cond7_count);
  llvm_cbe_or_2e_cond7 = (bool )(((((signed int )llvm_cbe_storemerge20) > ((signed int )3u)) & (((signed int )llvm_cbe_storemerge119) > ((signed int )3u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond7 = 0x%X\n", llvm_cbe_or_2e_cond7);
  if (llvm_cbe_or_2e_cond7) {
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe_tmp__200;
  }

  do {     /* Syntactic loop '.preheader11' to make GCC happy */
llvm_cbe__2e_preheader11:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge217 = phi i32 [ 0, %%5 ], [ %%59, %%.us-lcssa.us  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_storemerge217_count);
  llvm_cbe_storemerge217 = (unsigned int )llvm_cbe_storemerge217__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge217 = 0x%X",llvm_cbe_storemerge217);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = mul nsw i32 %%storemerge217, 28, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(llvm_cbe_storemerge217&4294967295ull)) * ((unsigned int )(28u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__7&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%storemerge217 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__8 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge217);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i32 %%10, -1, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_tmp__7&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = sext i32 %%13 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [140 x float]* @aesl_internal_convolutional_layer1.linebuf, i64 0, i64 %%15, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__11 = (float *)(&aesl_internal_convolutional_layer1_OC_linebuf[(((signed long long )llvm_cbe_tmp__10))
#ifdef AESL_BC_SIM
 % 140
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
  if ((((signed int )llvm_cbe_storemerge217) < ((signed int )4u))) {
    llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader11_2e_split_2e_us;
  } else {
    llvm_cbe_storemerge412__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader11_2e__2e_preheader11_2e_split_crit_edge;
  }

llvm_cbe__2e_us_2d_lcssa_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge217, 1, !dbg !11 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__35 = (unsigned int )((unsigned int )(llvm_cbe_storemerge217&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__35&4294967295ull)));
  if (((llvm_cbe_tmp__35&4294967295U) == (5u&4294967295U))) {
    goto llvm_cbe_tmp__201;
  } else {
    llvm_cbe_storemerge217__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__35;   /* for PHI node */
    goto llvm_cbe__2e_preheader11;
  }

  do {     /* Syntactic loop '.preheader11.split.us' to make GCC happy */
llvm_cbe__2e_preheader11_2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge412.us = phi i32 [ %%18, %%17 ], [ 0, %%.preheader11  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_storemerge412_2e_us_count);
  llvm_cbe_storemerge412_2e_us = (unsigned int )llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge412.us = 0x%X",llvm_cbe_storemerge412_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__12);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = add nsw i32 %%storemerge412.us, %%10, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__13 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412_2e_us&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__7&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__13&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = sext i32 %%23 to i64, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__14 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [140 x float]* @aesl_internal_convolutional_layer1.linebuf, i64 0, i64 %%24, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__15 = (float *)(&aesl_internal_convolutional_layer1_OC_linebuf[(((signed long long )llvm_cbe_tmp__14))
#ifdef AESL_BC_SIM
 % 140
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__14) < 140)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_convolutional_layer1.linebuf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* %%25, align 4, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__16 = (float )*llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__16, *(int*)(&llvm_cbe_tmp__16));
  if ((((signed int )llvm_cbe_storemerge412_2e_us) > ((signed int )22u))) {
    goto llvm_cbe__2e_thread_2e_preheader_2e_us;
  } else {
    goto llvm_cbe_tmp__202;
  }

llvm_cbe_tmp__203:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add nsw i32 %%storemerge412.us, 1, !dbg !11 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
  if (((llvm_cbe_tmp__12&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge412_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__12;   /* for PHI node */
    goto llvm_cbe__2e_preheader11_2e_split_2e_us;
  }

llvm_cbe_tmp__204:
  goto llvm_cbe_tmp__203;

llvm_cbe_tmp__205:
  if ((((signed int )llvm_cbe_storemerge217) > ((signed int )0u))) {
    goto llvm_cbe_tmp__206;
  } else {
    goto llvm_cbe_tmp__204;
  }

llvm_cbe_tmp__202:
  if ((((signed int )llvm_cbe_storemerge412_2e_us) > ((signed int )0u))) {
    goto llvm_cbe_tmp__207;
  } else {
    goto llvm_cbe_tmp__205;
  }

llvm_cbe__2e_loopexit9_2e_us:
  goto llvm_cbe_tmp__202;

llvm_cbe__2e_thread_2e_us_2e_us_2e_5:
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 0, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__76 = (float *)(&conv1_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = load float* %%105, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_291_count);
  llvm_cbe_tmp__77 = (float )*llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__77, *(int*)(&llvm_cbe_tmp__77));
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = fmul float %%26, %%106, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__78 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__77));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__78, *(int*)(&llvm_cbe_tmp__78));
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__79 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%107, float* %%108, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_294_count);
  *llvm_cbe_tmp__79 = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 1, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__80 = (float *)(&conv1_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* %%109, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__81 = (float )*llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__81, *(int*)(&llvm_cbe_tmp__81));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = fmul float %%26, %%110, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__82 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__81));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__82, *(int*)(&llvm_cbe_tmp__82));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 1, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__83 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%111, float* %%112, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_306_count);
  *llvm_cbe_tmp__83 = llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 2, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__84 = (float *)(&conv1_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = load float* %%113, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__85 = (float )*llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__85, *(int*)(&llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = fmul float %%26, %%114, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__86 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__86, *(int*)(&llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 2, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__87 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%115, float* %%116, align 8, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_318_count);
  *llvm_cbe_tmp__87 = llvm_cbe_tmp__86;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 3, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__88 = (float *)(&conv1_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = load float* %%117, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_327_count);
  llvm_cbe_tmp__89 = (float )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__89, *(int*)(&llvm_cbe_tmp__89));
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = fmul float %%26, %%118, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_328_count);
  llvm_cbe_tmp__90 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__89));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__90, *(int*)(&llvm_cbe_tmp__90));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 3, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_329_count);
  llvm_cbe_tmp__91 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%119, float* %%120, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_330_count);
  *llvm_cbe_tmp__91 = llvm_cbe_tmp__90;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 4, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_338_count);
  llvm_cbe_tmp__92 = (float *)(&conv1_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = load float* %%121, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__93 = (float )*llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__93, *(int*)(&llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = fmul float %%26, %%122, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__94 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__94, *(int*)(&llvm_cbe_tmp__94));
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__95 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%123, float* %%124, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_342_count);
  *llvm_cbe_tmp__95 = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 5, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_350_count);
  llvm_cbe_tmp__96 = (float *)(&conv1_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = load float* %%125, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__97 = (float )*llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__97, *(int*)(&llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = fmul float %%26, %%126, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__98 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__98, *(int*)(&llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 5, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__99 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%127, float* %%128, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_354_count);
  *llvm_cbe_tmp__99 = llvm_cbe_tmp__98;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__98);
  goto llvm_cbe__2e_loopexit9_2e_us;

llvm_cbe__2e_thread_2e_preheader_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6.us = and i1 %%11, %%33, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_or_2e_cond6_2e_us_count);
  llvm_cbe_or_2e_cond6_2e_us = (bool )((((llvm_cbe_storemerge217&4294967295U) == (0u&4294967295U)) & ((llvm_cbe_storemerge412_2e_us&4294967295U) == (23u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6.us = 0x%X\n", llvm_cbe_or_2e_cond6_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add nsw i32 %%storemerge412.us, -23, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__20 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412_2e_us&4294967295ull)) + ((unsigned int )(4294967273u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__20&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = sext i32 %%34 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__21 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__21);
  if (llvm_cbe_or_2e_cond6_2e_us) {
    goto llvm_cbe__2e_thread_2e_us_2e_us_2e_5;
  } else {
    goto llvm_cbe__2e_thread_2e_us13_2e_5;
  }

llvm_cbe__2e_thread_2e_us13_2e_5:
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 0, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__100 = (float *)(&conv1_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = load float* %%129, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__101 = (float )*llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__101, *(int*)(&llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = fmul float %%26, %%130, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__102 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__102, *(int*)(&llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__103 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = load float* %%132, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__104 = (float )*llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__104, *(int*)(&llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = fadd float %%133, %%131, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__105 = (float )((float )(llvm_cbe_tmp__104 + llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__105, *(int*)(&llvm_cbe_tmp__105));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%134, float* %%132, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_369_count);
  *llvm_cbe_tmp__103 = llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 1, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__106 = (float *)(&conv1_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = load float* %%135, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__107 = (float )*llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__107, *(int*)(&llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = fmul float %%26, %%136, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_379_count);
  llvm_cbe_tmp__108 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__108, *(int*)(&llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 1, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_380_count);
  llvm_cbe_tmp__109 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load float* %%138, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_381_count);
  llvm_cbe_tmp__110 = (float )*llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__110, *(int*)(&llvm_cbe_tmp__110));
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = fadd float %%139, %%137, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_382_count);
  llvm_cbe_tmp__111 = (float )((float )(llvm_cbe_tmp__110 + llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__111, *(int*)(&llvm_cbe_tmp__111));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%140, float* %%138, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_383_count);
  *llvm_cbe_tmp__109 = llvm_cbe_tmp__111;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 2, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__112 = (float *)(&conv1_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = load float* %%141, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_392_count);
  llvm_cbe_tmp__113 = (float )*llvm_cbe_tmp__112;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__113, *(int*)(&llvm_cbe_tmp__113));
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = fmul float %%26, %%142, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_393_count);
  llvm_cbe_tmp__114 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__113));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 2, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_394_count);
  llvm_cbe_tmp__115 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = load float* %%144, align 8, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_395_count);
  llvm_cbe_tmp__116 = (float )*llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__116, *(int*)(&llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = fadd float %%145, %%143, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_396_count);
  llvm_cbe_tmp__117 = (float )((float )(llvm_cbe_tmp__116 + llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%146, float* %%144, align 8, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_397_count);
  *llvm_cbe_tmp__115 = llvm_cbe_tmp__117;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 3, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__118 = (float *)(&conv1_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = load float* %%147, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__119 = (float )*llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__119, *(int*)(&llvm_cbe_tmp__119));
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = fmul float %%26, %%148, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__120 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__119));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__120, *(int*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 3, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__121 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = load float* %%150, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__122 = (float )*llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__122, *(int*)(&llvm_cbe_tmp__122));
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = fadd float %%151, %%149, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__123 = (float )((float )(llvm_cbe_tmp__122 + llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__123, *(int*)(&llvm_cbe_tmp__123));

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%152, float* %%150, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_411_count);
  *llvm_cbe_tmp__121 = llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 4, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__124 = (float *)(&conv1_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = load float* %%153, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__125 = (float )*llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__125, *(int*)(&llvm_cbe_tmp__125));
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = fmul float %%26, %%154, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_421_count);
  llvm_cbe_tmp__126 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__125));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__126, *(int*)(&llvm_cbe_tmp__126));
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__127 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = load float* %%156, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__128 = (float )*llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__128, *(int*)(&llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = fadd float %%157, %%155, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__129 = (float )((float )(llvm_cbe_tmp__128 + llvm_cbe_tmp__126));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__129, *(int*)(&llvm_cbe_tmp__129));

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%158, float* %%156, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_425_count);
  *llvm_cbe_tmp__127 = llvm_cbe_tmp__129;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 5, i64 %%12, i64 %%35, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__130 = (float *)(&conv1_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__21))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__21) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = load float* %%159, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__131 = (float )*llvm_cbe_tmp__130;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__131, *(int*)(&llvm_cbe_tmp__131));
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = fmul float %%26, %%160, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_435_count);
  llvm_cbe_tmp__132 = (float )((float )(llvm_cbe_tmp__16 * llvm_cbe_tmp__131));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__132, *(int*)(&llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 5, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_436_count);
  llvm_cbe_tmp__133 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = load float* %%162, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_437_count);
  llvm_cbe_tmp__134 = (float )*llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__134, *(int*)(&llvm_cbe_tmp__134));
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = fadd float %%163, %%161, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__135 = (float )((float )(llvm_cbe_tmp__134 + llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__135, *(int*)(&llvm_cbe_tmp__135));

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%164, float* %%162, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_439_count);
  *llvm_cbe_tmp__133 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__135);
  goto llvm_cbe__2e_loopexit9_2e_us;

llvm_cbe_tmp__206:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__10) < 140 && "Write access out of array 'aesl_internal_convolutional_layer1.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%16, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_92_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__16);
  goto llvm_cbe_tmp__204;

llvm_cbe_tmp__207:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i32 %%13, %%storemerge412.us, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__17 = (unsigned int )((unsigned int )(llvm_cbe_tmp__9&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge412_2e_us&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__17&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sext i32 %%30 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__18 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds [140 x float]* @aesl_internal_convolutional_layer1.linebuf, i64 0, i64 %%31, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__19 = (float *)(&aesl_internal_convolutional_layer1_OC_linebuf[(((signed long long )llvm_cbe_tmp__18))
#ifdef AESL_BC_SIM
 % 140
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__18) < 140 && "Write access out of array 'aesl_internal_convolutional_layer1.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* %%32, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_97_count);
  *llvm_cbe_tmp__19 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__16);
  goto llvm_cbe_tmp__203;

  } while (1); /* end of syntactic loop '.preheader11.split.us' */
  do {     /* Syntactic loop '.preheader11..preheader11.split_crit_edge' to make GCC happy */
llvm_cbe__2e_preheader11_2e__2e_preheader11_2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge412 = phi i32 [ %%58, %%57 ], [ 0, %%.preheader11  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_storemerge412_count);
  llvm_cbe_storemerge412 = (unsigned int )llvm_cbe_storemerge412__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge412 = 0x%X",llvm_cbe_storemerge412);
printf("\n = 0x%X",llvm_cbe_tmp__34);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge412) < ((signed int )27u))) {
    goto llvm_cbe_tmp__208;
  } else {
    goto llvm_cbe__2e_thread_2e_preheader_2e_thread;
  }

llvm_cbe_tmp__209:
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = add nsw i32 %%storemerge412, 1, !dbg !11 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_159_count);
  llvm_cbe_tmp__34 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__34&4294967295ull)));
  if (((llvm_cbe_tmp__34&4294967295U) == (28u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge412__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__34;   /* for PHI node */
    goto llvm_cbe__2e_preheader11_2e__2e_preheader11_2e_split_crit_edge;
  }

llvm_cbe_tmp__210:
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = add i32 %%13, %%storemerge412, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__31 = (unsigned int )((unsigned int )(llvm_cbe_tmp__9&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge412&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__31&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = sext i32 %%51 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__32 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [140 x float]* @aesl_internal_convolutional_layer1.linebuf, i64 0, i64 %%52, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__33 = (float *)(&aesl_internal_convolutional_layer1_OC_linebuf[(((signed long long )llvm_cbe_tmp__32))
#ifdef AESL_BC_SIM
 % 140
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__32) < 140 && "Write access out of array 'aesl_internal_convolutional_layer1.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* %%53, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_153_count);
  *llvm_cbe_tmp__33 = llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__30);
  goto llvm_cbe_tmp__209;

llvm_cbe__2e_loopexit9:
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = phi float [ %%43, %%39 ], [ %%43, %%.thread.us.5 ], [ %%.ph29, %%.thread.5  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__30 = (float )llvm_cbe_tmp__30__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__30);
printf("\n = %f",llvm_cbe_tmp__27);
printf("\n = %f",llvm_cbe_tmp__27);
printf("\n.ph29 = %f",llvm_cbe__2e_ph29);
}
  if ((((signed int )llvm_cbe_storemerge412) > ((signed int )0u))) {
    goto llvm_cbe_tmp__210;
  } else {
    goto llvm_cbe_tmp__211;
  }

llvm_cbe_tmp__208:
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add nsw i32 %%storemerge412, %%10, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__7&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__24&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = sext i32 %%40 to i64, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__25 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [140 x float]* @aesl_internal_convolutional_layer1.linebuf, i64 0, i64 %%41, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__26 = (float *)(&aesl_internal_convolutional_layer1_OC_linebuf[(((signed long long )llvm_cbe_tmp__25))
#ifdef AESL_BC_SIM
 % 140
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__25) < 140)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_convolutional_layer1.linebuf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !9 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__27 = (float )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__27, *(int*)(&llvm_cbe_tmp__27));
  if ((((signed int )llvm_cbe_storemerge412) > ((signed int )22u))) {
    goto llvm_cbe__2e_thread_2e_preheader;
  } else {
    llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe__2e_loopexit9;
  }

llvm_cbe__2e_thread_2e_us_2e_5:
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 0, i64 %%12, i64 %%47, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_448_count);
  llvm_cbe_tmp__136 = (float *)(&conv1_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__29))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__29) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = load float* %%165, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__137 = (float )*llvm_cbe_tmp__136;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__137, *(int*)(&llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = fmul float %%43, %%166, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_450_count);
  llvm_cbe_tmp__138 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__138, *(int*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__139 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%167, float* %%168, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_452_count);
  *llvm_cbe_tmp__139 = llvm_cbe_tmp__138;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 1, i64 %%12, i64 %%47, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__140 = (float *)(&conv1_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__29))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__29) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = load float* %%169, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_461_count);
  llvm_cbe_tmp__141 = (float )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__141, *(int*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = fmul float %%43, %%170, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_462_count);
  llvm_cbe_tmp__142 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__142, *(int*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 1, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_463_count);
  llvm_cbe_tmp__143 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%171, float* %%172, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_464_count);
  *llvm_cbe_tmp__143 = llvm_cbe_tmp__142;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 2, i64 %%12, i64 %%47, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__144 = (float *)(&conv1_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__29))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__29) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = load float* %%173, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_473_count);
  llvm_cbe_tmp__145 = (float )*llvm_cbe_tmp__144;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__145, *(int*)(&llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = fmul float %%43, %%174, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__146 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__146, *(int*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 2, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__147 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%175, float* %%176, align 8, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_476_count);
  *llvm_cbe_tmp__147 = llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n  %%177 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 3, i64 %%12, i64 %%47, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__148 = (float *)(&conv1_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__29))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__29) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = load float* %%177, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__149 = (float )*llvm_cbe_tmp__148;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__149, *(int*)(&llvm_cbe_tmp__149));
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = fmul float %%43, %%178, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_486_count);
  llvm_cbe_tmp__150 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__149));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__150, *(int*)(&llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 3, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_487_count);
  llvm_cbe_tmp__151 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%179, float* %%180, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_488_count);
  *llvm_cbe_tmp__151 = llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 4, i64 %%12, i64 %%47, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_496_count);
  llvm_cbe_tmp__152 = (float *)(&conv1_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__29))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__29) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = load float* %%181, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_497_count);
  llvm_cbe_tmp__153 = (float )*llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__153, *(int*)(&llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = fmul float %%43, %%182, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_498_count);
  llvm_cbe_tmp__154 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__154, *(int*)(&llvm_cbe_tmp__154));
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_499_count);
  llvm_cbe_tmp__155 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%183, float* %%184, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_500_count);
  *llvm_cbe_tmp__155 = llvm_cbe_tmp__154;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 5, i64 %%12, i64 %%47, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__156 = (float *)(&conv1_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__29))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__29) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = load float* %%185, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_509_count);
  llvm_cbe_tmp__157 = (float )*llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__157, *(int*)(&llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = fmul float %%43, %%186, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__158 = (float )((float )(llvm_cbe_tmp__27 * llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__158, *(int*)(&llvm_cbe_tmp__158));
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 5, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_511_count);
  llvm_cbe_tmp__159 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%187, float* %%188, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_512_count);
  *llvm_cbe_tmp__159 = llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__158);
  llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe_tmp__27;   /* for PHI node */
  goto llvm_cbe__2e_loopexit9;

llvm_cbe__2e_thread_2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6 = and i1 %%11, %%45, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_or_2e_cond6_count);
  llvm_cbe_or_2e_cond6 = (bool )((((llvm_cbe_storemerge217&4294967295U) == (0u&4294967295U)) & ((llvm_cbe_storemerge412&4294967295U) == (23u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6 = 0x%X\n", llvm_cbe_or_2e_cond6);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add nsw i32 %%storemerge412, -23, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__28 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(4294967273u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__28&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = sext i32 %%46 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__29 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__29);
  if (llvm_cbe_or_2e_cond6) {
    goto llvm_cbe__2e_thread_2e_us_2e_5;
  } else {
    llvm_cbe_tmp__160__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__29;   /* for PHI node */
    llvm_cbe__2e_ph29__PHI_TEMPORARY = (float )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe__2e_thread_2e_5;
  }

llvm_cbe__2e_thread_2e_5:
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = phi i64 [ %%38, %%.thread.preheader.thread ], [ %%47, %%.thread.preheader  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_521_count);
  llvm_cbe_tmp__160 = (unsigned long long )llvm_cbe_tmp__160__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__160);
printf("\n = 0x%I64X",llvm_cbe_tmp__23);
printf("\n = 0x%I64X",llvm_cbe_tmp__29);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.ph29 = phi float [ %%8, %%.thread.preheader.thread ], [ %%43, %%.thread.preheader  for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe__2e_ph29_count);
  llvm_cbe__2e_ph29 = (float )llvm_cbe__2e_ph29__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.ph29 = %f",llvm_cbe__2e_ph29);
printf("\n = %f",llvm_cbe_tmp__6);
printf("\n = %f",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 0, i64 %%12, i64 %%189, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_522_count);
  llvm_cbe_tmp__161 = (float *)(&conv1_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__160))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__160) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = load float* %%190, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_523_count);
  llvm_cbe_tmp__162 = (float )*llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = fmul float %%.ph29, %%191, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_524_count);
  llvm_cbe_tmp__163 = (float )((float )(llvm_cbe__2e_ph29 * llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__163, *(int*)(&llvm_cbe_tmp__163));
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__164 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = load float* %%193, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__165 = (float )*llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__165, *(int*)(&llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = fadd float %%194, %%192, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__166 = (float )((float )(llvm_cbe_tmp__165 + llvm_cbe_tmp__163));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__166, *(int*)(&llvm_cbe_tmp__166));

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%195, float* %%193, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_528_count);
  *llvm_cbe_tmp__164 = llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%196 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 1, i64 %%12, i64 %%189, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_536_count);
  llvm_cbe_tmp__167 = (float *)(&conv1_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__160))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__160) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = load float* %%196, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__168 = (float )*llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__168, *(int*)(&llvm_cbe_tmp__168));
if (AESL_DEBUG_TRACE)
printf("\n  %%198 = fmul float %%.ph29, %%197, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__169 = (float )((float )(llvm_cbe__2e_ph29 * llvm_cbe_tmp__168));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  %%199 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 1, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_539_count);
  llvm_cbe_tmp__170 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%200 = load float* %%199, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__171 = (float )*llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__171, *(int*)(&llvm_cbe_tmp__171));
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = fadd float %%200, %%198, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__172 = (float )((float )(llvm_cbe_tmp__171 + llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__172, *(int*)(&llvm_cbe_tmp__172));

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%201, float* %%199, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_542_count);
  *llvm_cbe_tmp__170 = llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 2, i64 %%12, i64 %%189, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_550_count);
  llvm_cbe_tmp__173 = (float *)(&conv1_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__160))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__160) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = load float* %%202, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_551_count);
  llvm_cbe_tmp__174 = (float )*llvm_cbe_tmp__173;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__174, *(int*)(&llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = fmul float %%.ph29, %%203, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_552_count);
  llvm_cbe_tmp__175 = (float )((float )(llvm_cbe__2e_ph29 * llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__175, *(int*)(&llvm_cbe_tmp__175));
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 2, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_553_count);
  llvm_cbe_tmp__176 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = load float* %%205, align 8, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_554_count);
  llvm_cbe_tmp__177 = (float )*llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__177, *(int*)(&llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n  %%207 = fadd float %%206, %%204, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_555_count);
  llvm_cbe_tmp__178 = (float )((float )(llvm_cbe_tmp__177 + llvm_cbe_tmp__175));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__178, *(int*)(&llvm_cbe_tmp__178));

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%207, float* %%205, align 8, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_556_count);
  *llvm_cbe_tmp__176 = llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 3, i64 %%12, i64 %%189, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_564_count);
  llvm_cbe_tmp__179 = (float *)(&conv1_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__160))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__160) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = load float* %%208, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__180 = (float )*llvm_cbe_tmp__179;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__180, *(int*)(&llvm_cbe_tmp__180));
if (AESL_DEBUG_TRACE)
printf("\n  %%210 = fmul float %%.ph29, %%209, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_566_count);
  llvm_cbe_tmp__181 = (float )((float )(llvm_cbe__2e_ph29 * llvm_cbe_tmp__180));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__181, *(int*)(&llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n  %%211 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 3, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_567_count);
  llvm_cbe_tmp__182 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%212 = load float* %%211, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_568_count);
  llvm_cbe_tmp__183 = (float )*llvm_cbe_tmp__182;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__183, *(int*)(&llvm_cbe_tmp__183));
if (AESL_DEBUG_TRACE)
printf("\n  %%213 = fadd float %%212, %%210, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_569_count);
  llvm_cbe_tmp__184 = (float )((float )(llvm_cbe_tmp__183 + llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__184, *(int*)(&llvm_cbe_tmp__184));

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%213, float* %%211, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_570_count);
  *llvm_cbe_tmp__182 = llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 4, i64 %%12, i64 %%189, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__185 = (float *)(&conv1_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__160))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__160) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = load float* %%214, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_579_count);
  llvm_cbe_tmp__186 = (float )*llvm_cbe_tmp__185;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__186, *(int*)(&llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = fmul float %%.ph29, %%215, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_580_count);
  llvm_cbe_tmp__187 = (float )((float )(llvm_cbe__2e_ph29 * llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__187, *(int*)(&llvm_cbe_tmp__187));
if (AESL_DEBUG_TRACE)
printf("\n  %%217 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_581_count);
  llvm_cbe_tmp__188 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%218 = load float* %%217, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_582_count);
  llvm_cbe_tmp__189 = (float )*llvm_cbe_tmp__188;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__189, *(int*)(&llvm_cbe_tmp__189));
if (AESL_DEBUG_TRACE)
printf("\n  %%219 = fadd float %%218, %%216, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_583_count);
  llvm_cbe_tmp__190 = (float )((float )(llvm_cbe_tmp__189 + llvm_cbe_tmp__187));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__190, *(int*)(&llvm_cbe_tmp__190));

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%219, float* %%217, align 16, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_584_count);
  *llvm_cbe_tmp__188 = llvm_cbe_tmp__190;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = getelementptr inbounds [6 x [5 x [5 x float]]]* @conv1_weights, i64 0, i64 5, i64 %%12, i64 %%189, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__191 = (float *)(&conv1_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__8))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__160))
#ifdef AESL_BC_SIM
 % 5
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__160));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__8) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__160) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'conv1_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = load float* %%220, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__192 = (float )*llvm_cbe_tmp__191;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__192, *(int*)(&llvm_cbe_tmp__192));
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = fmul float %%.ph29, %%221, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_594_count);
  llvm_cbe_tmp__193 = (float )((float )(llvm_cbe__2e_ph29 * llvm_cbe_tmp__192));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__193, *(int*)(&llvm_cbe_tmp__193));
if (AESL_DEBUG_TRACE)
printf("\n  %%223 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 5, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_595_count);
  llvm_cbe_tmp__194 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = load float* %%223, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_596_count);
  llvm_cbe_tmp__195 = (float )*llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__195, *(int*)(&llvm_cbe_tmp__195));
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = fadd float %%224, %%222, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_597_count);
  llvm_cbe_tmp__196 = (float )((float )(llvm_cbe_tmp__195 + llvm_cbe_tmp__193));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__196, *(int*)(&llvm_cbe_tmp__196));

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 6 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%225, float* %%223, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_598_count);
  *llvm_cbe_tmp__194 = llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__196);
  llvm_cbe_tmp__30__PHI_TEMPORARY = (float )llvm_cbe__2e_ph29;   /* for PHI node */
  goto llvm_cbe__2e_loopexit9;

llvm_cbe__2e_thread_2e_preheader_2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = add nsw i32 %%storemerge412, -23, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__22 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(4294967273u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__22&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = sext i32 %%37 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__23 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
  llvm_cbe_tmp__160__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__23;   /* for PHI node */
  llvm_cbe__2e_ph29__PHI_TEMPORARY = (float )llvm_cbe_tmp__6;   /* for PHI node */
  goto llvm_cbe__2e_thread_2e_5;

llvm_cbe_tmp__212:
  goto llvm_cbe_tmp__209;

llvm_cbe_tmp__211:
  if ((((signed int )llvm_cbe_storemerge217) > ((signed int )0u))) {
    goto llvm_cbe_tmp__213;
  } else {
    goto llvm_cbe_tmp__212;
  }

llvm_cbe_tmp__213:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__10) < 140 && "Write access out of array 'aesl_internal_convolutional_layer1.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* %%16, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_156_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__30);
  goto llvm_cbe_tmp__212;

  } while (1); /* end of syntactic loop '.preheader11..preheader11.split_crit_edge' */
  } while (1); /* end of syntactic loop '.preheader11' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = add nsw i32 %%storemerge119, -4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )(llvm_cbe_storemerge119&4294967295ull)) + ((unsigned int )(4294967292u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__36&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = sext i32 %%62 to i64, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__37 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__38 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* %%64, align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__39 = (float )*llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__39, *(int*)(&llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* getelementptr inbounds ([6 x float]* @conv1_biases, i64 0, i64 0), align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__40 = (float )*((&conv1_biases[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__40, *(int*)(&llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = fadd float %%65, %%66, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__41 = (float )((float )(llvm_cbe_tmp__39 + llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = call float @relu(float %%67) nounwind, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__42 = (float )relu(llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
printf("\nReturn  = %f",llvm_cbe_tmp__42);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds [24 x [24 x float]]* %%dst, i64 0, i64 %%4, i64 %%63, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__43 = (float *)(&(*llvm_cbe_dst)[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__37))
#ifdef AESL_BC_SIM
 % 24
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 24 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__37) < 24 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%68, float* %%69, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_200_count);
  *llvm_cbe_tmp__43 = llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 1, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__44 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load float* %%70, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__45 = (float )*llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__45, *(int*)(&llvm_cbe_tmp__45));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* getelementptr inbounds ([6 x float]* @conv1_biases, i64 0, i64 1), align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__46 = (float )*((&conv1_biases[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__46, *(int*)(&llvm_cbe_tmp__46));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = fadd float %%71, %%72, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__47 = (float )((float )(llvm_cbe_tmp__45 + llvm_cbe_tmp__46));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = call float @relu(float %%73) nounwind, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__48 = (float )relu(llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
printf("\nReturn  = %f",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [24 x [24 x float]]* %%dst, i64 1, i64 %%4, i64 %%63, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__49 = (float *)(&llvm_cbe_dst[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__37))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 24 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__37) < 24 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* %%75, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_213_count);
  *llvm_cbe_tmp__49 = llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 2, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__50 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load float* %%76, align 8, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__51 = (float )*llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__51, *(int*)(&llvm_cbe_tmp__51));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load float* getelementptr inbounds ([6 x float]* @conv1_biases, i64 0, i64 2), align 8, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__52 = (float )*((&conv1_biases[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__52, *(int*)(&llvm_cbe_tmp__52));
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = fadd float %%77, %%78, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__53 = (float )((float )(llvm_cbe_tmp__51 + llvm_cbe_tmp__52));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = call float @relu(float %%79) nounwind, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__54 = (float )relu(llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
printf("\nReturn  = %f",llvm_cbe_tmp__54);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds [24 x [24 x float]]* %%dst, i64 2, i64 %%4, i64 %%63, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_225_count);
  llvm_cbe_tmp__55 = (float *)(&llvm_cbe_dst[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__37))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 24 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__37) < 24 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%80, float* %%81, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_226_count);
  *llvm_cbe_tmp__55 = llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 3, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__56 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load float* %%82, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__57 = (float )*llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__57, *(int*)(&llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load float* getelementptr inbounds ([6 x float]* @conv1_biases, i64 0, i64 3), align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__58 = (float )*((&conv1_biases[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__58, *(int*)(&llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = fadd float %%83, %%84, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__59 = (float )((float )(llvm_cbe_tmp__57 + llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = call float @relu(float %%85) nounwind, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__60 = (float )relu(llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
printf("\nReturn  = %f",llvm_cbe_tmp__60);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds [24 x [24 x float]]* %%dst, i64 3, i64 %%4, i64 %%63, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__61 = (float *)(&llvm_cbe_dst[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__37))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 24 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__37) < 24 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%86, float* %%87, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_239_count);
  *llvm_cbe_tmp__61 = llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_246_count);
  llvm_cbe_tmp__62 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load float* %%88, align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_247_count);
  llvm_cbe_tmp__63 = (float )*llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* getelementptr inbounds ([6 x float]* @conv1_biases, i64 0, i64 4), align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__64 = (float )*((&conv1_biases[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__64, *(int*)(&llvm_cbe_tmp__64));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = fadd float %%89, %%90, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_249_count);
  llvm_cbe_tmp__65 = (float )((float )(llvm_cbe_tmp__63 + llvm_cbe_tmp__64));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = call float @relu(float %%91) nounwind, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__66 = (float )relu(llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
printf("\nReturn  = %f",llvm_cbe_tmp__66);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds [24 x [24 x float]]* %%dst, i64 4, i64 %%4, i64 %%63, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__67 = (float *)(&llvm_cbe_dst[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__37))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 24 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__37) < 24 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%92, float* %%93, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_252_count);
  *llvm_cbe_tmp__67 = llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = getelementptr inbounds [6 x float]* %%out_val, i64 0, i64 5, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__68 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load float* %%94, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__69 = (float )*llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__69, *(int*)(&llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = load float* getelementptr inbounds ([6 x float]* @conv1_biases, i64 0, i64 5), align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__70 = (float )*((&conv1_biases[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__70, *(int*)(&llvm_cbe_tmp__70));
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = fadd float %%95, %%96, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__71 = (float )((float )(llvm_cbe_tmp__69 + llvm_cbe_tmp__70));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = call float @relu(float %%97) nounwind, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__72 = (float )relu(llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
printf("\nReturn  = %f",llvm_cbe_tmp__72);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = getelementptr inbounds [24 x [24 x float]]* %%dst, i64 5, i64 %%4, i64 %%63, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__73 = (float *)(&llvm_cbe_dst[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
][(((signed long long )llvm_cbe_tmp__37))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 24 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__37) < 24 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%98, float* %%99, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer1  --> \n", ++aesl_llvm_cbe_265_count);
  *llvm_cbe_tmp__73 = llvm_cbe_tmp__72;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__72);
  goto llvm_cbe_tmp__200;

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader18' */
llvm_cbe_tmp__199:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @convolutional_layer1}\n");
  return;
}


void convolutional_layer2(float (*llvm_cbe_src)[12], float (*llvm_cbe_dst)[8][8], float (*llvm_cbe_weights)[5][5]) {
  static  unsigned long long aesl_llvm_cbe_out_val_count = 0;
  float llvm_cbe_out_val[10];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  unsigned long long llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  unsigned int llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  unsigned long long llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  unsigned long long llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  float *llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  float llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge213_count = 0;
  unsigned int llvm_cbe_storemerge213;
  unsigned int llvm_cbe_storemerge213__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  unsigned int llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  unsigned int llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  unsigned long long llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  float *llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  unsigned long long llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge412_count = 0;
  unsigned int llvm_cbe_storemerge412;
  unsigned int llvm_cbe_storemerge412__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  unsigned int llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  unsigned long long llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  float *llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  float llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_ph_count = 0;
  float llvm_cbe__2e_ph;
  float llvm_cbe__2e_ph__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_count = 0;
  bool llvm_cbe_or_2e_cond6;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  unsigned int llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  unsigned long long llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge510_count = 0;
  unsigned int llvm_cbe_storemerge510;
  unsigned int llvm_cbe_storemerge510__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  unsigned long long llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  float *llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  float llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  float llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  float *llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  unsigned long long llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  float *llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  float llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  float llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  float *llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  float llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  float llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  unsigned int llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  float llvm_cbe_tmp__244;
  float llvm_cbe_tmp__244__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  unsigned int llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  unsigned long long llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  float *llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  unsigned int llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  unsigned int llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond7_count = 0;
  bool llvm_cbe_or_2e_cond7;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  unsigned int llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  unsigned long long llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  float *llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  float llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  float *llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  float llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  float llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  float *llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  float llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  float *llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  float llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  float llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  float *llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  float llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  float *llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  float llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  float llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  float *llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  float llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  float *llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  float llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  float llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  float *llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  float llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  float *llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  float llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  float llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  float *llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  float llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  float *llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  float llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  float llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  float *llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  float llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  float *llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  float llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  float llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  float *llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  float llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  float *llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  float llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  float llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  float *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  float llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  float *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  float llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  float llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  float *llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  float llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  float *llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  float llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  float llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  unsigned int llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  unsigned int llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond20_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @convolutional_layer2\n");
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader14;

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%0 ], [ %%114, %%113  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__303);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge16 to i64, !dbg !6 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_627_count);
  llvm_cbe_tmp__214 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add nsw i32 %%storemerge16, -4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_629_count);
  llvm_cbe_tmp__215 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(4294967292u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__215&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%3 to i64, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_630_count);
  llvm_cbe_tmp__216 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__216);
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__304;

llvm_cbe_tmp__305:
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = add nsw i32 %%storemerge16, 1, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_887_count);
  llvm_cbe_tmp__303 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__303&4294967295ull)));
  if (((llvm_cbe_tmp__303&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__306;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__303;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__304:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%.preheader14 ], [ %%112, %%111  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__302);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge115 to i64, !dbg !6 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_632_count);
  llvm_cbe_tmp__217 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [12 x float]* %%src, i64 %%1, i64 %%6, !dbg !6 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_633_count);
  llvm_cbe_tmp__218 = (float *)(&llvm_cbe_src[(((signed long long )llvm_cbe_tmp__214))
#ifdef AESL_BC_SIM
 % 12
#endif
][(((signed long long )llvm_cbe_tmp__217))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__214));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__217) < 12)) fprintf(stderr, "%s:%d: warning: Read access out of array 'src' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !6 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_634_count);
  llvm_cbe_tmp__219 = (float )*llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__219, *(int*)(&llvm_cbe_tmp__219));
  llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader11;

llvm_cbe_tmp__307:
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = add nsw i32 %%storemerge115, 1, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_879_count);
  llvm_cbe_tmp__302 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__302&4294967295ull)));
  if (((llvm_cbe_tmp__302&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__305;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__302;   /* for PHI node */
    goto llvm_cbe_tmp__304;
  }

llvm_cbe_tmp__308:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond7 = and i1 %%2, %%58, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_or_2e_cond7_count);
  llvm_cbe_or_2e_cond7 = (bool )(((((signed int )llvm_cbe_storemerge16) > ((signed int )3u)) & (((signed int )llvm_cbe_storemerge115) > ((signed int )3u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond7 = 0x%X\n", llvm_cbe_or_2e_cond7);
  if (llvm_cbe_or_2e_cond7) {
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe_tmp__307;
  }

  do {     /* Syntactic loop '.preheader11' to make GCC happy */
llvm_cbe__2e_preheader11:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge213 = phi i32 [ 0, %%5 ], [ %%56, %%55  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_storemerge213_count);
  llvm_cbe_storemerge213 = (unsigned int )llvm_cbe_storemerge213__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge213 = 0x%X",llvm_cbe_storemerge213);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__249);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = mul nsw i32 %%storemerge213, 12, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_660_count);
  llvm_cbe_tmp__220 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) * ((unsigned int )(12u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__220&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i32 %%10, -1, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_661_count);
  llvm_cbe_tmp__221 = (unsigned int )((unsigned int )(llvm_cbe_tmp__220&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__221&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%11 to i64, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_663_count);
  llvm_cbe_tmp__222 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [60 x float]* @aesl_internal_convolutional_layer2.linebuf, i64 0, i64 %%13, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_664_count);
  llvm_cbe_tmp__223 = (float *)(&aesl_internal_convolutional_layer2_OC_linebuf[(((signed long long )llvm_cbe_tmp__222))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__222));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i32 %%storemerge213 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_666_count);
  llvm_cbe_tmp__224 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__224);
  llvm_cbe_storemerge412__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__309;

llvm_cbe_tmp__310:
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add nsw i32 %%storemerge213, 1, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_747_count);
  llvm_cbe_tmp__249 = (unsigned int )((unsigned int )(llvm_cbe_storemerge213&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__249&4294967295ull)));
  if (((llvm_cbe_tmp__249&4294967295U) == (5u&4294967295U))) {
    goto llvm_cbe_tmp__308;
  } else {
    llvm_cbe_storemerge213__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__249;   /* for PHI node */
    goto llvm_cbe__2e_preheader11;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__309:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge412 = phi i32 [ 0, %%.preheader11 ], [ %%54, %%53  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_storemerge412_count);
  llvm_cbe_storemerge412 = (unsigned int )llvm_cbe_storemerge412__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge412 = 0x%X",llvm_cbe_storemerge412);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__248);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = or i1 %%9, %%18, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_storemerge213) < ((signed int )4u)) | (((signed int )llvm_cbe_storemerge412) < ((signed int )11u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe_tmp__311;
  } else {
    llvm_cbe__2e_ph__PHI_TEMPORARY = (float )llvm_cbe_tmp__219;   /* for PHI node */
    goto llvm_cbe__2e_thread_2e_preheader;
  }

llvm_cbe_tmp__312:
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = add nsw i32 %%storemerge412, 1, !dbg !12 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_734_count);
  llvm_cbe_tmp__248 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__248&4294967295ull)));
  if (((llvm_cbe_tmp__248&4294967295U) == (12u&4294967295U))) {
    goto llvm_cbe_tmp__310;
  } else {
    llvm_cbe_storemerge412__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__248;   /* for PHI node */
    goto llvm_cbe_tmp__309;
  }

llvm_cbe_tmp__313:
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add i32 %%11, %%storemerge412, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_725_count);
  llvm_cbe_tmp__245 = (unsigned int )((unsigned int )(llvm_cbe_tmp__221&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge412&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__245&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = sext i32 %%47 to i64, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_726_count);
  llvm_cbe_tmp__246 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [60 x float]* @aesl_internal_convolutional_layer2.linebuf, i64 0, i64 %%48, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_727_count);
  llvm_cbe_tmp__247 = (float *)(&aesl_internal_convolutional_layer2_OC_linebuf[(((signed long long )llvm_cbe_tmp__246))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__246));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__246) < 60 && "Write access out of array 'aesl_internal_convolutional_layer2.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%44, float* %%49, align 4, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_728_count);
  *llvm_cbe_tmp__247 = llvm_cbe_tmp__244;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__244);
  goto llvm_cbe_tmp__312;

llvm_cbe__2e_loopexit9:
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = phi float [ %%23, %%19 ], [ %%.ph, %%.thread  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_722_count);
  llvm_cbe_tmp__244 = (float )llvm_cbe_tmp__244__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__244);
printf("\n = %f",llvm_cbe_tmp__228);
printf("\n.ph = %f",llvm_cbe__2e_ph);
}
  if ((((signed int )llvm_cbe_storemerge412) > ((signed int )0u))) {
    goto llvm_cbe_tmp__313;
  } else {
    goto llvm_cbe_tmp__314;
  }

llvm_cbe_tmp__311:
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge412, %%10, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_670_count);
  llvm_cbe_tmp__225 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__220&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__225&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i32 %%20 to i64, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_671_count);
  llvm_cbe_tmp__226 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds [60 x float]* @aesl_internal_convolutional_layer2.linebuf, i64 0, i64 %%21, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_672_count);
  llvm_cbe_tmp__227 = (float *)(&aesl_internal_convolutional_layer2_OC_linebuf[(((signed long long )llvm_cbe_tmp__226))
#ifdef AESL_BC_SIM
 % 60
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__226));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__226) < 60)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_convolutional_layer2.linebuf' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load float* %%22, align 4, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__228 = (float )*llvm_cbe_tmp__227;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__228, *(int*)(&llvm_cbe_tmp__228));
  if ((((signed int )llvm_cbe_storemerge412) > ((signed int )6u))) {
    llvm_cbe__2e_ph__PHI_TEMPORARY = (float )llvm_cbe_tmp__228;   /* for PHI node */
    goto llvm_cbe__2e_thread_2e_preheader;
  } else {
    llvm_cbe_tmp__244__PHI_TEMPORARY = (float )llvm_cbe_tmp__228;   /* for PHI node */
    goto llvm_cbe__2e_loopexit9;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__315:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge510 = phi i32 [ 0, %%.thread.preheader ], [ %%43, %%.thread  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_storemerge510_count);
  llvm_cbe_storemerge510 = (unsigned int )llvm_cbe_storemerge510__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge510 = 0x%X",llvm_cbe_storemerge510);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__243);
}
  if (llvm_cbe_or_2e_cond6) {
    goto llvm_cbe_tmp__316;
  } else {
    goto llvm_cbe_tmp__317;
  }

llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add nsw i32 %%storemerge510, 1, !dbg !12 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__243 = (unsigned int )((unsigned int )(llvm_cbe_storemerge510&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__243&4294967295ull)));
  if (((llvm_cbe_tmp__243&4294967295U) == (10u&4294967295U))) {
    llvm_cbe_tmp__244__PHI_TEMPORARY = (float )llvm_cbe__2e_ph;   /* for PHI node */
    goto llvm_cbe__2e_loopexit9;
  } else {
    llvm_cbe_storemerge510__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__243;   /* for PHI node */
    goto llvm_cbe_tmp__315;
  }

llvm_cbe_tmp__316:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%storemerge510 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_697_count);
  llvm_cbe_tmp__231 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge510);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [5 x [5 x float]]* %%weights, i64 %%30, i64 %%16, i64 %%27, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_698_count);
  llvm_cbe_tmp__232 = (float *)(&llvm_cbe_weights[(((signed long long )llvm_cbe_tmp__231))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__224))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__230))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__231));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__224));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__230));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__224) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__230) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load float* %%31, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_699_count);
  llvm_cbe_tmp__233 = (float )*llvm_cbe_tmp__232;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__233, *(int*)(&llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = fmul float %%.ph, %%32, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_700_count);
  llvm_cbe_tmp__234 = (float )((float )(llvm_cbe__2e_ph * llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__234, *(int*)(&llvm_cbe_tmp__234));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 %%30, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_701_count);
  llvm_cbe_tmp__235 = (float *)(&llvm_cbe_out_val[(((signed long long )llvm_cbe_tmp__231))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__231));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__231) < 10 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%33, float* %%34, align 4, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_702_count);
  *llvm_cbe_tmp__235 = llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__234);
  goto llvm_cbe__2e_thread;

llvm_cbe_tmp__317:
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = sext i32 %%storemerge510 to i64, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_704_count);
  llvm_cbe_tmp__236 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge510);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [5 x [5 x float]]* %%weights, i64 %%36, i64 %%16, i64 %%27, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_705_count);
  llvm_cbe_tmp__237 = (float *)(&llvm_cbe_weights[(((signed long long )llvm_cbe_tmp__236))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__224))
#ifdef AESL_BC_SIM
 % 5
#endif
][(((signed long long )llvm_cbe_tmp__230))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__236));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__224));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__230));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__224) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__230) < 5)) fprintf(stderr, "%s:%d: warning: Read access out of array 'weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_706_count);
  llvm_cbe_tmp__238 = (float )*llvm_cbe_tmp__237;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__238, *(int*)(&llvm_cbe_tmp__238));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = fmul float %%.ph, %%38, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_707_count);
  llvm_cbe_tmp__239 = (float )((float )(llvm_cbe__2e_ph * llvm_cbe_tmp__238));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__239, *(int*)(&llvm_cbe_tmp__239));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 %%36, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__240 = (float *)(&llvm_cbe_out_val[(((signed long long )llvm_cbe_tmp__236))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__236));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__236) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load float* %%40, align 4, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_709_count);
  llvm_cbe_tmp__241 = (float )*llvm_cbe_tmp__240;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__241, *(int*)(&llvm_cbe_tmp__241));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = fadd float %%41, %%39, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__242 = (float )((float )(llvm_cbe_tmp__241 + llvm_cbe_tmp__239));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__242, *(int*)(&llvm_cbe_tmp__242));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__236) < 10 && "Write access out of array 'out_val' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%42, float* %%40, align 4, !dbg !9 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_711_count);
  *llvm_cbe_tmp__240 = llvm_cbe_tmp__242;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__242);
  goto llvm_cbe__2e_thread;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_thread_2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%.ph = phi float [ %%8, %%17 ], [ %%23, %%19  for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe__2e_ph_count);
  llvm_cbe__2e_ph = (float )llvm_cbe__2e_ph__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.ph = %f",llvm_cbe__2e_ph);
printf("\n = %f",llvm_cbe_tmp__219);
printf("\n = %f",llvm_cbe_tmp__228);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6 = and i1 %%15, %%25, !dbg !10 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_or_2e_cond6_count);
  llvm_cbe_or_2e_cond6 = (bool )((((llvm_cbe_storemerge213&4294967295U) == (0u&4294967295U)) & ((llvm_cbe_storemerge412&4294967295U) == (7u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6 = 0x%X\n", llvm_cbe_or_2e_cond6);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = add nsw i32 %%storemerge412, -7, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_693_count);
  llvm_cbe_tmp__229 = (unsigned int )((unsigned int )(llvm_cbe_storemerge412&4294967295ull)) + ((unsigned int )(4294967289u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__229&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = sext i32 %%26 to i64, !dbg !8 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_694_count);
  llvm_cbe_tmp__230 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__229);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__230);
  llvm_cbe_storemerge510__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__315;

llvm_cbe_tmp__318:
  goto llvm_cbe_tmp__312;

llvm_cbe_tmp__314:
  if ((((signed int )llvm_cbe_storemerge213) > ((signed int )0u))) {
    goto llvm_cbe_tmp__319;
  } else {
    goto llvm_cbe_tmp__318;
  }

llvm_cbe_tmp__319:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__222) < 60 && "Write access out of array 'aesl_internal_convolutional_layer2.linebuf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%44, float* %%14, align 4, !dbg !11 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_731_count);
  *llvm_cbe_tmp__223 = llvm_cbe_tmp__244;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__244);
  goto llvm_cbe_tmp__318;

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader11' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge115, -4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__250 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(4294967292u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__250&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = sext i32 %%59 to i64, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__251 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__252 = (float *)(&llvm_cbe_out_val[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* %%61, align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_769_count);
  llvm_cbe_tmp__253 = (float )*llvm_cbe_tmp__252;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__253, *(int*)(&llvm_cbe_tmp__253));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 0, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_770_count);
  llvm_cbe_tmp__254 = (float *)(&(*llvm_cbe_dst)[(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load float* %%63, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_771_count);
  llvm_cbe_tmp__255 = (float )*llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__255, *(int*)(&llvm_cbe_tmp__255));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = fadd float %%64, %%62, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_772_count);
  llvm_cbe_tmp__256 = (float )((float )(llvm_cbe_tmp__255 + llvm_cbe_tmp__253));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__256, *(int*)(&llvm_cbe_tmp__256));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%65, float* %%63, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_773_count);
  *llvm_cbe_tmp__254 = llvm_cbe_tmp__256;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 1, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_779_count);
  llvm_cbe_tmp__257 = (float *)(&llvm_cbe_out_val[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load float* %%66, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_780_count);
  llvm_cbe_tmp__258 = (float )*llvm_cbe_tmp__257;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__258, *(int*)(&llvm_cbe_tmp__258));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 1, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_781_count);
  llvm_cbe_tmp__259 = (float *)(&llvm_cbe_dst[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load float* %%68, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_782_count);
  llvm_cbe_tmp__260 = (float )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__260, *(int*)(&llvm_cbe_tmp__260));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = fadd float %%69, %%67, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_783_count);
  llvm_cbe_tmp__261 = (float )((float )(llvm_cbe_tmp__260 + llvm_cbe_tmp__258));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__261, *(int*)(&llvm_cbe_tmp__261));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%70, float* %%68, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_784_count);
  *llvm_cbe_tmp__259 = llvm_cbe_tmp__261;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 2, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__262 = (float *)(&llvm_cbe_out_val[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* %%71, align 8, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__263 = (float )*llvm_cbe_tmp__262;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__263, *(int*)(&llvm_cbe_tmp__263));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 2, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_792_count);
  llvm_cbe_tmp__264 = (float *)(&llvm_cbe_dst[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* %%73, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_793_count);
  llvm_cbe_tmp__265 = (float )*llvm_cbe_tmp__264;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__265, *(int*)(&llvm_cbe_tmp__265));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = fadd float %%74, %%72, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__266 = (float )((float )(llvm_cbe_tmp__265 + llvm_cbe_tmp__263));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__266, *(int*)(&llvm_cbe_tmp__266));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%75, float* %%73, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_795_count);
  *llvm_cbe_tmp__264 = llvm_cbe_tmp__266;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 3, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_801_count);
  llvm_cbe_tmp__267 = (float *)(&llvm_cbe_out_val[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load float* %%76, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_802_count);
  llvm_cbe_tmp__268 = (float )*llvm_cbe_tmp__267;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__268, *(int*)(&llvm_cbe_tmp__268));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 3, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_803_count);
  llvm_cbe_tmp__269 = (float *)(&llvm_cbe_dst[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load float* %%78, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_804_count);
  llvm_cbe_tmp__270 = (float )*llvm_cbe_tmp__269;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__270, *(int*)(&llvm_cbe_tmp__270));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = fadd float %%79, %%77, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_805_count);
  llvm_cbe_tmp__271 = (float )((float )(llvm_cbe_tmp__270 + llvm_cbe_tmp__268));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__271, *(int*)(&llvm_cbe_tmp__271));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%80, float* %%78, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_806_count);
  *llvm_cbe_tmp__269 = llvm_cbe_tmp__271;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_812_count);
  llvm_cbe_tmp__272 = (float *)(&llvm_cbe_out_val[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load float* %%81, align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__273 = (float )*llvm_cbe_tmp__272;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__273, *(int*)(&llvm_cbe_tmp__273));
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 4, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__274 = (float *)(&llvm_cbe_dst[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load float* %%83, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__275 = (float )*llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__275, *(int*)(&llvm_cbe_tmp__275));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = fadd float %%84, %%82, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_816_count);
  llvm_cbe_tmp__276 = (float )((float )(llvm_cbe_tmp__275 + llvm_cbe_tmp__273));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__276, *(int*)(&llvm_cbe_tmp__276));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%85, float* %%83, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_817_count);
  *llvm_cbe_tmp__274 = llvm_cbe_tmp__276;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 5, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__277 = (float *)(&llvm_cbe_out_val[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )5ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = load float* %%86, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__278 = (float )*llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__278, *(int*)(&llvm_cbe_tmp__278));
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 5, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__279 = (float *)(&llvm_cbe_dst[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load float* %%88, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_826_count);
  llvm_cbe_tmp__280 = (float )*llvm_cbe_tmp__279;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__280, *(int*)(&llvm_cbe_tmp__280));
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = fadd float %%89, %%87, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__281 = (float )((float )(llvm_cbe_tmp__280 + llvm_cbe_tmp__278));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__281, *(int*)(&llvm_cbe_tmp__281));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%90, float* %%88, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_828_count);
  *llvm_cbe_tmp__279 = llvm_cbe_tmp__281;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 6, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_834_count);
  llvm_cbe_tmp__282 = (float *)(&llvm_cbe_out_val[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )6ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load float* %%91, align 8, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_835_count);
  llvm_cbe_tmp__283 = (float )*llvm_cbe_tmp__282;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__283, *(int*)(&llvm_cbe_tmp__283));
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 6, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_836_count);
  llvm_cbe_tmp__284 = (float *)(&llvm_cbe_dst[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = load float* %%93, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_837_count);
  llvm_cbe_tmp__285 = (float )*llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__285, *(int*)(&llvm_cbe_tmp__285));
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = fadd float %%94, %%92, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_838_count);
  llvm_cbe_tmp__286 = (float )((float )(llvm_cbe_tmp__285 + llvm_cbe_tmp__283));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__286, *(int*)(&llvm_cbe_tmp__286));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%95, float* %%93, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_839_count);
  *llvm_cbe_tmp__284 = llvm_cbe_tmp__286;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 7, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_845_count);
  llvm_cbe_tmp__287 = (float *)(&llvm_cbe_out_val[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )7ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = load float* %%96, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_846_count);
  llvm_cbe_tmp__288 = (float )*llvm_cbe_tmp__287;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__288, *(int*)(&llvm_cbe_tmp__288));
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 7, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_847_count);
  llvm_cbe_tmp__289 = (float *)(&llvm_cbe_dst[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load float* %%98, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_848_count);
  llvm_cbe_tmp__290 = (float )*llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__290, *(int*)(&llvm_cbe_tmp__290));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = fadd float %%99, %%97, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_849_count);
  llvm_cbe_tmp__291 = (float )((float )(llvm_cbe_tmp__290 + llvm_cbe_tmp__288));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__291, *(int*)(&llvm_cbe_tmp__291));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%100, float* %%98, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_850_count);
  *llvm_cbe_tmp__289 = llvm_cbe_tmp__291;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 8, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_856_count);
  llvm_cbe_tmp__292 = (float *)(&llvm_cbe_out_val[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )8ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load float* %%101, align 16, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_857_count);
  llvm_cbe_tmp__293 = (float )*llvm_cbe_tmp__292;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__293, *(int*)(&llvm_cbe_tmp__293));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 8, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_858_count);
  llvm_cbe_tmp__294 = (float *)(&llvm_cbe_dst[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = load float* %%103, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_859_count);
  llvm_cbe_tmp__295 = (float )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__295, *(int*)(&llvm_cbe_tmp__295));
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = fadd float %%104, %%102, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_860_count);
  llvm_cbe_tmp__296 = (float )((float )(llvm_cbe_tmp__295 + llvm_cbe_tmp__293));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__296, *(int*)(&llvm_cbe_tmp__296));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%105, float* %%103, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_861_count);
  *llvm_cbe_tmp__294 = llvm_cbe_tmp__296;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__296);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = getelementptr inbounds [10 x float]* %%out_val, i64 0, i64 9, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_867_count);
  llvm_cbe_tmp__297 = (float *)(&llvm_cbe_out_val[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )9ull) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'out_val' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = load float* %%106, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_868_count);
  llvm_cbe_tmp__298 = (float )*llvm_cbe_tmp__297;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__298, *(int*)(&llvm_cbe_tmp__298));
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = getelementptr inbounds [8 x [8 x float]]* %%dst, i64 9, i64 %%4, i64 %%60, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_869_count);
  llvm_cbe_tmp__299 = (float *)(&llvm_cbe_dst[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 8
#endif
][(((signed long long )llvm_cbe_tmp__251))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__251) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dst' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = load float* %%108, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_870_count);
  llvm_cbe_tmp__300 = (float )*llvm_cbe_tmp__299;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__300, *(int*)(&llvm_cbe_tmp__300));
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = fadd float %%109, %%107, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_871_count);
  llvm_cbe_tmp__301 = (float )((float )(llvm_cbe_tmp__300 + llvm_cbe_tmp__298));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__301, *(int*)(&llvm_cbe_tmp__301));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__216) < 8 && "Write access out of array 'dst' bound?");
  assert(((signed long long )llvm_cbe_tmp__251) < 8 && "Write access out of array 'dst' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%110, float* %%108, align 4, !dbg !7 for 0x%I64xth hint within @convolutional_layer2  --> \n", ++aesl_llvm_cbe_872_count);
  *llvm_cbe_tmp__299 = llvm_cbe_tmp__301;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__301);
  goto llvm_cbe_tmp__307;

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader14' */
llvm_cbe_tmp__306:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @convolutional_layer2}\n");
  return;
}

