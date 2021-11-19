#include <stdio.h>

int main()
{
#ifdef INTEL
  asm("call f");
  asm("call f");
#endif // INTEL

#if defined(_MSC_VER)
#if defined(WIN32)
  asm("call _f");
  asm("call _f");
#else // WIN32  
  asm("call f");
  asm("call f");
#endif // defined(WIN32)
#endif // defined(_MSC_VER)

#if defined(sparc)
  asm("call f");
  asm("nop");
  asm("call f");
  asm("nop");
#endif // defined(sparc)

#if defined(POWERPC)
  asm("bl f");
  asm("bl f");
#endif // defined(POWERPC)

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
  __asm("mov.l	my_label,r1");
  __asm("jsr	@r1");
  __asm("mov.l	my_label,r1");
  __asm("jsr	@r1");
  __asm("jmp	my_label2")
  __asm("my_label:");
  __asm(".long	_f");
  __asm("my_label2:");
#endif // __sh__

#if defined(__H8300__)
  __asm("jsr f");
  __asm("jsr f");
#endif // __H8300__


#if defined(__bfin__)
  __asm("call _f");
  __asm("call _f");
#endif // __bfin__

#if define(__lm32__  )
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
