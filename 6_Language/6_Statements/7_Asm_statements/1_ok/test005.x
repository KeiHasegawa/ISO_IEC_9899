#include <stdio.h>

int x = 123;
int y = 456;

int main(void)
{
  printf("x = %d, y = %d\n", x, y);

  asm("mov %1, %%eax\n\t"
      "mov %%eax, %0\n\t"
      : "=r"(x)
      : "r"(-y)
      : "%eax"
      );

  printf("x = %d, y = %d\n", x, y);
  return 0;
}
