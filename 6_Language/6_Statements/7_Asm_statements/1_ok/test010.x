#include <stdio.h>

int x = 123;
int y = 456;

int main(void)
{
  printf("x = %d, y = %d\n", x, y);
  asm("mov %0, (%1)" : : "r"(y), "r"(&x) : "memory");
  printf("x = %d, y = %d\n", x, y);
  return 0;
}
