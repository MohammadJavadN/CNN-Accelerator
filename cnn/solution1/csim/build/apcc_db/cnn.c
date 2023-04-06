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
extern float conv2_weights[6][10][5][5];
extern float conv2_biases[10];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void cnn(float (*llvm_cbe_img_in)[28], float *llvm_cbe_prediction);
void normalization(float (*)[28], float (*)[28]);
void convolutional_layer1(float (*)[28], float (*)[24][24]);
void max_pooling_layer1(float (*)[24][24], float (*)[12][12]);
void convolutional_layer2(float (*)[12], float (*)[8][8], float (*)[5][5]);
void max_pooling_layer2(float (*)[8][8], float (*)[4][4], float *);
void flattening_layer(float (*)[4][4], float *);
void dense_layer(float *, float *);


/* Global Variable Definitions and Initialization */
float conv2_weights[6][10][5][5] = { { { { 0x1.668376p-3, 0x1.be4e34p-3, 0x1.60b7cep-3, -0x1.5a60d6p-3, -0x1.57c666p-2 }, { -0x1.ca8562p-5, 0x1.5dd692p-4, -0x1.883968p-2, -0x1.1c3952p-6, -0x1.bb2242p-2 }, { 0x1.e9447ap-4, 0x1.eba9fap-2, -0x1.0906dcp-4, -0x1.48aed8p-2, 0x1.19bb9p-4 }, { -0x1.7a7eb8p-2, 0x1.312a96p-3, 0x1.a8bdb6p-5, 0x1.170d24p-5, 0x1.ffdaf6p-4 }, { 0x1.62c4fp-3, -0x1.3e7ac2p-2, 0x1.095552p-6, 0x1.2070e2p-2, 0x1.97180ep-2 } }, { { -0x1.af29bcp-5, -0x1.025b22p0, -0x1.6e60b6p-2, -0x1.6daa8p-4, -0x1.833ae4p-2 }, { 0x1.825bap-3, -0x1.4b0d96p-7, -0x1.c3e394p-3, -0x1.80bc9ap-2, -0x1.536fb6p-2 }, { 0x1.429528p-2, 0x1.0d5712p-2, 0x1.ed0a5ap-7, -0x1.cb30c2p-2, -0x1.461c66p-1 }, { 0x1.3e7b8ap-3, 0x1.f9e474p-2, -0x1.a32c8ap-5, -0x1.30dc5cp-4, -0x1.af3322p-2 }, { 0x1.54feacp-3, 0x1.2d152ep-4, -0x1.3aa9cep-3, 0x1.29b2ep-3, -0x1.8df42ep-2 } }, { { -0x1.3b398ep-6, 0x1.0a0d74p-2, 0x1.9fb62cp-3, 0x1.348218p-2, -0x1.dca1ccp-2 }, { -0x1.03d856p-2, 0x1.d9abbp-3, 0x1.98b072p-5, -0x1.9e6cb6p-2, -0x1.76756ap-3 }, { 0x1.aaccb6p-3, 0x1.c96fc4p-3, -0x1.427374p-3, -0x1.1d18bcp-7, -0x1.98cc26p-2 }, { -0x1.c903f8p-2, -0x1.f69dfcp-3, -0x1.d4fa5ep-2, -0x1.5cd914p-2, -0x1.eb9fbcp-2 }, { -0x1.26431p-2, -0x1.07dc0ep-2, 0x1.d30a5ep-5, -0x1.b1522ep-4, -0x1.1d04e6p-2 } }, { { -0x1.3ee0ap-2, -0x1.14e048p-3, -0x1.1457dcp-2, -0x1.10ab24p-1, -0x1.ced1e4p-2 }, { -0x1.111a5p-3, -0x1.22d8f2p-1, -0x1.1bf3c6p-2, -0x1.70a4e4p-2, -0x1.ac22f2p-1 }, { -0x1.b1f39ap-2, -0x1.07b194p-1, -0x1.16e7bp-2, 0x1.8d3e92p-3, 0x1.8bfb92p-1 }, { -0x1.b736e2p-3, 0x1.10de76p-4, 0x1.98dbdep-3, 0x1.44821ap-2, 0x1.050036p-1 }, { -0x1.59af6p-3, -0x1.33bd36p-3, -0x1.ca2daep-5, 0x1.85a8p-3, -0x1.eecfcep-7 } }, { { -0x1.b7f93p-2, -0x1.ad35e2p-5, -0x1.201a28p-3, -0x1.6651d6p-1, -0x1.f4984cp-2 }, { -0x1.1b5ddcp-4, 0x1.d7c35ap-2, 0x1.beef76p-4, -0x1.030de2p-2, -0x1.3a3126p-2 }, { -0x1.50273cp-4, 0x1.1ade84p-2, 0x1.1d79b2p-2, -0x1.745512p-3, -0x1.05899cp-1 }, { 0x1.18419ep-2, 0x1.803492p-3, 0x1.ab61d6p-3, -0x1.0da89cp-3, -0x1.1fe4ep-3 }, { 0x1.b5e7eap-3, -0x1.386f7ep-5, -0x1.3dc22p-3, -0x1.9ab722p-2, -0x1.a066e2p-5 } }, { { 0x1.20be12p-2, -0x1.003572p-2, 0x1.28667ep-3, -0x1.97feecp-3, -0x1.2a1614p-2 }, { -0x1.da9688p-5, 0x1.e38866p-4, 0x1.f270a2p-3, 0x1.1898d8p-2, -0x1.2ae39cp-5 }, { -0x1.a9ebd4p-3, -0x1.b327dap-2, -0x1.368d14p-3, -0x1.07eb48p-4, 0x1.6a8b8cp-2 }, { -0x1.2065fap-2, -0x1.dbe582p-3, 0x1.16ae88p-7, 0x1.d5871ep-2, 0x1.04ed8ep-1 }, { -0x1.4a8c36p-3, 0x1.a045bcp-4, 0x1.5c7634p-4, 0x1.e45754p-2, 0x1.564fa4p-2 } }, { { -0x1.b1e86ep-3, -0x1.78ea3ep-4, -0x1.44a2a8p-4, -0x1.aea846p-2, -0x1.b7a72ap-2 }, { -0x1.340f28p-2, -0x1.5015dap-4, 0x1.e07ffcp-4, 0x1.1ada5ap-3, 0x1.f27048p-4 }, { -0x1.c00b2p-2, 0x1.55dac4p-2, 0x1.f1c6f4p-2, 0x1.228c0ep-2, 0x1.8ef198p-1 }, { -0x1.3f2e56p-3, 0x1.62f746p-3, 0x1.1cfe98p-4, -0x1.5b2b02p-2, 0x1.f2e0dep-4 }, { 0x1.e01ad4p-3, 0x1.0ea3cap-2, 0x1.30d38cp-6, -0x1.c115e8p-2, -0x1.301434p-1 } }, { { 0x1.f95c36p-4, -0x1.81e6ep-4, -0x1.7a765p-3, -0x1.c66b0ap-3, -0x1.0b94f2p-8 }, { -0x1.e84302p-4, 0x1.dcaaa8p-5, 0x1.6abb7ep-3, 0x1.67ca82p-5, -0x1.bb532ep-3 }, { -0x1.cef018p-2, -0x1.51bd2p-3, -0x1.d896a6p-3, 0x1.a4c77p-6, -0x1.ff5934p-5 }, { -0x1.a31866p-3, -0x1.93fa4p-2, 0x1.be1f3cp-4, -0x1.5ceadp-2, -0x1.3f6f42p-1 }, { 0x1.741972p-2, 0x1.86986p-2, 0x1.79301cp-2, -0x1.da6e5p-7, 0x1.a05e68p-5 } }, { { -0x1.e2db82p-4, -0x1.88ecf8p-3, 0x1.76be92p-3, 0x1.abd95p-3, 0x1.9ec3f8p-2 }, { -0x1.146bbap-4, 0x1.4fa0bp-5, 0x1.ccef74p-3, 0x1.6216e8p-3, 0x1.052296p-2 }, { -0x1.c2aba4p-3, 0x1.8aec8cp-3, 0x1.fba9d4p-3, 0x1.3fd93ep-2, 0x1.377484p-2 }, { 0x1.0d4bd4p-4, 0x1.09039cp-6, -0x1.6559f8p-4, -0x1.97214cp-3, -0x1.ff7e16p-2 }, { 0x1.e4a9c4p-4, -0x1.f227acp-3, -0x1.1f44e4p-2, -0x1.32b0b8p-2, -0x1.e80858p-3 } }, { { 0x1.49757ap-4, 0x1.56b796p-3, 0x1.19a04p-4, -0x1.bd85c8p-2, -0x1.95f5cp-3 }, { 0x1.afb5b8p-2, -0x1.c37fcp-6, 0x1.09303ap-5, -0x1.ea54eep-3, 0x1.84f97ap-3 }, { -0x1.e3cdd8p-5, -0x1.47fbfp-5, 0x1.a13df2p-4, 0x1.ea5132p-4, 0x1.3f0546p-2 }, { -0x1.27a0d2p-4, -0x1.3cd0d2p-4, 0x1.d79feep-3, -0x1.9f019ap-4, -0x1.aac206p-6 }, { -0x1.2bdd68p-2, 0x1.2fac78p-4, -0x1.9da8bap-2, -0x1.50c68ep-2, 0x1.6ca27p-5 } } }, { { { -0x1.1af3ccp-2, -0x1.c1366p-6, -0x1.997a16p-3, -0x1.34837p-4, 0x1.cc72c8p-2 }, { -0x1.d23022p-4, 0x1.34af16p-3, 0x1.2f8f28p-2, -0x1.f29d6ap-4, 0x1.c60a52p-5 }, { -0x1.faa31ep-3, -0x1.b1c7dp-2, -0x1.774ec8p-3, -0x1.d7d92ap-3, 0x1.9f3236p-2 }, { 0x1.1295fep-3, -0x1.e4bc76p-6, 0x1.cbf15p-2, 0x1.0d001p-1, 0x1.388936p-2 }, { -0x1.54ce2ap-3, -0x1.1e9444p-2, 0x1.490d54p-3, 0x1.b1c1ep-2, -0x1.727a26p-3 } }, { { -0x1.0b1682p-7, -0x1.1d232ep-3, -0x1.348796p-2, 0x1.e9d07ep-8, 0x1.4b5a14p-3 }, { 0x1.12b324p-2, 0x1.a27de2p-3, 0x1.4bdd8cp-2, -0x1.157c5ap-4, 0x1.0da0ecp-5 }, { -0x1.3ad502p-3, 0x1.674754p-2, 0x1.9eff72p-2, 0x1.724c16p-2, -0x1.024f02p-2 }, { -0x1.c764cap-3, 0x1.682b66p-1, 0x1.6edc2cp-2, 0x1.4b8344p-3, -0x1.6543e8p-2 }, { 0x1.2c21acp-1, 0x1.125fd2p-2, 0x1.f5b886p-4, 0x1.4b562ep-2, 0x1.be7ddcp-3 } }, { { 0x1.48efb8p-2, -0x1.4791a6p-3, -0x1.1eee7ap-2, -0x1.a7b708p-2, -0x1.13e166p-1 }, { 0x1.5e05c4p-3, 0x1.1b7c5cp-4, -0x1.3072d4p-2, -0x1.9ef318p-1, -0x1.09f3ccp-3 }, { 0x1.9f777cp-2, -0x1.69ad8p-4, -0x1.02b7cap-2, -0x1.fd9b08p-3, 0x1.6cbe94p-2 }, { 0x1.0fda3ap-1, 0x1.2ba968p-2, 0x1.e215fep-3, -0x1.371d6ap-2, -0x1.1c5042p-3 }, { 0x1.dc7e8p-4, 0x1.14c5e6p-1, -0x1.d5861p-7, -0x1.d9be62p-2, -0x1.837c16p-3 } }, { { 0x1.59dc7cp-2, 0x1.8806cap-2, 0x1.6e7964p-3, -0x1.62f6d6p-6, -0x1.470134p-2 }, { 0x1.e79fbcp-2, 0x1.2b4ebp-2, 0x1.0c114ap-1, 0x1.688508p-1, 0x1.88c288p-2 }, { 0x1.cf5ddcp-3, 0x1.c5fedcp-4, 0x1.5e1972p-2, 0x1.6c97dp-2, 0x1.2f827cp-5 }, { -0x1.b5206ep-2, -0x1.d2df84p-2, -0x1.8f243p-7, 0x1.7fd44ep-2, 0x1.1abe4ap-3 }, { -0x1.bb141cp-2, -0x1.059d32p-2, 0x1.258ce2p-5, 0x1.8bcb2ap-4, -0x1.c80468p-3 } }, { { 0x1.0af8cp-3, -0x1.109e5ep-1, -0x1.18c8a6p-7, -0x1.44bb02p-4, -0x1.4cd626p-4 }, { 0x1.6b367p-2, -0x1.c1c24ep-2, -0x1.18046p-1, -0x1.9b2b0ap-4, 0x1.01f6f6p-3 }, { 0x1.5e083ap-2, -0x1.1a6892p-2, -0x1.2a9facp-1, -0x1.182842p-3, 0x1.4c51f4p-3 }, { 0x1.208f42p-3, -0x1.a84ea4p-1, -0x1.89f94cp-1, -0x1.4239aap-3, 0x1.5f5368p-2 }, { 0x1.1837d6p-7, -0x1.358908p0, -0x1.e4c0bcp-1, -0x1.081952p-2, -0x1.3cb298p-4 } }, { { -0x1.a2a8f6p-2, -0x1.f8a096p-4, -0x1.e4f2a8p-3, -0x1.83f362p-4, -0x1.6bc824p-5 }, { 0x1.052ecap-2, -0x1.c85ff2p-3, -0x1.a87a0ap-3, -0x1.9c816cp-2, -0x1.568c3ap-4 }, { 0x1.470012p-2, -0x1.e85c1ap-4, -0x1.1771a2p-1, -0x1.686cbep-2, -0x1.5646bep-3 }, { 0x1.3e73b4p-4, -0x1.0e384cp-3, -0x1.10a6fep-2, 0x1.582be2p-5, 0x1.0edd66p-1 }, { 0x1.edd292p-7, 0x1.27fbbap-4, 0x1.a02804p-3, 0x1.484df2p-3, -0x1.41e242p-4 } }, { { -0x1.5f2facp-6, 0x1.fcd5e4p-4, 0x1.04d54p-3, 0x1.30e624p-3, -0x1.eab7p-4 }, { -0x1.02cad6p-1, -0x1.dcb9bep-4, 0x1.18145ap-4, 0x1.a9317p-3, 0x1.0ef472p-1 }, { -0x1.e7fc12p-5, 0x1.d3138p-2, 0x1.aeeca2p-3, -0x1.95f07ap-3, 0x1.f780c8p-3 }, { -0x1.057ac2p-5, 0x1.08a9dap-3, 0x1.2c85aep-3, -0x1.753f54p-3, -0x1.a4794ap-4 }, { 0x1.8a9be6p-4, 0x1.24cfd2p-3, 0x1.bb38ap-2, 0x1.2e230ep-1, 0x1.4f287ap-3 } }, { { -0x1.2fcd2ep-3, -0x1.bbe196p-2, -0x1.f8a0bcp-4, -0x1.6ae83p-3, 0x1.7e1062p-4 }, { 0x1.92d8dap-3, -0x1.28ec94p-4, -0x1.f443fcp-4, -0x1.62be56p-4, 0x1.3c12fcp-3 }, { -0x1.1315cap-6, -0x1.3dbcdcp-3, 0x1.82b044p-3, -0x1.74c5c6p-4, -0x1.db0bc6p-5 }, { -0x1.5a656p-3, 0x1.721628p-4, 0x1.376fd8p-3, 0x1.a0f0ap-3, 0x1.8d50ep-3 }, { 0x1.3c7ff4p-3, 0x1.a7cc5ep-1, 0x1.0d37fep-3, -0x1.0c3e02p-3, -0x1.4971acp-2 } }, { { -0x1.a6e9ccp-3, 0x1.0431b2p-2, 0x1.506474p-2, 0x1.6ef13ep-2, -0x1.a84682p-3 }, { 0x1.040152p-1, 0x1.657a46p-2, -0x1.6c0d7ep-6, 0x1.f00a76p-5, 0x1.3f90d8p-4 }, { 0x1.f29c2p-2, 0x1.2ba5c2p-4, -0x1.47c98ap-2, -0x1.e72f16p-2, -0x1.6b2806p-3 }, { 0x1.ec4edcp-2, 0x1.95573ap-2, -0x1.dabc08p-5, -0x1.73b38ap-1, -0x1.e64df8p-1 }, { 0x1.dffc0ep-2, 0x1.a48f78p-4, -0x1.ca401ap-4, 0x1.52c302p-6, -0x1.f7331ap-3 } }, { { -0x1.0aa556p-4, 0x1.5dfd82p-2, 0x1.20706p-1, 0x1.a8d1a2p-2, 0x1.2652c8p-1 }, { -0x1.53019ap-1, -0x1.ff1a2ap-3, 0x1.1b4e08p-2, 0x1.11d0e2p-2, -0x1.49f1b8p-2 }, { 0x1.6d9e28p-2, 0x1.0e5388p-1, 0x1.9875ecp-4, -0x1.76ee86p-3, -0x1.8ac55ep-3 }, { 0x1.421642p-1, 0x1.0c3cc8p-1, 0x1.bac9ccp-5, -0x1.7f2ad6p-2, -0x1.7a056ap-2 }, { 0x1.8bf8fcp-4, -0x1.988454p-4, -0x1.2574b8p-3, -0x1.3fe2b8p-4, -0x1.1cdbc2p-2 } } }, { { { -0x1.94911p-3, -0x1.faf1c2p-3, -0x1.3ef602p-3, -0x1.d848cap-6, 0x1.86896cp-4 }, { -0x1.3d8e96p-3, 0x1.4ebf9ep-4, -0x1.8b922cp-7, 0x1.b9c92p-3, 0x1.155edep-2 }, { 0x1.635f8p-3, -0x1.96342ap-5, 0x1.3e4cap-2, 0x1.67a8b4p-2, 0x1.7bc1d2p-3 }, { 0x1.1b9bfcp-2, 0x1.63269p-3, 0x1.a0b28ap-10, 0x1.645fe2p-6, 0x1.9c7162p-4 }, { 0x1.4ccbap-4, -0x1.bd9e1ap-4, -0x1.90eef8p-2, -0x1.f6ba8ap-2, -0x1.e302a8p-2 } }, { { -0x1.894f82p-4, 0x1.9f8cc4p-4, 0x1.641c98p-4, -0x1.abec86p-6, 0x1.5378d4p-3 }, { 0x1.1c79f2p-3, 0x1.46d1eap-5, 0x1.380446p-2, 0x1.a50866p-2, 0x1.1b0d62p-2 }, { -0x1.50d3b2p-3, 0x1.593ca6p-5, 0x1.91e5bep-2, 0x1.29ca56p-1, 0x1.5373fp-3 }, { -0x1.431c5ep-1, -0x1.e4b2c8p-2, -0x1.44fd18p-3, -0x1.145e6p-5, -0x1.1237cap-2 }, { -0x1.d963acp-2, -0x1.fda6p-2, -0x1.708a22p-1, -0x1.4316dcp-2, -0x1.2e3938p-2 } }, { { 0x1.dd0318p-4, -0x1.fc605cp-7, -0x1.509cfep-5, -0x1.ebe592p-6, -0x1.c622eep-5 }, { 0x1.28dbe4p-2, 0x1.6e80acp-2, 0x1.69d49p-2, 0x1.f02326p-4, -0x1.0532e8p-1 }, { 0x1.677de4p-2, 0x1.b54384p-3, -0x1.0d463ap-2, -0x1.bd9acp-2, -0x1.d19754p-5 }, { 0x1.68a234p-2, -0x1.47d2fcp-2, -0x1.7da22cp-2, -0x1.78f2ep-17, 0x1.e0febap-7 }, { -0x1.76b446p-2, -0x1.683a82p-3, 0x1.887676p-3, 0x1.f2d986p-2, -0x1.21b1fcp-4 } }, { { -0x1.1b0fb6p-2, -0x1.e9d4d4p-3, -0x1.7d52f2p-2, -0x1.52303ap-2, -0x1.49943p-4 }, { 0x1.a8d6b8p-3, 0x1.08e61ep-2, 0x1.664fb2p-3, 0x1.c0515ap-4, -0x1.555342p-3 }, { 0x1.24e2fap-2, 0x1.9cdadp-3, 0x1.657cdp-3, -0x1.0605f8p-5, 0x1.f5d628p-5 }, { 0x1.02dbdp-3, -0x1.7c36b6p-3, -0x1.15c67p-4, -0x1.87974p-3, -0x1.93a206p-4 }, { -0x1.472dap-4, 0x1.0ed7aep-5, 0x1.d0e74p-15, 0x1.e28594p-6, 0x1.14df0ap-4 } }, { { -0x1.37405ep-1, -0x1.b80316p-3, -0x1.e64496p-5, 0x1.31ba6ep-2, -0x1.526bacp-4 }, { -0x1.94bcdap-4, 0x1.f4c57ap-5, 0x1.5735f4p-4, 0x1.42748ep-7, -0x1.ba813cp-6 }, { 0x1.4f6352p-4, 0x1.8a856cp-4, 0x1.17005ep-3, 0x1.128d7ep-4, 0x1.72498ep-3 }, { -0x1.24127cp-4, -0x1.193352p-3, -0x1.6e9a1ap-3, -0x1.8f80ep-3, -0x1.c89dccp-4 }, { 0x1.9005ap-3, 0x1.de60fap-5, 0x1.860d6cp-4, -0x1.a969fep-4, -0x1.7f3f0cp-2 } }, { { -0x1.b84d0ep-4, -0x1.803684p-2, -0x1.5188p-3, -0x1.064562p-12, 0x1.3ca7cp-2 }, { -0x1.c22cbep-2, 0x1.705d46p-5, -0x1.ac8916p-4, 0x1.bdb8eep-5, -0x1.9f8a7p-4 }, { 0x1.186fd6p-2, 0x1.1323bap-2, 0x1.0a8718p-8, -0x1.068358p-2, 0x1.c50ceep-3 }, { 0x1.1a343p-2, -0x1.69dc2ep-4, -0x1.8c2b54p-3, 0x1.91cf78p-7, 0x1.129abap-2 }, { 0x1.8e6bb6p-3, -0x1.cdd52ap-3, -0x1.ce972ap-6, -0x1.1334f6p-4, -0x1.6aeef8p-4 } }, { { 0x1.4cbd88p-3, 0x1.0a0f84p-2, 0x1.ff4458p-3, 0x1.d4a29p-3, 0x1.2a22e4p-3 }, { -0x1.6b3518p-7, -0x1.25eb86p-4, -0x1.35bf64p-7, -0x1.85f8d8p-3, 0x1.f0f68p-4 }, { -0x1.178dfp-2, -0x1.30b9fep-2, -0x1.8dfe04p-5, 0x1.b8048ep-7, 0x1.b6b666p-5 }, { 0x1.fa29dcp-7, 0x1.3338bcp-5, -0x1.e50e3ep-5, -0x1.97b5d4p-4, -0x1.157b94p-4 }, { -0x1.dd753cp-3, 0x1.113f72p-3, 0x1.228204p-2, 0x1.6853dp-4, 0x1.365a56p-3 } }, { { 0x1.9085e8p-6, 0x1.50c5d4p-4, -0x1.86c056p-3, -0x1.1ce454p-4, -0x1.12ef02p-2 }, { 0x1.6dcbf4p-4, -0x1.9a8994p-3, -0x1.30a93ep-3, -0x1.f63e88p-7, 0x1.9f077ep-4 }, { 0x1.042c36p-5, -0x1.08584p-4, -0x1.1013p-4, 0x1.1797cep-4, 0x1.1947acp-3 }, { 0x1.1bf932p-2, 0x1.575feap-2, 0x1.835386p-2, 0x1.a6495ap-2, 0x1.85774ep-2 }, { 0x1.5db3d8p-6, 0x1.15bd1ep-2, 0x1.52701ep-3, 0x1.94877p-3, -0x1.e9e6cp-3 } }, { { -0x1.46920ap-4, 0x1.2d3a36p-6, -0x1.939e46p-4, -0x1.7b9068p-5, -0x1.ceff94p-2 }, { -0x1.9edac4p-3, 0x1.d7dd8p-4, 0x1.45be1p-3, -0x1.bfadf2p-3, -0x1.5415bep-2 }, { -0x1.f42f64p-5, 0x1.2ed5ep-3, 0x1.91e93cp-4, -0x1.6928d2p-3, -0x1.12ed8ep-4 }, { -0x1.714f66p-9, 0x1.1a23ap-2, 0x1.dd7788p-2, 0x1.1a8aecp-3, -0x1.0580ap-4 }, { -0x1.6dd436p-3, 0x1.18932ep-2, 0x1.059b82p-4, 0x1.7858c8p-5, 0x1.a2e568p-3 } }, { { -0x1.4e3406p-2, 0x1.ebba56p-5, 0x1.5387eap-2, 0x1.8a54p-2, 0x1.b9123ap-2 }, { -0x1.de93e4p-3, 0x1.a57feap-5, 0x1.ec6518p-4, 0x1.4eba16p-5, -0x1.78ef6ep-3 }, { -0x1.23e06p-1, -0x1.b2e2eap-2, -0x1.47bc02p-2, -0x1.fe541p-3, -0x1.ffbfb8p-3 }, { -0x1.48ea68p-9, -0x1.f5780ep-3, 0x1.19bda8p-2, 0x1.f962eep-3, 0x1.713dbp-3 }, { -0x1.76b9c4p-5, 0x1.320334p-2, 0x1.d19e5ap-3, 0x1.bec586p-3, -0x1.e079f2p-5 } } }, { { { -0x1.588de8p-2, -0x1.5b72cep-2, -0x1.0915acp-3, -0x1.bed8e4p-3, 0x1.2d8484p-8 }, { 0x1.658a06p-3, -0x1.1f6f3p-4, 0x1.c16f6cp-3, 0x1.c82f44p-6, 0x1.07755ap-3 }, { 0x1.10cd6cp-2, 0x1.67aa24p-6, 0x1.d30df2p-3, 0x1.4da82ep-5, 0x1.086434p-2 }, { 0x1.7292bap-3, 0x1.da1926p-5, 0x1.1532eap-2, 0x1.0a8044p-5, 0x1.bb4492p-3 }, { 0x1.af94f6p-5, 0x1.59a97cp-3, -0x1.a7014cp-6, -0x1.c32a5ep-3, -0x1.e0d41p-3 } }, { { -0x1.26bc08p-3, -0x1.8ff962p-4, -0x1.c00b78p-6, -0x1.b2eb3p-5, -0x1.6d4c1cp-4 }, { 0x1.b89c46p-3, 0x1.ca9e8cp-4, 0x1.9153dap-3, 0x1.602494p-5, 0x1.c15d08p-3 }, { -0x1.9ffddcp-2, 0x1.0709c8p-4, 0x1.4c030cp-2, 0x1.6f350cp-2, 0x1.193c6cp-1 }, { -0x1.c6e7ecp-2, -0x1.315aa8p-2, 0x1.79992ep-3, 0x1.666c42p-4, -0x1.2530aap-2 }, { -0x1.514bb6p-2, -0x1.0142e2p-2, -0x1.7c186cp-2, -0x1.247d4cp-1, -0x1.456ecap-2 } }, { { -0x1.e843fep-2, 0x1.d8e8fp-4, 0x1.10e328p-2, 0x1.0686d6p-5, 0x1.e15d4cp-4 }, { 0x1.7bd2dep-2, 0x1.70192p-3, 0x1.7a4804p-2, 0x1.2f6c6ep-4, -0x1.bd86eap-3 }, { 0x1.696dfep-2, 0x1.740134p-2, 0x1.ebf2fap-4, -0x1.9993dap-3, -0x1.2e4c7ap-2 }, { 0x1.5539cep-2, -0x1.2948b6p-2, -0x1.fd9be4p-2, -0x1.7076dcp-3, -0x1.5e0fd4p-2 }, { 0x1.f5fa78p-5, -0x1.39ddcp-1, -0x1.d4f0eap-3, -0x1.61b45p-2, -0x1.34785cp-6 } }, { { -0x1.b5eae8p-2, -0x1.96beacp-3, -0x1.58c594p-2, -0x1.ee80b4p-2, -0x1.3bd792p-1 }, { -0x1.b9a784p-4, 0x1.e2b91p-4, -0x1.bd1902p-3, -0x1.33b8fcp-2, -0x1.abb2ap-2 }, { 0x1.4711bap-2, 0x1.23c356p-3, 0x1.27bb58p-3, 0x1.c09e26p-5, -0x1.e6c792p-4 }, { 0x1.87f66ap-3, 0x1.133accp-2, -0x1.59dd56p-4, 0x1.4f1534p-4, 0x1.54f1bap-5 }, { -0x1.f9206ep-3, 0x1.2ca138p-3, -0x1.496bbp-5, 0x1.3242a6p-6, 0x1.dc1b16p-3 } }, { { -0x1.f7ccaep-1, -0x1.592688p-1, -0x1.182d88p-2, -0x1.3562d4p-6, 0x1.551c72p-7 }, { -0x1.aac334p-7, -0x1.0b7f7ap-3, -0x1.de7ed4p-6, 0x1.c651c8p-4, -0x1.354642p-3 }, { 0x1.66c8b4p-5, -0x1.0f6f28p-7, -0x1.5f0b34p-8, -0x1.e1d224p-6, -0x1.d599fap-4 }, { 0x1.142d48p-3, 0x1.7a975ep-3, 0x1.15ce6p-4, 0x1.04b07p-6, 0x1.c6443ep-4 }, { -0x1.3964e8p-3, 0x1.6de6eep-3, 0x1.0b805ep-6, 0x1.3910b6p-3, 0x1.b36578p-5 } }, { { -0x1.7b165ep-5, -0x1.77e07ep-3, -0x1.fa5c46p-4, 0x1.e2ab7ep-3, 0x1.7647e8p-5 }, { 0x1.cbeb08p-4, -0x1.92e558p-3, -0x1.4a4cap-8, 0x1.6a6992p-2, 0x1.ad771cp-3 }, { 0x1.f89364p-8, 0x1.241dd4p-3, 0x1.4ceec8p-3, 0x1.83840ep-8, 0x1.0d2bfep-6 }, { 0x1.3277c8p-2, 0x1.ff35f2p-5, -0x1.b6e966p-3, -0x1.187e36p-4, 0x1.bb3176p-3 }, { -0x1.c89162p-3, -0x1.366d74p-4, -0x1.07f48cp-3, -0x1.f7098ep-3, -0x1.f09cfap-5 } }, { { 0x1.fadabep-4, 0x1.23081ep-4, 0x1.d8e82ep-4, -0x1.621c78p-3, 0x1.6a7d7p-2 }, { 0x1.730ad8p-3, 0x1.b66bc8p-3, 0x1.c83e98p-6, 0x1.274cccp-2, -0x1.1b3a18p-4 }, { -0x1.109ce2p-3, 0x1.ff03dcp-7, 0x1.7918f6p-8, 0x1.b8e4bap-4, -0x1.967378p-4 }, { 0x1.1ec4a8p-5, -0x1.682eccp-5, -0x1.8cbb64p-3, -0x1.ceec62p-3, -0x1.4bcd3cp-2 }, { -0x1.d2ac42p-6, -0x1.76be4ep-3, -0x1.2fbc1p-5, 0x1.78bb28p-2, 0x1.72314ap-3 } }, { { -0x1.3c8f4p-3, 0x1.721186p-4, 0x1.f2132cp-4, -0x1.ea6f08p-4, 0x1.bfb184p-6 }, { -0x1.392d12p-3, -0x1.90ea52p-4, -0x1.1c884p-6, -0x1.526f3p-2, -0x1.9b0804p-3 }, { -0x1.5a8b36p-4, -0x1.9698cep-6, 0x1.4b9bcp-5, 0x1.1e9b24p-3, 0x1.02caa2p-4 }, { -0x1.41f1b6p-3, 0x1.004678p-3, 0x1.068a94p-7, 0x1.d97b1cp-4, 0x1.41036p-2 }, { 0x1.0a2198p-2, 0x1.144898p-2, 0x1.172a8ap-2, 0x1.c5e9f8p-3, 0x1.2fdadap-4 } }, { { -0x1.aee1d8p-4, -0x1.b0c9f2p-5, -0x1.12078ap-2, -0x1.1f921ap-2, -0x1.bf3aa6p-2 }, { -0x1.55d0e2p-5, -0x1.8737a8p-6, -0x1.0aa14cp-2, -0x1.64c8a6p-3, -0x1.e8cf08p-3 }, { -0x1.409dbcp-3, -0x1.09cee4p-6, 0x1.76b186p-4, -0x1.a1a04ap-6, -0x1.9a0ad4p-3 }, { -0x1.3d959p-4, 0x1.f62376p-3, 0x1.063434p-1, 0x1.26434ap-1, 0x1.cf8894p-3 }, { -0x1.e609a6p-4, -0x1.3b39cp-7, 0x1.1528f2p-2, -0x1.06fd9ep-6, -0x1.550facp-5 } }, { { 0x1.ac7442p-4, -0x1.31bca8p-12, -0x1.20aap-3, 0x1.57251ep-3, 0x1.d53414p-3 }, { -0x1.301acep-2, 0x1.dcc19cp-3, 0x1.ce8654p-3, 0x1.de49e2p-3, 0x1.444faep-4 }, { -0x1.98b594p-1, -0x1.4d11d2p-2, -0x1.c22becp-3, -0x1.597042p-6, -0x1.64b5cap-2 }, { -0x1.58cd72p-1, -0x1.c76578p-3, -0x1.92bd3ap-4, 0x1.0a0e14p-3, 0x1.4cb1acp-3 }, { -0x1.24cf3p-5, -0x1.391096p-2, 0x1.0bc9bap-2, 0x1.4b2ed8p-2, 0x1.600feep-2 } } }, { { { -0x1.121daap-4, 0x1.68f314p-6, 0x1.84063p-2, -0x1.969658p-4, 0x1.25cecep-6 }, { 0x1.2c11e2p-3, -0x1.f4fef4p-3, -0x1.e9e012p-5, 0x1.b3eacp-4, -0x1.5dbed2p-2 }, { 0x1.974f92p-4, -0x1.01bc76p-2, -0x1.11b6b2p-3, -0x1.6ff05cp-3, -0x1.4c373cp-1 }, { 0x1.bb3a22p-4, 0x1.ef50bcp-4, -0x1.9ac364p-6, -0x1.fa6aa6p-1, -0x1.f0e8dp-3 }, { 0x1.eff81ap-3, 0x1.444b42p-4, -0x1.e247fep-2, -0x1.45fba6p-3, -0x1.ba5f0ep-2 } }, { { 0x1.357eb4p-4, 0x1.0dbf0ap-2, 0x1.345f6ap-5, -0x1.34eb74p-3, -0x1.218e32p-6 }, { 0x1.08be08p-2, 0x1.5b8bdcp-3, -0x1.25cb7cp-2, -0x1.878f92p-4, -0x1.911a8ep-6 }, { 0x1.6a90a4p-3, 0x1.da9ef4p-3, -0x1.3bbf24p-2, -0x1.dea3a6p-5, 0x1.52fa2p-2 }, { -0x1.649d2ep-3, 0x1.8767cep-4, 0x1.e62a86p-3, -0x1.a8f85p-2, -0x1.374444p-1 }, { -0x1.258a78p-2, -0x1.e0d356p-3, -0x1.429406p-9, -0x1.af215cp-11, -0x1.eee402p-2 } }, { { 0x1.4238bap-3, 0x1.ad8f5ap-4, 0x1.95c9e2p-3, 0x1.672caep-2, -0x1.05694cp-1 }, { 0x1.68bbf8p-5, 0x1.f4c646p-3, 0x1.9a697ep-1, 0x1.6e2a4ep-1, -0x1.0f6362p-2 }, { -0x1.6f3282p-4, 0x1.66e6bcp-1, 0x1.3ada0cp-2, -0x1.0e1a72p-1, -0x1.cb23a4p-4 }, { -0x1.8a9734p-3, -0x1.9123bep-2, -0x1.bd1e94p-2, 0x1.0cdf94p-3, 0x1.d819b4p-6 }, { -0x1.fc0a8ap-3, -0x1.dca01p-2, 0x1.93ef9cp-4, 0x1.2c1322p-2, -0x1.49e85p-3 } }, { { 0x1.aaa7p-3, -0x1.c8f60cp-4, -0x1.49dacep-1, -0x1.106908p-1, -0x1.a4b71cp-4 }, { -0x1.6f74fp-4, -0x1.52380ep-5, -0x1.5f42b6p-3, -0x1.64544p-1, -0x1.221602p-1 }, { -0x1.6378fep-5, -0x1.73677ep-5, 0x1.144a28p-2, -0x1.d1aadap-3, -0x1.a75372p-2 }, { 0x1.407ec8p-3, -0x1.f97becp-4, 0x1.40804p-6, 0x1.7214a6p-3, 0x1.29bef6p-3 }, { 0x1.cfa5ap-2, -0x1.0162d8p-2, -0x1.796a6cp-4, -0x1.0359d6p-2, -0x1.6e9ecp-3 } }, { { 0x1.7d1b06p-3, 0x1.8583cep-2, 0x1.043d0ep-1, 0x1.cc96a8p-3, 0x1.5077cep-6 }, { -0x1.4c2554p-5, 0x1.28197ap-2, 0x1.10c332p-2, 0x1.4f4272p-1, -0x1.8bf92ap-2 }, { -0x1.d2176ep-4, 0x1.2f2176p-3, 0x1.11473ep-2, 0x1.b26728p-2, -0x1.82c338p-2 }, { -0x1.3eb4eep-8, 0x1.7b325ap-3, 0x1.ccafb6p-3, 0x1.128c08p-1, -0x1.13da7ap0 }, { 0x1.20b8e8p-1, 0x1.3a677ep-3, -0x1.f49744p-12, 0x1.1aa972p-8, -0x1.8d8bf2p-2 } }, { { -0x1.8c145ep-6, 0x1.531022p-2, 0x1.1e590ep-5, 0x1.d146a6p-5, -0x1.ea606p-7 }, { -0x1.3f4298p-4, 0x1.b0a6e8p-3, 0x1.40276ap-3, 0x1.02fa32p-4, -0x1.129184p-3 }, { 0x1.7bbfcap-4, 0x1.885d64p-6, 0x1.891fa2p-2, 0x1.62e896p-2, 0x1.4e137cp-4 }, { 0x1.c7b39p-7, -0x1.276348p-6, 0x1.80fc64p-2, 0x1.c10134p-5, 0x1.ce0f26p-3 }, { 0x1.666418p-3, -0x1.dcaa46p-6, -0x1.1689ep-2, -0x1.664fe2p-2, -0x1.e98bbep-2 } }, { { 0x1.1db39ep-3, 0x1.205ff8p-3, 0x1.724638p-3, -0x1.dd536ap-6, -0x1.34e15p-1 }, { 0x1.56547ep-4, -0x1.2ebbbcp-5, -0x1.425616p-3, -0x1.3cdcc8p-4, -0x1.9e6bb2p-7 }, { -0x1.f3954cp-4, -0x1.ef061ep-2, -0x1.bd59acp-3, 0x1.7ddffap-2, 0x1.6cdfbp-4 }, { -0x1.751ce2p-3, -0x1.37309p-1, -0x1.718234p-5, -0x1.cb99acp-4, 0x1.0818a8p-8 }, { -0x1.161f76p-1, -0x1.1a6e64p-2, 0x1.869dd2p-4, -0x1.75ff3ep-2, -0x1.c0fbcp-5 } }, { { 0x1.3620fcp-4, 0x1.6a58eep-2, 0x1.cfa6aap-3, -0x1.abb276p-2, -0x1.23572ep-5 }, { -0x1.e1766p-3, 0x1.7b9e9cp-2, -0x1.e575aep-4, -0x1.deb7cep-4, 0x1.2d6cdp-3 }, { -0x1.feb4e2p-3, 0x1.1f1712p-4, 0x1.064af2p-3, 0x1.7e1b6p-3, 0x1.b81c3ap-4 }, { -0x1.5a5244p-1, -0x1.5c640cp-2, 0x1.1c59cep-3, 0x1.1b273ap-3, -0x1.309d5ep-2 }, { -0x1.8fc3b6p-3, -0x1.cd3c68p-2, 0x1.551acep-5, -0x1.911448p-2, 0x1.5f2874p-7 } }, { { -0x1.585642p-3, -0x1.b4bf48p-4, -0x1.13cda4p-6, -0x1.2676a4p-2, 0x1.b28c46p-2 }, { 0x1.408fa6p-2, -0x1.d3419cp-4, -0x1.380d4ap-2, -0x1.632382p-4, 0x1.9cacc2p-3 }, { 0x1.37488cp-3, -0x1.f03dacp-3, 0x1.c7f1cap-5, -0x1.12b206p-4, -0x1.d3827ep-4 }, { -0x1.761e7ap-3, -0x1.30150cp-3, 0x1.a08a2p-4, 0x1.93ac76p-3, 0x1.6e7434p-5 }, { 0x1.c3c9cap-6, -0x1.646fe4p-3, 0x1.cbac04p-6, 0x1.042bccp-10, 0x1.4dabc2p-2 } }, { { -0x1.709e0cp-3, 0x1.2eaaeap-5, 0x1.894fp-2, 0x1.9372a2p-3, -0x1.a37e5cp-5 }, { 0x1.b1ac04p-2, 0x1.b41842p-2, 0x1.c73b3p-6, -0x1.c5facp-3, -0x1.110332p-2 }, { 0x1.44d3dcp-3, -0x1.761d98p-4, -0x1.63d598p-2, -0x1.7c046cp-2, -0x1.cf7c4ep-3 }, { -0x1.3f2accp-2, -0x1.df9934p-3, 0x1.458cfp-6, 0x1.aa3914p-2, 0x1.3b2c0ep-4 }, { -0x1.e24f4ep-8, 0x1.6b1b9ep-3, 0x1.f757p-4, 0x1.5eaa6ep-2, 0x1.1bf4dcp-3 } } }, { { { 0x1.08a3e2p-5, -0x1.38547ap-4, 0x1.0377eap-4, 0x1.d4e2a4p-5, 0x1.18214p-2 }, { -0x1.bd91fep-3, 0x1.3dae7ap-4, -0x1.22583p-2, -0x1.1deda8p-2, -0x1.19a8dep-3 }, { 0x1.36ab76p-2, -0x1.066618p-3, -0x1.65c2cap-3, -0x1.308ebep-3, -0x1.f0a17cp-4 }, { 0x1.84797p-2, 0x1.16173ep-3, -0x1.5ece56p-3, 0x1.45b5c2p-3, 0x1.03c748p-3 }, { -0x1.026e76p-1, 0x1.66c3eep-4, -0x1.49d82ap-7, 0x1.cdcb5cp-3, -0x1.d37558p-2 } }, { { -0x1.4c5eap-3, 0x1.016c0cp-4, 0x1.5a2356p-4, 0x1.9527bp-5, 0x1.611878p-3 }, { 0x1.1e2edap-2, 0x1.4fce92p-3, 0x1.f39728p-4, -0x1.af9832p-3, 0x1.553468p-2 }, { 0x1.bb5e28p-5, 0x1.6d15d6p-2, -0x1.4cde62p-3, 0x1.e9720ep-3, 0x1.16afdep-3 }, { -0x1.3323e6p-3, -0x1.559e82p-4, -0x1.09e4aep-1, -0x1.bae784p-2, -0x1.105a8ap-2 }, { -0x1.15b10ep-3, -0x1.31bc9cp-2, -0x1.e09a58p-3, -0x1.3c4096p-2, -0x1.ac4cd4p-3 } }, { { -0x1.70d78p-3, 0x1.ae0358p-4, 0x1.63262cp-4, 0x1.f1a356p-3, 0x1.d21918p-3 }, { 0x1.0ae04p-4, 0x1.775a7cp-2, 0x1.eebb74p-2, 0x1.18459ap-3, -0x1.ecea9ep-9 }, { -0x1.ee6aeap-3, -0x1.02e544p-6, 0x1.c48202p-4, -0x1.ef7db2p-3, -0x1.ca1882p-2 }, { 0x1.a64d5p-4, -0x1.1f1456p-2, -0x1.705496p-1, -0x1.439f58p-1, -0x1.a9f1e2p-2 }, { 0x1.5f015ap-5, -0x1.515d1p-3, 0x1.e715f8p-4, 0x1.8f98ecp-2, -0x1.57b7a2p-3 } }, { { -0x1.5a1e58p-1, -0x1.ac137p-2, -0x1.370a78p-3, -0x1.76b34ap-2, -0x1.1471aap-2 }, { -0x1.8fe9d2p-2, -0x1.f159bep-3, -0x1.fea2c4p-3, 0x1.1ad91cp-3, 0x1.c8e36cp-2 }, { -0x1.a8f68ep-2, -0x1.691c28p-2, 0x1.9f372ap-3, 0x1.01aaep-2, 0x1.ebf13p-2 }, { 0x1.b3c712p-2, -0x1.87f084p-4, -0x1.049e0cp-5, 0x1.182d1p-2, 0x1.edbc82p-6 }, { 0x1.43f72ap-3, -0x1.d5e57ap-3, -0x1.effdfp-7, 0x1.bbfddap-3, 0x1.6f4914p-4 } }, { { -0x1.4238fcp-2, -0x1.0d5984p-1, -0x1.8215f8p-4, 0x1.ae6c86p-3, -0x1.20b138p-4 }, { 0x1.51d90cp-3, -0x1.9508cap-4, 0x1.1990bp-3, 0x1.9ddc5p-3, 0x1.89355ap-3 }, { -0x1.06cc2ap-4, -0x1.892ffp-6, 0x1.554498p-2, 0x1.578e8p-2, 0x1.b1f15cp-5 }, { -0x1.65a1dp-1, -0x1.ec826ap-5, 0x1.11d1fcp-3, 0x1.87c956p-3, 0x1.286b96p-4 }, { -0x1.610092p-2, 0x1.04b5p-2, 0x1.bb1666p-5, 0x1.12ca0cp-3, -0x1.8b12acp-5 } }, { { 0x1.80c7fcp-2, 0x1.f887dap-5, -0x1.eca898p-6, 0x1.3f4afp-5, -0x1.647042p-3 }, { 0x1.7ae49ep-4, -0x1.e7fd22p-4, 0x1.da395cp-8, 0x1.a9e81p-4, 0x1.574598p-4 }, { -0x1.34feaep-2, -0x1.f30582p-6, 0x1.3e53f8p-5, 0x1.01cf52p-2, -0x1.6e82c6p-4 }, { -0x1.1b59fp-2, 0x1.cef836p-2, 0x1.7262f4p-6, -0x1.20d466p-4, 0x1.abf986p-6 }, { 0x1.2c2c4ap-4, 0x1.b1f422p-4, -0x1.d7f05ap-3, 0x1.69722ap-10, -0x1.e67732p-4 } }, { { -0x1.1fa306p-12, -0x1.456dep-2, 0x1.ac0294p-5, -0x1.269b4ap-5, -0x1.200998p-3 }, { -0x1.db3594p-4, 0x1.f3403ep-5, 0x1.821a98p-3, 0x1.95ba98p-3, 0x1.539438p-2 }, { 0x1.c5ab26p-5, 0x1.8285dap-3, 0x1.e1de76p-3, -0x1.217c4ap-2, 0x1.0cf3aap-3 }, { -0x1.c2991p-4, -0x1.1639d2p-3, 0x1.9f62b6p-3, -0x1.49286cp-2, -0x1.a0f80ep-4 }, { -0x1.7d31dp-4, -0x1.bae7cap-4, -0x1.2c37p-1, -0x1.fb1508p-3, -0x1.4a2084p-3 } }, { { 0x1.2f3afep-3, 0x1.c0e326p-3, 0x1.a6ef6ep-3, -0x1.9cb2c4p-8, -0x1.d4c0b8p-7 }, { -0x1.4f218p-8, 0x1.154e64p-3, 0x1.fa1184p-6, -0x1.737d62p-2, -0x1.1b7f48p-2 }, { -0x1.6a91ccp-2, 0x1.36cb98p-3, 0x1.19186p-4, -0x1.b72c0ep-2, 0x1.2c554p-3 }, { -0x1.4ec23ap-5, 0x1.dc6f7cp-3, 0x1.7b439ap-3, -0x1.2078fep-3, 0x1.2ad504p-2 }, { -0x1.11476p-2, -0x1.7672a2p-3, 0x1.8745d2p-4, -0x1.c9e0bcp-4, -0x1.1dbb78p-10 } }, { { -0x1.01200cp-1, 0x1.30532p-3, 0x1.3808f6p-1, 0x1.bf154cp-2, 0x1.1fe82ep-4 }, { -0x1.d76a08p-4, -0x1.a3e3b8p-5, 0x1.983a7ep-2, 0x1.f1d37cp-2, 0x1.810166p-2 }, { -0x1.5b523ap-2, -0x1.61c732p-1, 0x1.8868fep-3, 0x1.eaab4p-4, 0x1.360b5cp-2 }, { -0x1.304b4cp-2, -0x1.6e73bp-1, -0x1.86a058p-2, 0x1.bbd466p-4, 0x1.0c8c2p-1 }, { -0x1.ac72d2p-2, -0x1.a3ac0ep-6, -0x1.55794cp-1, -0x1.7c9428p-3, 0x1.3eabb2p-2 } }, { { -0x1.916b76p-2, -0x1.cf6632p-4, 0x1.09331p-3, -0x1.01d6e2p-3, 0x1.169c96p-4 }, { -0x1.008b8p-1, -0x1.5003d4p-2, -0x1.35d22cp-3, -0x1.ba82ecp-3, -0x1.71f77p-2 }, { -0x1.96722cp-2, -0x1.b18b2ep-3, -0x1.6ce9aap0, -0x1.6eb7dap-1, -0x1.e7b15ep-8 }, { -0x1.99eafap-5, -0x1.467858p-2, -0x1.9fee4ep-1, -0x1.87ee4ap-3, 0x1.a6c488p-5 }, { 0x1.7a2274p-3, -0x1.f0d2e6p-3, -0x1.3495e6p-9, 0x1.9341acp-2, 0x1.99abf4p-2 } } } };
float conv2_biases[10] = { -0x1.1141e6p-3, 0x1.0714f8p-4, 0x1.53baeep-3, 0x1.a5254cp-3, 0x1.ca8008p-5, -0x1.1692bcp-2, -0x1.7f4544p-4, -0x1.154e32p-2, -0x1.1b9f26p-1, -0x1.303b84p-2 };


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
  static  unsigned long long aesl_llvm_cbe_norm_img_count = 0;
  float llvm_cbe_norm_img[28][28];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_features_conv1_count = 0;
  float llvm_cbe_features_conv1[6][24][24];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_pool_features1_count = 0;
  float llvm_cbe_pool_features1[6][12][12];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_features_conv2_count = 0;
  float llvm_cbe_features_conv2[10][8][8];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_pool_features2_count = 0;
  float llvm_cbe_pool_features2[10][4][4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_flat_array_count = 0;
  float llvm_cbe_flat_array[160];    /* Address-exposed local */
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
  float (*llvm_cbe_tmp__3)[28];
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  float (*llvm_cbe_tmp__6)[24][24];
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  float (*llvm_cbe_tmp__9)[12][12];
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
   char *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  float (*llvm_cbe_tmp__12)[8][8];
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  float (*llvm_cbe_tmp__13)[12];
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  float (*llvm_cbe_tmp__14)[12];
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  float (*llvm_cbe_tmp__15)[12];
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  float (*llvm_cbe_tmp__16)[12];
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  float (*llvm_cbe_tmp__17)[12];
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  float (*llvm_cbe_tmp__18)[12];
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
   char *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
   char *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  float (*llvm_cbe_tmp__21)[4][4];
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
   char *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
   char *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  float *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @cnn\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast [28 x [28 x float]]* %%norm_img to i8*, !dbg !4 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__1 = ( char *)(( char *)(&llvm_cbe_norm_img));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memset(i8* %%1, i32 0, i64 3136 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_7_count);
  ( char *)memset(( char *)llvm_cbe_tmp__1, 0u, 3136ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",3136ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [28 x [28 x float]]* %%norm_img, i64 0, i64 0, !dbg !3 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__3 = (float (*)[28])(&llvm_cbe_norm_img[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 28
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @normalization([28 x float]* %%img_in, [28 x float]* %%3) nounwind, !dbg !3 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_9_count);
  normalization(llvm_cbe_img_in, llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = bitcast [6 x [24 x [24 x float]]]* %%features_conv1 to i8*, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__4 = ( char *)(( char *)(&llvm_cbe_features_conv1));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = call i8* @memset(i8* %%4, i32 0, i64 13824 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_12_count);
  ( char *)memset(( char *)llvm_cbe_tmp__4, 0u, 13824ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",13824ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [6 x [24 x [24 x float]]]* %%features_conv1, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__6 = (float (*)[24][24])(&llvm_cbe_features_conv1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer1([28 x float]* %%3, [24 x [24 x float]]* %%6) nounwind, !dbg !5 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_14_count);
  convolutional_layer1(llvm_cbe_tmp__3, llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = bitcast [6 x [12 x [12 x float]]]* %%pool_features1 to i8*, !dbg !6 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__7 = ( char *)(( char *)(&llvm_cbe_pool_features1));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i8* @memset(i8* %%7, i32 0, i64 3456 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_17_count);
  ( char *)memset(( char *)llvm_cbe_tmp__7, 0u, 3456ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",3456ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__9 = (float (*)[12][12])(&llvm_cbe_pool_features1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @max_pooling_layer1([24 x [24 x float]]* %%6, [12 x [12 x float]]* %%9) nounwind, !dbg !6 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_19_count);
  max_pooling_layer1(llvm_cbe_tmp__6, llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = bitcast [10 x [8 x [8 x float]]]* %%features_conv2 to i8*, !dbg !6 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__10 = ( char *)(( char *)(&llvm_cbe_features_conv2));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i8* @memset(i8* %%10, i32 0, i64 2560 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_22_count);
  ( char *)memset(( char *)llvm_cbe_tmp__10, 0u, 2560ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",2560ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__11);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [10 x [8 x [8 x float]]]* %%features_conv2, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__12 = (float (*)[8][8])(&llvm_cbe_features_conv2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__13 = (float (*)[12])(&llvm_cbe_pool_features1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer2([12 x float]* %%13, [8 x [8 x float]]* %%12, [5 x [5 x float]]* getelementptr inbounds ([6 x [10 x [5 x [5 x float]]]]* @conv2_weights, i64 0, i64 0, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_30_count);
  convolutional_layer2(llvm_cbe_tmp__13, llvm_cbe_tmp__12, ((&conv2_weights[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 1, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__14 = (float (*)[12])(&llvm_cbe_pool_features1[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer2([12 x float]* %%14, [8 x [8 x float]]* %%12, [5 x [5 x float]]* getelementptr inbounds ([6 x [10 x [5 x [5 x float]]]]* @conv2_weights, i64 0, i64 1, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_37_count);
  convolutional_layer2(llvm_cbe_tmp__14, llvm_cbe_tmp__12, ((&conv2_weights[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 2, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__15 = (float (*)[12])(&llvm_cbe_pool_features1[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer2([12 x float]* %%15, [8 x [8 x float]]* %%12, [5 x [5 x float]]* getelementptr inbounds ([6 x [10 x [5 x [5 x float]]]]* @conv2_weights, i64 0, i64 2, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_44_count);
  convolutional_layer2(llvm_cbe_tmp__15, llvm_cbe_tmp__12, ((&conv2_weights[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 3, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__16 = (float (*)[12])(&llvm_cbe_pool_features1[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer2([12 x float]* %%16, [8 x [8 x float]]* %%12, [5 x [5 x float]]* getelementptr inbounds ([6 x [10 x [5 x [5 x float]]]]* @conv2_weights, i64 0, i64 3, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_51_count);
  convolutional_layer2(llvm_cbe_tmp__16, llvm_cbe_tmp__12, ((&conv2_weights[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 4, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__17 = (float (*)[12])(&llvm_cbe_pool_features1[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer2([12 x float]* %%17, [8 x [8 x float]]* %%12, [5 x [5 x float]]* getelementptr inbounds ([6 x [10 x [5 x [5 x float]]]]* @conv2_weights, i64 0, i64 4, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_58_count);
  convolutional_layer2(llvm_cbe_tmp__17, llvm_cbe_tmp__12, ((&conv2_weights[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [6 x [12 x [12 x float]]]* %%pool_features1, i64 0, i64 5, i64 0, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__18 = (float (*)[12])(&llvm_cbe_pool_features1[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @convolutional_layer2([12 x float]* %%18, [8 x [8 x float]]* %%12, [5 x [5 x float]]* getelementptr inbounds ([6 x [10 x [5 x [5 x float]]]]* @conv2_weights, i64 0, i64 5, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_65_count);
  convolutional_layer2(llvm_cbe_tmp__18, llvm_cbe_tmp__12, ((&conv2_weights[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = bitcast [10 x [4 x [4 x float]]]* %%pool_features2 to i8*, !dbg !8 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__19 = ( char *)(( char *)(&llvm_cbe_pool_features2));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = call i8* @memset(i8* %%19, i32 0, i64 640 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_73_count);
  ( char *)memset(( char *)llvm_cbe_tmp__19, 0u, 640ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",640ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [10 x [4 x [4 x float]]]* %%pool_features2, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__21 = (float (*)[4][4])(&llvm_cbe_pool_features2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @max_pooling_layer2([8 x [8 x float]]* %%12, [4 x [4 x float]]* %%21, float* getelementptr inbounds ([10 x float]* @conv2_biases, i64 0, i64 0)) nounwind, !dbg !8 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_75_count);
  max_pooling_layer2(llvm_cbe_tmp__12, llvm_cbe_tmp__21, (float *)((&conv2_biases[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = bitcast [160 x float]* %%flat_array to i8*, !dbg !8 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__22 = ( char *)(( char *)(&llvm_cbe_flat_array));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i8* @memset(i8* %%22, i32 0, i64 640 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_78_count);
  ( char *)memset(( char *)llvm_cbe_tmp__22, 0u, 640ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",640ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__23);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [160 x float]* %%flat_array, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__24 = (float *)(&llvm_cbe_flat_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 160
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @flattening_layer([4 x [4 x float]]* %%21, float* %%24) nounwind, !dbg !8 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_80_count);
  flattening_layer(llvm_cbe_tmp__21, (float *)llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @dense_layer(float* %%24, float* %%prediction) nounwind, !dbg !4 for 0x%I64xth hint within @cnn  --> \n", ++aesl_llvm_cbe_81_count);
  dense_layer((float *)llvm_cbe_tmp__24, (float *)llvm_cbe_prediction);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @cnn}\n");
  return;
}

