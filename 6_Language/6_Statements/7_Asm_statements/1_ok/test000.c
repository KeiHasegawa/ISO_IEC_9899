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

#if defined(ARM)
#error  
  asm("bl f");
  asm("bl f");
#endif 

#if defined(AARCH64)
#error  
  asm("bl f");
  asm("bl f");
#endif 
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
