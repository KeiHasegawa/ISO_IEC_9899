#include <stdio.h>

int main()
{
#if defined(INTEL)
  asm("call f");
  asm("call f");
#endif // defined(INTEL)

#if defined(_MSC_VER)
#if defined(WIN32)
  asm("call _f");
  asm("call _f");
#else // WIN32  
  asm("call f");
  asm("call f");
#endif // defined(WIN32)
#endif // defined(_MSC_VER)

#if defined(__i386__) && !defined(INTEL)
  __asm("call f");
  __asm("call f");
#endif
 
#if defined(sparc)
  asm("call f");
  asm("nop");
  asm("call f");
  asm("nop");
#endif // defined(sparc)

#if defined(POWERPC) || defined(__PPC__)
  asm("bl f");
  asm("bl f");
#endif // defined(POWERPC) || defined(__PPC__)

#if defined(__SPU__)
  asm("brsl $lr,f");
  asm("brsl $lr,f");
#endif // defined(__SPU__)

#if defined(__aarch64__)
  __asm("bl f");
  __asm("bl f");
#endif // __aarch64__
  
#if defined(__arm__)
  __asm("bl f");
  __asm("bl f");
#endif // __arm__

#if defined(__sh__)
#error
#endif // __sh__

#if defined(__H8300__)
  __asm("jsr f");
  __asm("jsr f");
#endif // __H8300__

#if defined(__bfin__)
  __asm("call _f");
  __asm("call _f");
#endif // __bfin__

#if defined(__lm32__)
  __asm("calli _f");
  __asm("calli _f");
#endif // __lm32__

#if defined(__m32c__)
  __asm("jsr.a	_f");
  __asm("jsr.a	_f");
#endif // __m32c__

#if defined(__m32r__)
  __asm("bl	f");
  __asm("bl	f");
#endif // __m32r__

#if defined(__MICROBLAZE__)
  __asm("brlid	r15, f");
  __asm("nop");
  __asm("brlid	r15, f");
  __asm("nop");
#endif // __MICROBLAZE__

#if defined(__mips__)
  __asm("jal	f");
  __asm("jal	f");
#endif //  __mips__

#if defined(__mn10300__)
  __asm("call f,[],0");
  __asm("call f,[],0");
#endif // __mn10300__

#if defined(__moxie__)
  __asm("jsra	f");
  __asm("jsra	f");
#endif // __moxie__

#if defined(__or1k__)
  __asm("l.jal	f");
  __asm("l.jal	f");
#endif // __or1k__

#if defined(__pru__)
  __asm("call	%label(f)");
  __asm("call	%label(f)");
#endif // __pru__
  
#if defined(__RL78__)
  __asm("call	!!f");
  __asm("call	!!f");
#endif  

#if defined(__v850__)
  __asm("movhi hi(_f),r0,r10");
  __asm("movea lo(_f),r10,r10");
  __asm("jarl .+4, r31 ; add 4, r31 ; jmp r10")
  __asm("movhi hi(_f),r0,r10");
  __asm("movea lo(_f),r10,r10");
  __asm("jarl .+4, r31 ; add 4, r31 ; jmp r10")
#endif //  __v850__
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
void f(void)
{
  static int n;
  if ( n )
    printf("`f' called %d times.\n", ++n);
  else {
    printf("`f' called first.\n");
    ++n;
  }
}
