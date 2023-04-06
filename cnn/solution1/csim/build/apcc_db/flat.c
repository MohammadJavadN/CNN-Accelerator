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
void flattening_layer(float (*llvm_cbe_pool_features)[14][14], float *llvm_cbe_flat_array);


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

void flattening_layer(float (*llvm_cbe_pool_features)[14][14], float *llvm_cbe_flat_array) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge7_count = 0;
  unsigned int llvm_cbe_storemerge7;
  unsigned int llvm_cbe_storemerge7__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  unsigned int llvm_cbe_tmp__1;
  unsigned int llvm_cbe_tmp__1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned int llvm_cbe_tmp__4;
  unsigned int llvm_cbe_tmp__4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  float *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  float llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  float *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  float *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  float *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  float *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  float *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  float *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  float *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  float llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  float *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  float *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  float llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  float *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  float *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned long long llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  float *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  float *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  float *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned long long llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  float *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  unsigned int llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  float *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  float *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  float *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  float llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  float *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  float *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  float llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned long long llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  float *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  float *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned long long llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  float *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  float *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  float llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned long long llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  float *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond8_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @flattening_layer\n");
  llvm_cbe_storemerge7__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader4;

  do {     /* Syntactic loop '.preheader4' to make GCC happy */
llvm_cbe__2e_preheader4:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge7 = phi i32 [ 0, %%0 ], [ %%78, %%77  for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_storemerge7_count);
  llvm_cbe_storemerge7 = (unsigned int )llvm_cbe_storemerge7__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge7 = 0x%X",llvm_cbe_storemerge7);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__77);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = phi i32 [ 0, %%0 ], [ %%3, %%77  for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__1 = (unsigned int )llvm_cbe_tmp__1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge7 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge7);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add i32 %%1, 196, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__3 = (unsigned int )((unsigned int )(llvm_cbe_tmp__1&4294967295ull)) + ((unsigned int )(196u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__3&4294967295ull)));
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__1;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

llvm_cbe_tmp__78:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = add nsw i32 %%storemerge7, 1, !dbg !4 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__77 = (unsigned int )((unsigned int )(llvm_cbe_storemerge7&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__77&4294967295ull)));
  if (((llvm_cbe_tmp__77&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe_tmp__79;
  } else {
    llvm_cbe_storemerge7__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__77;   /* for PHI node */
    llvm_cbe_tmp__1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__3;   /* for PHI node */
    goto llvm_cbe__2e_preheader4;
  }

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%.preheader4 ], [ %%76, %%.preheader  for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__76);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = phi i32 [ %%1, %%.preheader4 ], [ %%6, %%.preheader  for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__4 = (unsigned int )llvm_cbe_tmp__4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__4);
printf("\n = 0x%X",llvm_cbe_tmp__1);
printf("\n = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge16 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__5 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i32 %%4, 14, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_tmp__4&4294967295ull)) + ((unsigned int )(14u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 0, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__7 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__8 = (float )*llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__8, *(int*)(&llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%4 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__9 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds float* %%flat_array, i64 %%9, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__10 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__9))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%8, float* %%10, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_31_count);
  *llvm_cbe_tmp__10 = llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = or i32 %%4, 1, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__11 = (unsigned int )llvm_cbe_tmp__4 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 1, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__12 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )1ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load float* %%12, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__13 = (float )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%11 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__14 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds float* %%flat_array, i64 %%14, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__15 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__14))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%13, float* %%15, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_43_count);
  *llvm_cbe_tmp__15 = llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%11, 1, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__16 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__16&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 2, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__17 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )2ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* %%17, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__18 = (float )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__18, *(int*)(&llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sext i32 %%16 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__19 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds float* %%flat_array, i64 %%19, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__20 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__19))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%18, float* %%20, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_55_count);
  *llvm_cbe_tmp__20 = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%11, 2, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__21 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__21&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 3, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__22 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )3ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load float* %%22, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__23 = (float )*llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = sext i32 %%21 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__24 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds float* %%flat_array, i64 %%24, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__25 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__24))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__24));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%23, float* %%25, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_67_count);
  *llvm_cbe_tmp__25 = llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = add nsw i32 %%11, 3, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__26 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__26&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__27 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )4ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )4ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__28 = (float )*llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__28, *(int*)(&llvm_cbe_tmp__28));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sext i32 %%26 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__29 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds float* %%flat_array, i64 %%29, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__30 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__29))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* %%30, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_79_count);
  *llvm_cbe_tmp__30 = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%11, 4, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__31 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__31&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 5, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__32 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )5ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )5ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load float* %%32, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__33 = (float )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__33, *(int*)(&llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%31 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__34 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds float* %%flat_array, i64 %%34, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__35 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__34))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__34));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%33, float* %%35, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_91_count);
  *llvm_cbe_tmp__35 = llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add nsw i32 %%11, 5, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__36&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 6, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__37 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )6ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )6ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* %%37, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__38 = (float )*llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__38, *(int*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%36 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__39 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds float* %%flat_array, i64 %%39, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__40 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__39))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__39));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%38, float* %%40, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_103_count);
  *llvm_cbe_tmp__40 = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add nsw i32 %%11, 6, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__41 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__41&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 7, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__42 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )7ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )7ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__43 = (float )*llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = sext i32 %%41 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__44 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds float* %%flat_array, i64 %%44, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__45 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__44))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%43, float* %%45, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_115_count);
  *llvm_cbe_tmp__45 = llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add nsw i32 %%11, 7, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__46 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__46&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 8, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__47 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )8ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )8ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* %%47, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__48 = (float )*llvm_cbe_tmp__47;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__48, *(int*)(&llvm_cbe_tmp__48));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = sext i32 %%46 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__49 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds float* %%flat_array, i64 %%49, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__50 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__49))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__49));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* %%50, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_127_count);
  *llvm_cbe_tmp__50 = llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = add nsw i32 %%11, 8, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__51 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__51&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 9, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__52 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )9ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )9ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load float* %%52, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__53 = (float )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = sext i32 %%51 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__54 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds float* %%flat_array, i64 %%54, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_138_count);
  llvm_cbe_tmp__55 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__54))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__54));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%53, float* %%55, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_139_count);
  *llvm_cbe_tmp__55 = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add nsw i32 %%11, 9, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__56 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__56&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 10, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__57 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )10ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )10ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load float* %%57, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__58 = (float )*llvm_cbe_tmp__57;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__58, *(int*)(&llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = sext i32 %%56 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__59 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds float* %%flat_array, i64 %%59, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__60 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__59))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__59));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%58, float* %%60, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_151_count);
  *llvm_cbe_tmp__60 = llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = add nsw i32 %%11, 10, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__61 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(10u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__61&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 11, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_159_count);
  llvm_cbe_tmp__62 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )11ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )11ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* %%62, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__63 = (float )*llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = sext i32 %%61 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__64 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds float* %%flat_array, i64 %%64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__65 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__64))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__64));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%63, float* %%65, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_163_count);
  *llvm_cbe_tmp__65 = llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = add nsw i32 %%11, 11, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__66 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(11u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__66&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 12, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__67 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )12ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )12ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* %%67, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__68 = (float )*llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__68, *(int*)(&llvm_cbe_tmp__68));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = sext i32 %%66 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__69 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds float* %%flat_array, i64 %%69, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__70 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__69))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__69));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%68, float* %%70, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_175_count);
  *llvm_cbe_tmp__70 = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = add nsw i32 %%11, 12, !dbg !3 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__71 = (unsigned int )((unsigned int )(llvm_cbe_tmp__11&4294967295ull)) + ((unsigned int )(12u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__71&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds [14 x [14 x float]]* %%pool_features, i64 %%2, i64 %%5, i64 13, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__72 = (float *)(&llvm_cbe_pool_features[(((signed long long )llvm_cbe_tmp__2))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 14
#endif
][(((signed long long )13ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )13ull) < 14)) fprintf(stderr, "%s:%d: warning: Read access out of array 'pool_features' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = load float* %%72, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__73 = (float )*llvm_cbe_tmp__72;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = sext i32 %%71 to i64, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__74 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds float* %%flat_array, i64 %%74, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__75 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__74))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__74));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%73, float* %%75, align 4, !dbg !2 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_187_count);
  *llvm_cbe_tmp__75 = llvm_cbe_tmp__73;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = add nsw i32 %%storemerge16, 1, !dbg !4 for 0x%I64xth hint within @flattening_layer  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__76 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__76&4294967295ull)));
  if (((llvm_cbe_tmp__76&4294967295U) == (14u&4294967295U))) {
    goto llvm_cbe_tmp__78;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__76;   /* for PHI node */
    llvm_cbe_tmp__4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__6;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader4' */
llvm_cbe_tmp__79:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @flattening_layer}\n");
  return;
}

