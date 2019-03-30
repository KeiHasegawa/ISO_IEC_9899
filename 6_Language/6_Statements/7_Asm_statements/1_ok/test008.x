#include <stdio.h>

int x = 123;
int y = 456;

int main(void)
{
  printf("x = %d, y = %d\n", x, y);

  asm("mov $99, %0\n\t"
      "add %1, %0\n\t"
      : "=&r"(x)
      : "r"(y)
      );

  printf("x = %d, y = %d\n", x, y);
  return 0;
}
