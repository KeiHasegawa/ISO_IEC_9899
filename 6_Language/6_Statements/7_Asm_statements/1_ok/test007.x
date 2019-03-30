#include <stdio.h>

int x = 123;

int main(void)
{
  printf("x = %d\n", x);
  asm("inc %0" : "+r"(x));
  printf("x = %d\n", x);
  return 0;
}
