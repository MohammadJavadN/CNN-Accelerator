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
extern float dense_weights[160][10];
extern float dense_biases[10];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void dense_layer(float *llvm_cbe_flat_array, float *llvm_cbe_prediction);
void soft_max(float *, float *);


/* Global Variable Definitions and Initialization */
float dense_weights[160][10] = { { 0x1.1eb9f6p-5, -0x1.2cf25p-2, -0x1.22ebdcp-3, -0x1.3a1208p-3, -0x1.d2834p-3, -0x1.93051ap-3, 0x1.a72ab8p-6, 0x1.7a4112p-6, 0x1.a7f664p-5, 0x1.258a1cp-2 }, { 0x1.60c1f2p-2, 0x1.5c9fd2p-5, 0x1.266b98p-2, 0x1.c9cecp-6, -0x1.ba52b8p-1, 0x1.2eb828p-3, -0x1.02069ap-2, -0x1.3d983ep-7, 0x1.f2f286p-4, 0x1.c785dap-5 }, { 0x1.529f52p-3, 0x1.5fbbp-3, -0x1.296c44p-2, 0x1.37fd58p-5, -0x1.1dc3a4p-2, 0x1.f477cep-3, 0x1.76d59ep-3, -0x1.19ea7cp-3, -0x1.fc9174p-3, 0x1.37975ap-6 }, { 0x1.8ca27ep-5, -0x1.69a4ecp-3, -0x1.da3148p-4, -0x1.b6899ap-2, 0x1.e7f2b2p-3, 0x1.21fe96p-2, 0x1.b35c04p-9, -0x1.a7ef7ep-9, 0x1.7c02bap-6, -0x1.b99e76p-3 }, { -0x1.36c6fep-3, -0x1.5b3464p-2, 0x1.203c74p-4, -0x1.72b06cp-1, 0x1.aa0a3cp-2, -0x1.ab67cap-4, 0x1.9c928cp-4, -0x1.df486ep-3, 0x1.2c138p-4, 0x1.42ff34p-4 }, { -0x1.3a757ap-2, 0x1.0fbe14p-1, 0x1.742d1cp-4, -0x1.31f988p-4, 0x1.c08fep-3, 0x1.42698ep-3, -0x1.635aa6p-3, -0x1.416bb8p-4, 0x1.630126p-4, 0x1.854338p-5 }, { -0x1.baffecp-1, -0x1.561964p-4, -0x1.4731eep-1, 0x1.80235p-3, 0x1.6b84dep-2, 0x1.702ad6p-6, -0x1.97ff86p-4, -0x1.1c8ea4p-2, 0x1.90ebc8p-2, 0x1.557d8p-3 }, { -0x1.8e83f8p-4, 0x1.1ebedcp-4, 0x1.0ebef4p-4, 0x1.9fb98ep-5, 0x1.61847p-3, 0x1.542a24p-2, -0x1.a7fe3ep-2, 0x1.18afdep-3, 0x1.b80712p-4, -0x1.d2252cp-2 }, { 0x1.96c85ep-4, 0x1.3d85a6p-4, 0x1.1af01cp-2, -0x1.8d4e6ap-1, 0x1.1b665ap-2, 0x1.ef72ccp-3, -0x1.737edap-4, -0x1.ec88fp-3, 0x1.ec564ep-3, -0x1.ecacd6p-8 }, { -0x1.c5c116p-3, -0x1.5ab32p-4, 0x1.b9bcdcp-3, 0x1.543c0ap-3, 0x1.8b826ep-7, -0x1.87d2fep-3, 0x1.28c67ap-2, 0x1.ddab24p-4, 0x1.f54974p-6, -0x1.d8ff78p-3 }, { -0x1.becbbcp-3, 0x1.ead58ep-2, 0x1.eda13cp-3, -0x1.033f3ep-4, 0x1.ea23f8p-4, -0x1.79bb42p-2, -0x1.b37a6ep-3, 0x1.1c6496p-4, 0x1.dbac5cp-5, -0x1.2dc96p-6 }, { 0x1.57683ap-4, -0x1.03bbc6p-2, 0x1.532a9cp-2, -0x1.bb0226p-2, 0x1.3d89cep-2, -0x1.147338p-1, -0x1.2088acp-5, 0x1.102ce8p-5, -0x1.a2da9cp-4, 0x1.2e127ap-3 }, { 0x1.06e79cp-5, -0x1.c83f16p-4, 0x1.4ef528p-4, 0x1.4b0218p-3, -0x1.06461ep-2, 0x1.5601ecp-4, -0x1.76901cp-3, -0x1.da8d8ap-4, -0x1.4b1a16p-3, -0x1.211d0cp-4 }, { 0x1.7b3182p-3, -0x1.c4ac1ap-7, 0x1.72ca6cp-4, 0x1.380a7cp-3, 0x1.3593aep-4, 0x1.4afb4ap-5, 0x1.4d2bc4p-2, -0x1.933b64p-3, -0x1.30b366p-2, -0x1.645ec8p-3 }, { 0x1.b396c8p-2, -0x1.5ab15ap-5, -0x1.b0c198p-9, -0x1.6c4c86p-7, -0x1.2758b4p-3, -0x1.41d3fcp-4, 0x1.c1297ep-5, -0x1.59e124p-4, 0x1.29f9dp-8, -0x1.5be53ap-2 }, { 0x1.d12ed8p-2, 0x1.04efc8p-3, 0x1.23fef2p-3, 0x1.64a2a2p-2, -0x1.80afa4p-5, -0x1.61ee68p-6, 0x1.6b5198p-4, -0x1.678944p-2, -0x1.3a3b4ap-3, -0x1.0550e4p-6 }, { -0x1.5800ecp-4, 0x1.7ad25cp-3, 0x1.04915ap-3, 0x1.41ccp-2, -0x1.223cbcp0, -0x1.29be36p-3, -0x1.3d0f88p-1, 0x1.56e4dcp-2, -0x1.bd18p-4, -0x1.487e5cp-2 }, { -0x1.0a2bf8p-4, 0x1.129f1p-2, 0x1.9dbe7p-4, 0x1.0d9bcep-5, -0x1.79e508p-3, 0x1.17d8e2p-5, -0x1.5567d6p-4, 0x1.49dc06p-3, -0x1.516c44p-2, -0x1.4da5ep-4 }, { -0x1.643576p-3, -0x1.ca4932p-2, -0x1.8500c4p-5, 0x1.0760c6p-4, -0x1.7aca98p-2, 0x1.99a246p-2, -0x1.2b1eb4p-3, 0x1.b09c12p-3, -0x1.66532cp-3, 0x1.5a3a78p-5 }, { -0x1.eb8c58p-3, -0x1.019468p-3, -0x1.c78c1p-2, -0x1.56ecf8p-2, -0x1.b40fep-2, 0x1.99f7eap-1, 0x1.285338p-2, 0x1.2342bap-2, -0x1.5c77f4p-2, -0x1.24290ep-1 }, { -0x1.cb274cp-1, 0x1.b78504p-3, -0x1.d7975ap-3, -0x1.3f4d78p-3, 0x1.969d4cp-3, 0x1.b1ee36p-3, -0x1.21f16ap-1, 0x1.fa1f5ap-3, 0x1.cacbd6p-5, 0x1.2fc404p-3 }, { -0x1.959338p-2, -0x1.58572ap-1, -0x1.38f9d8p-2, -0x1.c106e8p-4, 0x1.d18dcep-2, -0x1.861752p-5, -0x1.efe33cp-3, -0x1.35273ep-2, -0x1.68ffa8p-3, 0x1.2f0a06p-1 }, { -0x1.908e6p-7, -0x1.68606ap-2, -0x1.8ae9e8p-3, -0x1.993a52p-6, 0x1.69c1fcp-2, -0x1.11ebbp-5, -0x1.ca1784p-2, 0x1.23feecp-3, 0x1.2d5d08p-2, 0x1.b5da78p-3 }, { 0x1.cfe976p-5, -0x1.30078cp-2, 0x1.fa6604p-2, -0x1.1492c4p-3, 0x1.2ad498p-3, -0x1.092a0cp-4, -0x1.204f94p-2, 0x1.b44058p-3, -0x1.203bdp-7, -0x1.4e119p-1 }, { -0x1.132ca6p-4, 0x1.550784p-3, -0x1.b5c1fcp-4, -0x1.bafb0cp-4, 0x1.0639fap-6, 0x1.ee0caep-5, -0x1.0a25dep-2, -0x1.d540cap-2, -0x1.4a9ca8p-3, -0x1.78f10ep-6 }, { 0x1.1d9f38p-4, -0x1.39d90ap-1, -0x1.1de74ep-2, -0x1.5b0966p-6, 0x1.f34768p-3, -0x1.155692p-4, -0x1.500b1cp-2, -0x1.5af7bp-4, 0x1.bfa5d6p-4, 0x1.e2ac54p-2 }, { 0x1.b09956p-3, 0x1.25e444p-4, -0x1.19159p-2, -0x1.da9dc4p-5, 0x1.ac20fp-3, -0x1.021112p-2, 0x1.1e7176p-4, -0x1.45a1d2p-3, -0x1.910096p-4, 0x1.43b8acp-3 }, { 0x1.394de6p-5, 0x1.159442p-3, 0x1.23ac62p-2, -0x1.48f04ep-1, 0x1.d7a1b6p-4, -0x1.d4b0a2p-2, 0x1.baf77ap-4, 0x1.2b017cp-1, -0x1.e1b0bep-3, -0x1.7e9fap-1 }, { 0x1.af067ap-6, 0x1.6c5d46p-5, -0x1.55dcbcp-3, -0x1.11d3bp-4, -0x1.e36178p-7, 0x1.67dd24p-5, 0x1.ead0a4p-5, -0x1.261e4cp-1, 0x1.5c4856p-8, 0x1.2ee574p-7 }, { 0x1.67ab72p-2, -0x1.b1e8cap-3, 0x1.a10932p-6, -0x1.7c3cd4p-3, -0x1.6d45a8p-3, -0x1.897adep-5, 0x1.b45f26p-3, -0x1.1fbed8p-1, 0x1.64d194p-2, -0x1.8d87dp-4 }, { 0x1.67945p-2, 0x1.d13454p-3, 0x1.071ca2p-3, 0x1.68272p-5, -0x1.ec36b2p-2, -0x1.31c2bap-3, -0x1.e40dc6p-7, -0x1.4a35p-4, -0x1.907382p-3, 0x1.6acd8cp-3 }, { -0x1.d6141ep-7, 0x1.8c51b2p-2, 0x1.a0576cp-2, -0x1.132bd6p-1, 0x1.4a4c1ep-2, -0x1.0737fp-1, 0x1.3f927ap-3, -0x1.352a6cp-4, -0x1.fa873cp-4, -0x1.538b96p-2 }, { -0x1.96823cp-1, -0x1.50966cp-3, 0x1.ccab28p-3, 0x1.8dc858p-8, 0x1.9f643cp-2, -0x1.dc33f2p-1, 0x1.795fd2p-1, -0x1.0664cp-2, -0x1.db901ap-5, 0x1.0f22f4p-3 }, { -0x1.4a9ap-3, 0x1.414f22p-1, -0x1.05b548p-2, -0x1.f3c528p-2, -0x1.b0b246p-2, -0x1.dc1b2p-4, 0x1.62dfcap-1, -0x1.2cd20ep-1, 0x1.11842ap-4, 0x1.73cd04p-3 }, { -0x1.29cfcap-3, 0x1.176d26p-1, -0x1.5db32cp-3, -0x1.77e25ap-3, -0x1.047228p-2, 0x1.5771fp-3, 0x1.92d6aap-3, -0x1.e31ebcp-2, 0x1.fb4144p-4, -0x1.78af86p-5 }, { -0x1.dd8906p-1, -0x1.7df388p-4, -0x1.a0ef7p-1, 0x1.e16456p-5, 0x1.5b7726p-2, 0x1.99750cp-2, 0x1.5eeb0cp-3, -0x1.e2c11ap-6, -0x1.3335e2p-6, 0x1.4ffdc6p-4 }, { 0x1.49e51cp-3, -0x1.fce09p-4, 0x1.559db8p-1, 0x1.9c9594p-2, -0x1.8f3e8cp-2, 0x1.02f1e4p-2, 0x1.0cfd88p-2, -0x1.21c082p-7, -0x1.7b4d42p0, -0x1.3b5ecp-2 }, { 0x1.998c7ep-2, -0x1.0fe226p-2, 0x1.fe47fcp-4, 0x1.eb2f3ap-4, 0x1.95a40cp-2, -0x1.aff05ap-4, -0x1.59a1a2p-3, 0x1.357c84p-2, -0x1.716b9p-2, -0x1.754eaap-2 }, { 0x1.6bd84p-10, -0x1.b6cce2p-5, 0x1.fd5bc8p-3, 0x1.1daa3ep-2, -0x1.7365bcp-2, 0x1.b7e4ccp-4, 0x1.cb4824p-5, -0x1.925312p-3, 0x1.ebd746p-3, -0x1.8cf7e6p-3 }, { -0x1.7ca31ep-2, -0x1.612e8p-3, -0x1.792c76p-4, 0x1.b0772cp-3, -0x1.8b3132p-4, -0x1.b96618p-3, -0x1.7bca92p-3, 0x1.03a49p-3, 0x1.57a87p-2, -0x1.1b0c7ap-3 }, { -0x1.c23742p-2, 0x1.a68896p-4, 0x1.6dffcep-2, 0x1.01c296p-1, 0x1.fcb45ap-6, 0x1.939e46p-3, -0x1.43dd6ep-1, 0x1.cf500ep-1, -0x1.5f7784p-2, -0x1.a49198p-1 }, { 0x1.a41b76p-2, 0x1.69010ep-2, -0x1.7d37fap-5, 0x1.7ea766p-4, -0x1.81bb6p-1, -0x1.abaf36p-4, -0x1.0edd54p-4, 0x1.0995bap-2, 0x1.e19722p-3, -0x1.fdcc4ep-3 }, { 0x1.cd0494p-3, 0x1.8c1958p-4, -0x1.5fd5bcp-5, -0x1.11df02p-3, -0x1.1be83ap-2, -0x1.21037ep-4, -0x1.d1b96p-3, -0x1.0b161cp-2, 0x1.dc9018p-4, 0x1.46bf8p-2 }, { -0x1.0010a8p-3, 0x1.eaf912p-5, -0x1.5e0d22p-5, 0x1.80c004p-5, 0x1.795b5p-5, -0x1.6b51fp-3, -0x1.4c6422p-3, 0x1.fe2594p-4, -0x1.449904p-6, 0x1.e35924p-5 }, { -0x1.3287c4p-1, 0x1.50d8dp-2, 0x1.88dc34p-2, 0x1.75b858p-2, 0x1.d4124cp-3, 0x1.198c7ap-1, -0x1.cbaf1cp-1, -0x1.5ff3d8p-5, -0x1.6ba15ep-1, -0x1.697d7p-2 }, { 0x1.bb39e2p-2, -0x1.83b1ap-3, 0x1.8053cep-5, 0x1.37e6cp-4, 0x1.9e9f2ep-7, 0x1.af521cp-4, -0x1.5b859p-6, 0x1.a2cc2ap-5, -0x1.7b23bap-1, 0x1.10fb48p-3 }, { 0x1.e7438ep-3, -0x1.10aaf6p-6, -0x1.716758p-3, 0x1.bbbe06p-3, -0x1.10ca16p-2, 0x1.5ef15p-3, 0x1.ba4a6p-3, -0x1.656ae8p-3, 0x1.320504p-6, -0x1.1081cap-4 }, { 0x1.c1b996p-2, -0x1.019b02p-1, -0x1.1a322ep-2, 0x1.101e88p-2, -0x1.58dd1ap-3, 0x1.bc6d94p-3, 0x1.f98458p-3, 0x1.673886p-3, 0x1.52acb6p-4, -0x1.00c22cp-3 }, { 0x1.7f0b54p-3, -0x1.37893ep-2, -0x1.45763ep-3, 0x1.2e5fe4p-4, -0x1.714314p-5, 0x1.37f082p-3, -0x1.0584fp0, 0x1.628e5p-4, -0x1.47f1aap-3, -0x1.117e88p-4 }, { 0x1.49ea4p-7, -0x1.54db08p-5, -0x1.76ffaap-6, 0x1.82ac2cp-4, -0x1.5837dcp-2, -0x1.7ae9dcp-4, -0x1.988694p-2, 0x1.27d878p-5, 0x1.cb54f4p-3, 0x1.92770cp-2 }, { 0x1.330ccap-2, -0x1.026784p-2, 0x1.0d8c9ap-4, -0x1.8d3d5ap-3, -0x1.aa70ecp-4, -0x1.2134dp-3, -0x1.4d5c72p-2, -0x1.0e0abep-3, 0x1.037c28p-5, 0x1.0213cp-2 }, { -0x1.ba0beap-4, 0x1.70340ep-3, -0x1.1fc81p-3, -0x1.626ea4p-2, 0x1.f82a4ep-8, 0x1.e29792p-3, 0x1.97edf8p-4, -0x1.f827e8p-8, 0x1.690c2ep-5, -0x1.639074p-4 }, { 0x1.b44562p-2, 0x1.a63e68p-2, 0x1.e7fbcp-2, -0x1.296a6p-3, -0x1.1718fep-2, -0x1.fe4c52p-3, -0x1.e9a70cp-2, 0x1.57181ep-2, -0x1.16ab5cp-3, -0x1.49341cp-1 }, { 0x1.19e408p-2, 0x1.0328fcp-4, 0x1.93672cp-3, 0x1.1c77b8p-4, -0x1.a1abe4p-4, -0x1.cb6d36p-5, 0x1.3719dp-2, -0x1.769c9ep-6, -0x1.1cf96ep-4, 0x1.592fe2p-4 }, { -0x1.279054p-3, -0x1.74134ep-1, -0x1.449b52p-3, -0x1.b6db2ep-4, -0x1.b671p-3, 0x1.2ccf7ep-1, 0x1.21139ep-1, -0x1.361a5cp-8, 0x1.734094p-7, -0x1.08590ep-2 }, { -0x1.b9d62p-4, 0x1.8afe2ap-2, 0x1.f63d1ap-4, 0x1.821894p-5, -0x1.e0d082p-2, 0x1.bdd892p-3, 0x1.f94c1cp-2, 0x1.2f6f36p-2, -0x1.81c6c8p-3, -0x1.4e3a34p-2 }, { -0x1.925ebap-2, -0x1.76ff4p-4, 0x1.bf7228p-2, 0x1.02472ap-4, -0x1.e97004p-2, 0x1.7cefd8p-2, -0x1.2a81a8p-1, 0x1.08c74ep-1, -0x1.374006p-2, -0x1.d63cdp-1 }, { -0x1.6cc9c2p-2, -0x1.9b7cdap-2, 0x1.b38aa2p-2, -0x1.3286b8p-7, -0x1.dee1dap-2, 0x1.15a75cp-3, 0x1.7e4668p-2, -0x1.704ef8p-3, -0x1.338742p-2, -0x1.59952ap-3 }, { -0x1.1ad342p-4, -0x1.6d7ce2p-1, 0x1.48212ap-5, 0x1.a75b4cp-7, -0x1.0607c6p-1, 0x1.7ffbc8p-4, 0x1.2402dap-2, 0x1.53bb5cp-2, 0x1.f63606p-6, -0x1.218d46p-4 }, { -0x1.ff76a4p-1, 0x1.4c4f3ep-4, 0x1.cc9c2ap-5, -0x1.749a28p-5, 0x1.7c861ap-4, -0x1.2a3e22p-2, 0x1.e53f3cp-3, -0x1.05f028p-2, -0x1.645dfcp-3, 0x1.1c82eap-6 }, { -0x1.9a73f6p-3, 0x1.bca678p-1, -0x1.43d662p-2, 0x1.28bd22p-3, -0x1.4eeec6p-1, 0x1.f44cdcp-2, -0x1.b08d3ap-1, 0x1.daeddp-3, -0x1.26e27p0, 0x1.f254bp-4 }, { -0x1.9da652p-8, 0x1.17a99p-3, 0x1.48b502p-1, 0x1.1cd6bcp-6, -0x1.13265ep-3, 0x1.e6fef8p-3, -0x1.d30f9p-5, -0x1.9e5f32p-1, -0x1.761d62p-2, -0x1.306a02p-3 }, { 0x1.213fb4p-9, 0x1.dc190cp-2, 0x1.65aa22p-3, -0x1.394d6cp-5, 0x1.a8add8p-3, -0x1.d3d27p-2, -0x1.569e8cp-3, 0x1.fdd272p-2, -0x1.d1a062p-3, -0x1.984a28p-3 }, { -0x1.40bee8p0, 0x1.18ce08p-4, 0x1.3a74eep-2, -0x1.d1370cp-3, 0x1.81a46ep-2, 0x1.4aeca2p-8, -0x1.30098ep-3, 0x1.01719ep-2, -0x1.7c856ap-1, 0x1.57529ep-1 }, { 0x1.49654p-4, -0x1.4a2eaap-4, -0x1.48854p-2, -0x1.0d4a18p-1, 0x1.0f9dc2p-3, 0x1.b47e56p-7, 0x1.295d2cp-3, 0x1.89971cp-2, -0x1.5155c2p-3, -0x1.14f908p-2 }, { -0x1.e3d3fap-3, 0x1.0daf5p-1, -0x1.d8140ap-4, -0x1.d8e7d2p-3, 0x1.7e7fd6p-2, 0x1.697da2p-3, 0x1.43285ep-5, 0x1.b56fep-3, -0x1.652a48p-2, -0x1.c55bc8p-2 }, { 0x1.031216p-4, 0x1.89c024p-2, -0x1.c3e47ep-3, -0x1.563356p-3, 0x1.2cff18p-3, -0x1.44e086p-2, -0x1.0a8bd4p-2, -0x1.576b4p-4, -0x1.df2502p-3, -0x1.b31e42p-6 }, { -0x1.4e0988p-5, 0x1.f8e278p-2, -0x1.6d2c92p-4, 0x1.312b04p-3, 0x1.7e6036p-3, -0x1.351e2cp-1, 0x1.7450b2p-2, 0x1.bfc6a6p-3, -0x1.880824p-2, -0x1.a6b4d2p-2 }, { 0x1.291564p-3, -0x1.f09e46p-2, -0x1.0862ecp-2, -0x1.6d6bd6p-1, 0x1.7fe4a2p-3, -0x1.e3751cp-3, 0x1.a8098p-2, -0x1.9d0d6cp-5, -0x1.56f934p-5, 0x1.f82644p-6 }, { 0x1.454254p-3, 0x1.57ebd6p-3, 0x1.204c94p-4, -0x1.d7661ep-2, -0x1.4033aep-2, 0x1.238c9ap-3, -0x1.9d4596p-4, -0x1.5e1a26p-8, -0x1.f30a44p-3, 0x1.0d9922p-2 }, { 0x1.489678p-6, -0x1.3faddp-3, 0x1.2cdee4p-3, -0x1.0d06e6p-3, 0x1.a11e5p-10, -0x1.139b0cp-3, -0x1.1c913cp-4, 0x1.09e9c4p-3, -0x1.1d9742p-2, 0x1.1d0e5p-4 }, { -0x1.c0516ap-6, 0x1.b9a4b6p-2, -0x1.27c08p-3, -0x1.c8d148p-3, 0x1.2c0078p-3, -0x1.e6074ep-4, -0x1.1b582p-3, -0x1.032392p-4, -0x1.e94ac8p-3, -0x1.fb2d66p-5 }, { 0x1.11a508p-2, -0x1.60b27ep-4, -0x1.60fe02p-3, -0x1.5bed9p-2, 0x1.75aae8p-4, -0x1.2d3cdap-2, 0x1.e7be68p-4, 0x1.2434cp-6, 0x1.526dfp-4, 0x1.3f1ba4p-4 }, { -0x1.41cd8ap-5, 0x1.d2f296p-4, 0x1.18ea06p-4, -0x1.62a262p-2, -0x1.5a02b6p-3, 0x1.c90afap-4, 0x1.66ac3ap-2, -0x1.6e2c84p-3, 0x1.dfbd5ep-4, -0x1.254662p-2 }, { -0x1.3e0da4p-2, 0x1.154c9cp-3, -0x1.4988fcp-4, -0x1.c3ea3ep-3, 0x1.9b0314p-7, -0x1.bf48eep-7, -0x1.37a46ap-6, 0x1.cd65dap-8, 0x1.32ac54p-2, 0x1.955c24p-5 }, { 0x1.55f9fcp-2, -0x1.2b44b8p-8, 0x1.259ef6p-2, -0x1.a280a4p-3, 0x1.78aebap-2, -0x1.a69112p-6, -0x1.4d5658p-1, 0x1.31da2ap-2, -0x1.217836p-1, -0x1.42da8ep-4 }, { 0x1.0314fep-2, 0x1.50b198p-3, 0x1.a47094p-3, -0x1.f350dap-1, 0x1.ef3aeep-2, -0x1.e31e06p-2, -0x1.ea4798p-3, 0x1.ddbb8ap-2, 0x1.bc7ef8p-4, 0x1.8e0604p-4 }, { -0x1.503aeap-2, 0x1.876e42p-2, 0x1.8b605ap-4, -0x1.7ca23ep-4, -0x1.804c02p-6, -0x1.884a9ep-3, -0x1.9c109ep-3, -0x1.2725p-3, -0x1.0735dap-1, 0x1.cd7e68p-7 }, { -0x1.f58366p-2, -0x1.517d54p-8, -0x1.d9634ap-3, 0x1.4171c2p-8, -0x1.8d7cfp-7, 0x1.bca4e4p-9, -0x1.a5c492p-3, 0x1.a4775ep-2, -0x1.489ac2p-3, 0x1.2729fep-2 }, { -0x1.71cd36p-2, 0x1.1d4698p-4, -0x1.d01f6p-2, 0x1.98da0ap-5, 0x1.4c1cep-2, -0x1.e14a6p-2, -0x1.0b794ep-4, 0x1.5dd0f2p-1, -0x1.29dfap-2, 0x1.5969d6p-2 }, { -0x1.4eb01p-3, 0x1.e9b79cp-3, 0x1.61806cp-3, -0x1.449144p-3, 0x1.8389cep-3, 0x1.504a16p-3, -0x1.dfe41cp-3, -0x1.beb0fep-5, 0x1.704e04p-8, -0x1.7bcb18p-6 }, { -0x1.b04d0cp-3, 0x1.037e4ap-3, 0x1.3864a2p-3, -0x1.9c91fcp-9, 0x1.9470ecp-2, -0x1.66cb6ep-3, -0x1.a45a72p-4, -0x1.d25dd8p-2, 0x1.0957b2p-2, -0x1.44bf1ep-3 }, { -0x1.b0bd86p-4, 0x1.589c68p-5, 0x1.0c0a44p-4, 0x1.ba789cp-4, 0x1.09e944p-2, -0x1.d6fcecp-6, 0x1.41a69ap-2, -0x1.dda848p-3, -0x1.a9538ep-4, -0x1.21e334p-3 }, { 0x1.b5a5bep-3, -0x1.522166p-4, -0x1.876d48p-2, -0x1.3387cp-1, 0x1.3f10d2p-1, 0x1.83305ep-5, -0x1.5a6216p-4, -0x1.bd7028p-2, 0x1.2b7744p-3, -0x1.02e2bp-1 }, { -0x1.eda06ep-5, -0x1.eb8e5ap-8, -0x1.3c086ap-2, -0x1.57846ep-3, 0x1.37325p-3, 0x1.1138fcp-3, -0x1.674f42p-7, -0x1.7040d6p-2, 0x1.beac9ep-3, 0x1.fa5efcp-3 }, { 0x1.2689cp-4, -0x1.d0094p-4, -0x1.1ee21ep-4, -0x1.51135ap-8, 0x1.60b5f2p-2, -0x1.56e666p-3, -0x1.4e3078p-2, -0x1.3a798p-4, 0x1.1a65d8p-2, 0x1.75820cp-2 }, { 0x1.54a622p-3, 0x1.8af134p-8, 0x1.a80a48p-7, -0x1.7d4708p-3, 0x1.1368b4p-2, -0x1.37593cp-3, -0x1.e3c384p-3, 0x1.3d0e6p-3, -0x1.adffe6p-3, -0x1.80bcb4p-3 }, { -0x1.42707p-2, 0x1.0f6f5ep-3, 0x1.5589d8p-4, 0x1.3b9814p-3, 0x1.942fbp-2, -0x1.c911fep-2, -0x1.a55ef4p-3, -0x1.b7ceecp-7, -0x1.db1f16p-4, -0x1.7cbd9ep-2 }, { 0x1.9dca3ep-6, -0x1.0c419ap-2, -0x1.41594ap-5, -0x1.f8bbdcp-4, -0x1.9bdd62p-4, 0x1.5757b4p-3, 0x1.85dcb2p-4, -0x1.07b39ep-7, -0x1.b0cc16p-3, 0x1.037628p-2 }, { -0x1.64560cp-4, 0x1.7dbcacp-3, -0x1.c1bd7ep-3, 0x1.3a8cdap-2, -0x1.636672p-3, -0x1.241668p-3, 0x1.593384p-3, 0x1.167f84p-6, 0x1.75789ap-2, -0x1.859a6ap-3 }, { -0x1.228bcap-2, -0x1.50b0d6p-4, -0x1.d39016p-6, 0x1.5fb5d4p-6, -0x1.cc6d34p-5, -0x1.07dadap-5, -0x1.00748p-5, -0x1.58bc66p-4, -0x1.d9bee6p-6, 0x1.fe9ba4p-3 }, { 0x1.757464p-3, -0x1.05edcap0, 0x1.9efc3p-5, -0x1.ee3f8cp-3, -0x1.2d07dep-3, -0x1.ad84c6p-6, -0x1.1c5e0ap-4, -0x1.3470e8p-2, 0x1.edc086p-3, -0x1.66e212p-3 }, { 0x1.6ec146p-2, -0x1.bc09d4p-4, 0x1.a1a87ap-3, -0x1.02dd54p-3, -0x1.344f28p-2, -0x1.f50d54p-5, 0x1.73330ep-2, -0x1.bca9a2p-3, 0x1.a58166p-2, -0x1.d49668p-2 }, { 0x1.129a74p-2, 0x1.3b9fdcp-2, 0x1.9c8148p-7, -0x1.0ed1cap-2, -0x1.f78f06p-5, -0x1.cc289p-4, 0x1.4af08p-2, -0x1.fe699ep-5, 0x1.b12758p-3, -0x1.4bee18p-2 }, { -0x1.589358p-2, 0x1.1a92d4p-4, 0x1.1f566p-7, -0x1.0ae5c2p-2, 0x1.b9fbf8p-3, -0x1.2f12fp-5, -0x1.3b302ep-2, 0x1.978beap-3, -0x1.78c17cp-2, 0x1.194308p-2 }, { -0x1.5700eep-2, 0x1.885748p-2, 0x1.00a648p-2, 0x1.9c55a8p-3, 0x1.440f6ep-4, -0x1.33fcfcp-2, -0x1.7bd788p-3, -0x1.74d67ep-3, -0x1.649f58p-4, 0x1.613042p-3 }, { -0x1.24a0c4p-2, 0x1.0c62bep-2, 0x1.f161a2p-4, 0x1.28421ap-7, -0x1.15b0fp-2, -0x1.703336p-2, -0x1.1027c6p-1, 0x1.f39f76p-2, -0x1.913ceap-2, -0x1.ba01fcp-2 }, { -0x1.8a5654p-3, -0x1.eff2acp-4, 0x1.08dc44p-2, -0x1.cfeed8p-5, 0x1.6d7546p-8, 0x1.43ee22p-4, -0x1.5590cp-2, -0x1.801564p-6, 0x1.a95facp-8, 0x1.ea1f78p-3 }, { -0x1.801f84p-7, -0x1.ef645cp-2, 0x1.8d600cp-6, -0x1.b37d7p-4, -0x1.c27874p-2, 0x1.f03e96p-6, -0x1.59a77cp-4, -0x1.11df6ep-3, 0x1.93651ap-2, 0x1.0a4ffp-2 }, { 0x1.3dff7p-3, -0x1.48c8cp-1, -0x1.4b8b7ap-3, 0x1.5ca6f8p-5, -0x1.c3311p-1, 0x1.3dfc48p-1, 0x1.2827d2p-5, -0x1.0322d8p0, 0x1.c5752cp-2, 0x1.643a04p-4 }, { -0x1.03db2ep-2, -0x1.b9cc0ep-6, -0x1.32d23cp-4, -0x1.b5b01cp-2, -0x1.0cda6p-3, 0x1.76bbe8p-8, -0x1.491746p0, 0x1.b6c212p-4, 0x1.78889p-3, 0x1.68d534p-2 }, { 0x1.007092p-2, -0x1.753f78p-2, -0x1.9d2b92p-3, 0x1.13275ep-4, -0x1.9c189p-2, -0x1.265882p-2, -0x1.8ad2cep-4, 0x1.685788p-3, 0x1.79275ap-4, 0x1.34c288p-5 }, { 0x1.70938ep-5, -0x1.f18cbp-2, -0x1.3b62f2p-3, 0x1.114956p-5, 0x1.5862bep-5, -0x1.d52798p-7, 0x1.569af6p-8, 0x1.47204cp-6, -0x1.06d0eap-4, -0x1.56425ap-4 }, { 0x1.df4edap-4, -0x1.7d1388p-8, -0x1.1aedbap-2, 0x1.2ea712p-3, -0x1.605f52p-4, 0x1.05c6ccp-2, -0x1.4c9d5cp-3, -0x1.198314p-2, 0x1.20cd88p-2, 0x1.b79becp-3 }, { -0x1.27d33p-4, 0x1.9d0ab4p-2, -0x1.73358cp-3, 0x1.acaca2p-6, 0x1.37f654p-2, 0x1.1d08d2p-2, -0x1.8de2c8p-1, -0x1.85d8fap-3, 0x1.181a42p-2, 0x1.6c584ep-3 }, { -0x1.29fc6ep-3, -0x1.573fecp-3, -0x1.366a1p-6, 0x1.113a2ep-5, 0x1.c2201cp-4, 0x1.af53b4p-10, 0x1.083754p-3, -0x1.71daecp-2, -0x1.c0d1aap-2, -0x1.255026p-3 }, { 0x1.b42ea2p-6, -0x1.7d44dcp-5, -0x1.04696cp-4, 0x1.69f32ep-2, -0x1.887bdap-2, -0x1.6a176ap-4, 0x1.11bdf2p-2, 0x1.fa5a6ep-3, 0x1.ece9f6p-6, -0x1.1219c4p-2 }, { -0x1.dc3b18p-3, -0x1.891d04p-4, -0x1.cda8b2p-4, 0x1.b1a524p-3, -0x1.ec6d62p-5, -0x1.0af588p-4, 0x1.297c62p-6, -0x1.5a5648p-3, -0x1.7e16c8p-4, -0x1.278ba6p-1 }, { -0x1.e3db1ap-4, -0x1.b21a82p-2, -0x1.b2b298p-3, 0x1.dd591ep-4, -0x1.95a0b2p-3, 0x1.53ee7cp-4, 0x1.f40766p-3, -0x1.b74a5cp-2, -0x1.46af56p-3, 0x1.18e75ep-2 }, { -0x1.e89fd2p-4, -0x1.c23a06p-2, 0x1.052bf2p-3, 0x1.00967ep-3, 0x1.18f0b2p-3, 0x1.b7009p-4, -0x1.84dee4p-3, -0x1.47bae4p-2, 0x1.e04ff2p-6, 0x1.79b1a2p-3 }, { -0x1.5cc486p-2, 0x1.7c3a64p-4, 0x1.7c1b8ep-2, 0x1.c5bc8cp-4, 0x1.7bb3eap-4, -0x1.749bacp-3, 0x1.2897d8p-1, -0x1.c6a874p-3, 0x1.c35becp-3, -0x1.93d344p-2 }, { 0x1.d5cb56p-3, 0x1.82f0d6p-5, 0x1.8d5768p-3, 0x1.5a7bb6p-5, 0x1.99c5c4p-2, 0x1.46190cp-3, 0x1.59fbb2p-4, -0x1.7e1ebcp-5, -0x1.8160ep-2, -0x1.54e07ep-3 }, { 0x1.9fdb2ap-3, -0x1.49d18ap-2, 0x1.6e4842p-3, 0x1.3d6bb6p-3, -0x1.c31d32p-3, -0x1.22ea6ep-2, -0x1.c10f5ap-5, 0x1.47e338p-2, -0x1.6ceeb6p-4, 0x1.99890ep-6 }, { 0x1.41148ap-3, 0x1.a72d06p-8, 0x1.4a8ebep-3, -0x1.d9f2ep-3, -0x1.0136ap-4, -0x1.3662f2p-2, 0x1.8f4ec6p-2, 0x1.020fep-3, 0x1.23c3f2p-8, 0x1.0cde04p-3 }, { -0x1.40fafp-2, 0x1.182e18p-2, -0x1.fc1f86p-2, 0x1.e30d2p-3, 0x1.324884p-3, -0x1.d99de8p-4, 0x1.7b194ap-2, -0x1.e8f562p-5, -0x1.0fc24p-7, -0x1.f9b236p-5 }, { -0x1.bffa8cp-3, 0x1.35c42ep-3, -0x1.5938b8p-2, 0x1.aeaf2ap-3, -0x1.9062acp-4, 0x1.11df1ap-2, 0x1.7a776p-3, 0x1.993b1ep-4, -0x1.4d8e9ep-5, 0x1.120384p-5 }, { 0x1.6b37ccp-2, 0x1.253bb4p-3, 0x1.d2bdfcp-4, -0x1.d5114ep-3, 0x1.32d972p-2, -0x1.1e3af6p-3, 0x1.5c887ep-5, -0x1.0f7176p-5, -0x1.b07334p-3, -0x1.27069ap-4 }, { -0x1.1653a2p-3, -0x1.c52c26p-3, 0x1.7a5d5cp-4, -0x1.0334e8p-4, 0x1.b180e8p-8, 0x1.4e9c56p-3, 0x1.804b48p-4, -0x1.6c297ap-5, 0x1.3f5774p-3, 0x1.08ff6cp-2 }, { -0x1.5b574ap-2, -0x1.a4d902p-4, 0x1.622aa6p-7, -0x1.a8c39p-8, 0x1.68c774p-2, -0x1.30d20ep-2, 0x1.a1509p-2, -0x1.823a24p-4, 0x1.8d9c2ap-2, 0x1.734288p-7 }, { -0x1.e8d492p-3, -0x1.0cf0f8p-2, 0x1.1b6928p-2, 0x1.4624ecp-2, 0x1.034164p-2, -0x1.1d8412p-2, -0x1.90d41p-3, -0x1.8cef8p-4, 0x1.70eaap-3, -0x1.72ebbep-4 }, { -0x1.7f8322p-2, 0x1.f795ccp-2, 0x1.150e5cp-4, -0x1.1f12e8p-2, 0x1.0f2608p-3, -0x1.48fd52p-3, -0x1.9ef4ep-4, 0x1.c1ade8p-2, 0x1.98c88p-3, -0x1.40026ap-3 }, { -0x1.94035cp-3, -0x1.29248ep-5, -0x1.fdda8ep-4, -0x1.91fbcp-5, 0x1.9df588p-3, 0x1.6fffbcp-4, -0x1.83bd44p-5, 0x1.058cacp-5, -0x1.9f8d76p-3, 0x1.265946p-5 }, { 0x1.3b1dd6p-3, -0x1.a3b494p-2, 0x1.7ea05p-4, -0x1.1cf0bp-2, 0x1.5cc658p-3, -0x1.3191e4p-3, 0x1.ecca56p-4, 0x1.54a46ap-3, 0x1.e2d58cp-4, -0x1.96f8c8p-4 }, { -0x1.91588ap-3, 0x1.2b747p-2, 0x1.c9b75ap-3, 0x1.b24eaap-5, 0x1.520ce8p-3, 0x1.a0db74p-5, -0x1.3a9674p-2, 0x1.eaa5dcp-2, -0x1.dfa0d6p-2, -0x1.25c3ap-1 }, { -0x1.02cf0ap-5, 0x1.b6a89p-7, -0x1.4f4de2p-2, -0x1.04652ap-3, 0x1.0fc9a4p-5, -0x1.dd422ap-3, -0x1.5a29ecp-1, 0x1.495cap-3, -0x1.b3bccep-6, 0x1.862658p-1 }, { 0x1.12cc22p-4, -0x1.b166e6p-4, 0x1.3531ecp-2, 0x1.1c14f2p-2, -0x1.481016p-1, 0x1.3b5826p-2, -0x1.22f9bap-2, -0x1.b98df6p-2, 0x1.04fab8p-4, -0x1.dc08aap-3 }, { -0x1.98ec34p-6, -0x1.6a1066p-4, 0x1.1b05ecp-3, 0x1.c79302p-6, -0x1.1599a6p-1, 0x1.71c804p-2, 0x1.033968p-4, -0x1.013aeep-2, 0x1.c421b4p-7, -0x1.e0ac8cp-4 }, { 0x1.6c960ep-2, 0x1.394e8cp-5, 0x1.c426aep-2, -0x1.d3ee78p-4, -0x1.033d1ep0, 0x1.14f51p-4, 0x1.26a774p-2, -0x1.0bde04p0, 0x1.831e02p-2, -0x1.c34816p-3 }, { -0x1.49223cp-3, 0x1.4d11ep-3, 0x1.67258cp-3, 0x1.58a4dp-3, 0x1.9857d6p-2, -0x1.414ee2p-1, 0x1.fc26ecp-5, 0x1.9eb504p-3, -0x1.1a24ap-2, -0x1.cdc32ap-2 }, { 0x1.16ef5p-3, 0x1.c118fep-4, -0x1.8d1b74p-4, 0x1.faf7d4p-4, -0x1.88c9p-3, -0x1.18b948p-1, -0x1.4133fep-4, -0x1.4be5ccp-4, -0x1.023e34p-2, 0x1.8a5c14p-3 }, { 0x1.cb6deep-4, -0x1.38149cp-3, 0x1.d18552p-4, 0x1.69f5eap-2, -0x1.f7b2b6p-4, -0x1.59b5fap-1, -0x1.f50a7p-2, 0x1.bef80ap-3, -0x1.518892p-3, -0x1.5f4c4p-11 }, { -0x1.7f5852p-5, -0x1.582708p-3, 0x1.d6c976p-4, 0x1.205c38p-2, -0x1.17afdap-2, -0x1.70befp-1, -0x1.be6126p-4, -0x1.44d3c4p-6, -0x1.4237c4p-6, 0x1.6d0f9cp-3 }, { 0x1.8cad3ep-3, 0x1.74f4ep-3, 0x1.6fdf3ep-3, -0x1.4d04dap-1, 0x1.6e4fd8p-2, -0x1.c5d746p-3, 0x1.23b672p-3, 0x1.ba1304p-4, 0x1.980d36p-3, -0x1.d6fa5ep-3 }, { -0x1.2705c2p-3, 0x1.486394p-3, 0x1.b5918ap-2, -0x1.0b071cp-4, -0x1.ca5f78p-5, 0x1.68e3cep-6, -0x1.8b8e1ep-2, -0x1.5072e4p-3, -0x1.a24d36p-4, 0x1.e466aep-3 }, { 0x1.087e4cp-4, -0x1.0bb7acp-2, 0x1.ff8d44p-6, -0x1.42371ep-3, 0x1.bfb6cap-3, -0x1.51624p-4, 0x1.0da21ep-3, -0x1.aca3e8p-6, -0x1.e8be5ep-4, 0x1.df4ffcp-4 }, { 0x1.4eedc8p-4, -0x1.189d88p-1, -0x1.d9d572p-4, -0x1.99d58ep-4, -0x1.3d688ap-2, -0x1.0afac6p-2, 0x1.a2f9p-2, 0x1.6e5576p-3, 0x1.d883ep-3, 0x1.7e4e16p-4 }, { -0x1.91a254p-3, -0x1.57e3e8p-1, -0x1.1c963ep-3, -0x1.3d3532p-1, 0x1.b592bp-3, 0x1.7871b6p-3, 0x1.1603cap-6, 0x1.c3311ep-4, 0x1.3d3476p-1, -0x1.447b7ap-2 }, { -0x1.167a56p-4, -0x1.3ca6a2p-3, 0x1.ff4fep-2, -0x1.33ea86p-3, -0x1.f6c41ep-4, 0x1.173752p-2, 0x1.32fa0ap-4, 0x1.bff1bp-3, 0x1.c8b91p-3, -0x1.8e9d8ep-2 }, { -0x1.3165ep-3, -0x1.1dfe18p-5, -0x1.94fc34p-5, 0x1.99272ap-3, -0x1.07f68ep-3, 0x1.49c82p-3, -0x1.078f88p-4, 0x1.477898p-7, -0x1.83e052p-4, -0x1.279e8cp-3 }, { -0x1.8b83p-7, -0x1.fcb302p-6, -0x1.2d0eb2p-2, -0x1.33cea6p-5, -0x1.2c490ap-4, 0x1.05ff38p-2, 0x1.9364dcp-4, -0x1.74c0dap-6, -0x1.15cf4cp-6, 0x1.0f3ce6p-2 }, { -0x1.462fdp-2, -0x1.ae57e2p-3, -0x1.1aab14p-2, 0x1.aa39acp-3, 0x1.e724fcp-3, 0x1.ff1e3cp-3, 0x1.45ab78p-2, -0x1.33e5f8p-5, -0x1.26af86p-4, -0x1.dd30e8p-4 }, { -0x1.9cde54p-2, -0x1.3e1414p-5, -0x1.0b7eecp-2, 0x1.00dc66p-1, 0x1.17e834p-2, 0x1.a6be62p-2, 0x1.a4c24ap-5, -0x1.350d68p-2, 0x1.080626p-3, -0x1.54814cp-3 }, { -0x1.c9dfa6p-2, 0x1.5c951ap-4, -0x1.cc0ab6p-2, 0x1.75a682p-2, -0x1.4744e2p-1, 0x1.a56036p-2, 0x1.b8629ep-4, -0x1.0784e2p-1, 0x1.76e1dp-2, -0x1.467d0ap-2 }, { 0x1.c3a5fep-6, 0x1.def35ap-3, -0x1.a09b8cp-2, 0x1.9286c6p-6, -0x1.adee18p-2, 0x1.20ae06p-2, -0x1.3a4806p-6, -0x1.bd407ap-1, 0x1.96caap-2, 0x1.8c39d8p-3 }, { -0x1.92524p-3, -0x1.fa0d24p-2, 0x1.0bdc5cp-4, 0x1.5aaa9ap-3, 0x1.0db21ep-2, -0x1.3ad674p-4, -0x1.57a5eep-3, -0x1.971d1cp-5, -0x1.65f026p-5, 0x1.6efc0ep-4 }, { -0x1.004402p-4, 0x1.ca3a88p-3, -0x1.4687a4p-5, 0x1.503e88p-2, -0x1.1a48aap-1, -0x1.69eb66p-2, -0x1.039c66p-1, 0x1.a637d2p-2, 0x1.071496p-4, -0x1.18754ap-1 }, { -0x1.971006p-5, -0x1.4444dep-4, 0x1.b27368p-3, 0x1.1c8214p-2, -0x1.f4315ap-1, -0x1.a7c0fp-2, -0x1.526024p-3, 0x1.9fe32cp-2, -0x1.87354ap-2, 0x1.84567cp-3 }, { 0x1.9abf22p-2, -0x1.15211p-2, -0x1.84d22ep-5, -0x1.155442p-3, -0x1.094a02p0, -0x1.01c252p-3, -0x1.efda5p-6, 0x1.1ac7b4p-2, -0x1.7045b8p-6, -0x1.a3c1d2p-6 }, { -0x1.b4deap-4, -0x1.d51e5cp-3, 0x1.695cd6p-5, 0x1.f9a422p-3, 0x1.4ed1bap-7, -0x1.fbd5acp-3, -0x1.88a0dp-2, 0x1.028ad4p-2, 0x1.b3f808p-2, -0x1.721328p-1 }, { -0x1.7602f6p-2, 0x1.aaa82cp-3, 0x1.43a302p-3, 0x1.efd3a4p-4, -0x1.589232p-2, -0x1.ee2b74p-3, -0x1.9f231cp-1, 0x1.55652cp-3, -0x1.1c5d8cp-4, -0x1.01a04cp-4 }, { -0x1.fddc56p-4, -0x1.9e089cp-3, 0x1.8f397ap-3, 0x1.8d8c46p-3, -0x1.59bf4p-2, 0x1.5d5274p-4, -0x1.16c6b4p-2, 0x1.71ee64p-3, 0x1.482b4cp-5, -0x1.63b7ep-8 }, { 0x1.4e15e6p-2, -0x1.2f4bcep-1, -0x1.83b612p-2, -0x1.57d648p-3, -0x1.476108p-1, -0x1.63f646p-3, 0x1.9ac856p-4, -0x1.f29a4ep-6, -0x1.7bcc86p-2, 0x1.2d9a82p-2 }, { -0x1.930104p-2, 0x1.e0a796p-4, -0x1.8fd444p-3, -0x1.18fc94p-3, 0x1.8a816p-3, 0x1.9ca7c4p-3, -0x1.a42cdcp-2, 0x1.7ed5b2p-5, 0x1.d879e2p-3, -0x1.5c9328p-4 }, { -0x1.45527ep-1, -0x1.4378e6p-6, -0x1.706aap-3, 0x1.350c28p-4, 0x1.b41fd4p-3, -0x1.ed1c0cp-4, -0x1.5b49fap-3, 0x1.6c4126p-7, -0x1.04280ap-2, 0x1.c3c6fp-3 }, { -0x1.2a727ep-1, -0x1.533b0ap-3, 0x1.7bbbb2p-3, 0x1.38497p-2, 0x1.d6a9bep-3, 0x1.57e3ccp-3, -0x1.c35338p-3, 0x1.e7490ep-4, -0x1.2ee574p-2, -0x1.de49dap-4 }, { 0x1.84099ep-3, -0x1.60f8c8p-1, -0x1.81d8acp-1, -0x1.2f6ad6p-4, -0x1.9c4e14p-2, 0x1.6b4d1ap-2, -0x1.6c28a4p-2, 0x1.3b5b2ap-2, -0x1.456b78p-5, -0x1.1ef94ap-1 }, { -0x1.3b3908p-2, 0x1.3d3b52p-2, -0x1.2739ap-1, -0x1.f7e672p-3, 0x1.0cd5ecp-1, 0x1.03400ap-3, -0x1.348eeap-2, 0x1.aeff94p-3, -0x1.e477c4p-2, 0x1.e2a6eap-4 }, { -0x1.31340ap-2, 0x1.2bef88p-4, -0x1.e8aedcp-4, 0x1.e5ea14p-3, -0x1.48b158p-4, -0x1.38ed56p-3, -0x1.b0f71ap-2, 0x1.1dd96ep-3, -0x1.3fb442p-1, 0x1.02ca06p-2 }, { -0x1.c82398p-3, 0x1.5aa0bcp-3, -0x1.16290ep-2, 0x1.48e946p-2, -0x1.f24622p-4, 0x1.03628ap-1, 0x1.542312p-3, -0x1.23cabep-6, -0x1.1f8182p-1, -0x1.1dc006p-3 }, { 0x1.177d12p-3, 0x1.55fa22p-1, 0x1.67ef08p-1, -0x1.a389dep-3, -0x1.0a0846p0, -0x1.9e225ep-3, 0x1.f57bcep-4, -0x1.9f7128p-2, 0x1.5da1d8p-4, 0x1.81a55ep-4 } };
float dense_biases[10] = { 0x1.9c635ep-3, 0x1.46cff2p-2, -0x1.9e6d9p-3, -0x1.867afcp-5, 0x1.58baeep-4, 0x1.a43c46p-6, -0x1.976482p-4, -0x1.3de6e6p-5, 0x1.94892p-6, -0x1.4d657cp-3 };


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

