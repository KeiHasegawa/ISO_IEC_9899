#include <stdio.h>

void f(int x, int y)
{
  printf("x = %d, y = %d\n", x, y);
  int dummy;
  asm("idivl %%ecx" : "=a"(dummy), "=d" (y) : "a" (x), "d" (0), "c" (3));
  printf("x = %d, y = %d\n", x, y);  
}

int main(void)
{
  f(5,3);
  f(6,3);
  return 0;
}
