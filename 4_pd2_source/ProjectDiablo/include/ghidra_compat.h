/* ghidra_compat.h - definitions for the helper operations and pseudo-registers Ghidra's C output uses. */
#pragma once
#include <windows.h>
#include <intrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long double float10;                      /* x87 80-bit value */
#define ExceptionList   (*(void **)NtCurrentTeb())  /* fs:[0], head of the SEH chain */
#define in_FS_OFFSET    ((uint8_t *)NtCurrentTeb())  /* fs: segment base = TEB */
extern uint32_t MXCSR;                             /* SSE control/status register (use _mm_getcsr/_mm_setcsr) */
static code *swi(int n) { (void)n; __debugbreak(); return 0; }   /* software interrupt, e.g. int3 */
typedef unsigned int   unsigned_int;    /* Ghidra spellings of C++ type names */
typedef unsigned short unsigned_short;
typedef unsigned char  unsigned_char;
#define builtin_strncpy(d,s,n) strncpy((char *)(d),(const char *)(s),(n))   /* inlined copy loops */
#define builtin_memcpy(d,s,n)  memcpy((d),(s),(n))
#define builtin_memset(d,c,n)  memset((d),(c),(n))
#define fscale(x,e)            ldexpl((x),(int)(e))                          /* x87 FSCALE */
#define fsin(x)   sinl(x)                 /* x87 instructions Ghidra writes as functions */
#define fcos(x)   cosl(x)
#define fptan(x)  tanl(x)
#define fsqrt(x)  sqrtl(x)
#define f2xm1(x)  (exp2l(x) - 1.0L)
#define fyl2x(x,y) ((y) * log2l(x))
#define fpatan(y,x) atan2l((y),(x))
#define rdtsc()   __rdtsc()
uint32_t *cpuid(uint32_t leaf);                /* CPUID: returns {eax,ebx,ecx,edx} */
uint32_t *cpuid_basic_info(uint32_t leaf);     /* CPUID, leaf 0: returns {eax,ebx,ecx,edx} */
uint32_t *cpuid_Version_info(uint32_t leaf);   /* CPUID, leaf 1 */
uint32_t *cpuid_cache_tlb_info(uint32_t leaf); /* CPUID, leaf 2 */

#define CARRY1(a,b) ((uint8_t)((uint8_t)(a) + (uint8_t)(b)) < (uint8_t)(a))
#define CARRY4(a,b) ((uint32_t)((uint32_t)(a) + (uint32_t)(b)) < (uint32_t)(a))
#define CONCAT11(hi,lo) ((uint16_t)(((uint64_t)(uint8_t)(hi) << 8) | ((uint64_t)(lo) & 0xffULL)))
#define CONCAT12(hi,lo) ((uint32_t)(((uint64_t)(uint8_t)(hi) << 16) | ((uint64_t)(lo) & 0xffffULL)))
#define CONCAT13(hi,lo) ((uint32_t)(((uint64_t)(uint8_t)(hi) << 24) | ((uint64_t)(lo) & 0xffffffULL)))
#define CONCAT14(hi,lo) ((uint64_t)(((uint64_t)(uint8_t)(hi) << 32) | ((uint64_t)(lo) & 0xffffffffULL)))
#define CONCAT21(hi,lo) ((uint32_t)(((uint64_t)(uint16_t)(hi) << 8) | ((uint64_t)(lo) & 0xffULL)))
#define CONCAT22(hi,lo) ((uint32_t)(((uint64_t)(uint16_t)(hi) << 16) | ((uint64_t)(lo) & 0xffffULL)))
#define CONCAT24(hi,lo) ((uint64_t)(((uint64_t)(uint16_t)(hi) << 32) | ((uint64_t)(lo) & 0xffffffffULL)))
#define CONCAT31(hi,lo) ((uint32_t)(((uint64_t)(uint32_t)(hi) << 8) | ((uint64_t)(lo) & 0xffULL)))
#define CONCAT35(hi,lo) ((uint64_t)(((uint64_t)(uint32_t)(hi) << 40) | ((uint64_t)(lo) & 0xffffffffffULL)))
#define CONCAT43(hi,lo) ((uint64_t)(((uint64_t)(uint32_t)(hi) << 24) | ((uint64_t)(lo) & 0xffffffULL)))
#define CONCAT44(hi,lo) ((uint64_t)(((uint64_t)(uint32_t)(hi) << 32) | ((uint64_t)(lo) & 0xffffffffULL)))
#define CONCAT62(hi,lo) ((uint64_t)(((uint64_t)(uint64_t)(hi) << 16) | ((uint64_t)(lo) & 0xffffULL)))
#define CONCAT71(hi,lo) ((uint64_t)(((uint64_t)(uint64_t)(hi) << 8) | ((uint64_t)(lo) & 0xffULL)))
#define NAN(x)       isnan(x)
#define POPCOUNT(x)  __popcnt((unsigned)(x))
#define SBORROW4(a,b) (((((int32_t)(a)) ^ ((int32_t)(b))) & (((int32_t)(a)) ^ (int32_t)((uint32_t)(a) - (uint32_t)(b)))) < 0)
#define SQRT(x)      sqrt(x)
/* SUB104: operates on 10+ byte values (SSE/x87); no portable C definition */
uint64_t SUB104();
/* SUB108: operates on 10+ byte values (SSE/x87); no portable C definition */
uint64_t SUB108();
#define SUB21(v,off) ((uint8_t)((uint64_t)(v) >> (8 * (off))))
#define SUB41(v,off) ((uint8_t)((uint64_t)(v) >> (8 * (off))))
#define SUB42(v,off) ((uint16_t)((uint64_t)(v) >> (8 * (off))))
#define SUB82(v,off) ((uint16_t)((uint64_t)(v) >> (8 * (off))))
#define SUB84(v,off) ((uint32_t)((uint64_t)(v) >> (8 * (off))))
/* ZEXT416: operates on 16+ byte values (SSE/x87); no portable C definition */
uint64_t ZEXT416();
#define ZEXT48(v) ((uint64_t)(uint32_t)(v))
uint32_t *cpuid_Extended_Feature_Enumeration_info(uint32_t leaf);   /* CPUID leaf query: returns {eax,ebx,ecx,edx} */

/* type names Ghidra used without a definition (layout unknown) */
typedef struct ThrowInfo ThrowInfo;
typedef struct _ _;
typedef struct _Collvec _Collvec;
typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS;
typedef struct _FILETIME _FILETIME;
typedef struct _Facet_base _Facet_base;
typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER;
typedef struct _LUID _LUID;
typedef struct _Locimp _Locimp;
typedef struct _Locinfo _Locinfo;
typedef struct _Lockit _Lockit;
typedef struct _Mbstatet _Mbstatet;
typedef struct _TOKEN_PRIVILEGES _TOKEN_PRIVILEGES;
typedef struct __int64 __int64;
typedef struct __time64_t __time64_t;
typedef struct _func_4879 _func_4879;
typedef struct _func_void_void_ptr _func_void_void_ptr;
typedef struct _iobuf _iobuf;
typedef struct _onexit_t _onexit_t;
typedef struct codecvt_base codecvt_base;
typedef struct error_type error_type;
typedef struct facet facet;
typedef struct id id;
typedef struct int3 int3;
typedef struct ios_base ios_base;
typedef struct lconv lconv;
typedef struct locale locale;
typedef struct sbyte sbyte;
typedef struct tagINPUT tagINPUT;
typedef struct uint5 uint5;
typedef struct wint_t wint_t;