void dense_layer(float *llvm_cbe_flat_array, float *llvm_cbe_prediction) {
  static  unsigned long long aesl_llvm_cbe_dense_array_count = 0;
  float llvm_cbe_dense_array[10];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  float llvm_cbe_tmp__4;
  float llvm_cbe_tmp__4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  float *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  float llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  float *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  float llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  float llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  float *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  float llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  float *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  float *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @dense_layer\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast [10 x float]* %%dense_array to i8*, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__1 = ( char *)(( char *)(&llvm_cbe_dense_array));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memset(i8* %%1, i32 0, i64 40 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_10_count);
  ( char *)memset(( char *)llvm_cbe_tmp__1, 0u, 40ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",40ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__2);
}
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%19, %%14  for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__17);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge3 to i64, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__4__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__19;

llvm_cbe_tmp__20:
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [10 x float]* @dense_biases, i64 0, i64 %%3, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__13 = (float *)(&dense_biases[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__3) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dense_biases' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* %%15, align 4, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__14 = (float )*llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__14, *(int*)(&llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = fadd float %%12, %%16, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__15 = (float )((float )(llvm_cbe_tmp__11 + llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__15, *(int*)(&llvm_cbe_tmp__15));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [10 x float]* %%dense_array, i64 0, i64 %%3, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__16 = (float *)(&llvm_cbe_dense_array[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__3) < 10 && "Write access out of array 'dense_array' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* %%18, align 4, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_46_count);
  *llvm_cbe_tmp__16 = llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add nsw i32 %%storemerge3, 1, !dbg !5 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__17 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__17&4294967295ull)));
  if (((llvm_cbe_tmp__17&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__21;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__17;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__19:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.preheader ], [ %%13, %%4  for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = phi float [ 0.000000e+00, %%.preheader ], [ %%12, %%4  for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__4 = (float )llvm_cbe_tmp__4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__4);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__11);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%storemerge12 to i64, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__5 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [160 x [10 x float]]* @dense_weights, i64 0, i64 %%6, i64 %%3, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__6 = (float *)(&dense_weights[(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 160
#endif
][(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 160)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dense_weights' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__3) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'dense_weights' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__7 = (float )*llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__7, *(int*)(&llvm_cbe_tmp__7));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds float* %%flat_array, i64 %%6, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__8 = (float *)(&llvm_cbe_flat_array[(((signed long long )llvm_cbe_tmp__5))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* %%9, align 4, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__9 = (float )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__9, *(int*)(&llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = fmul float %%8, %%10, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__10 = (float )((float )(llvm_cbe_tmp__7 * llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__10, *(int*)(&llvm_cbe_tmp__10));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = fadd float %%5, %%11, !dbg !3 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__11 = (float )((float )(llvm_cbe_tmp__4 + llvm_cbe_tmp__10));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%storemerge12, 1, !dbg !5 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
  if (((llvm_cbe_tmp__12&4294967295U) == (160u&4294967295U))) {
    goto llvm_cbe_tmp__20;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__12;   /* for PHI node */
    llvm_cbe_tmp__4__PHI_TEMPORARY = (float )llvm_cbe_tmp__11;   /* for PHI node */
    goto llvm_cbe_tmp__19;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__21:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [10 x float]* %%dense_array, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__18 = (float *)(&llvm_cbe_dense_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @soft_max(float* %%21, float* %%prediction) nounwind, !dbg !4 for 0x%I64xth hint within @dense_layer  --> \n", ++aesl_llvm_cbe_56_count);
  soft_max((float *)llvm_cbe_tmp__18, (float *)llvm_cbe_prediction);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @dense_layer}\n");
  return;
}

