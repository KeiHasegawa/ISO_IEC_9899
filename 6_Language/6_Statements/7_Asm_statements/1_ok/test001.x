#include <stdio.h>

unsigned int test_ntohl(unsigned int x)
{
#ifdef INTEL
  asm("bswap %0" : "=r" (x) : "0" (x));
#endif
#ifdef sparc
#error 
#endif
#ifdef POWERPC
#error 
#endif
#ifdef __SPU__
#error 
#endif
  return x;
}

int main(void)
{
  unsigned int x = 0x12345678;
  printf("test_ntohl(0x%08x) = 0x%08x\n", x, test_ntohl(x));
  return 0;
}
