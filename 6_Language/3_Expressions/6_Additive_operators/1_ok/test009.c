/*
 * Check additive operators works well, where some operand is pointer to
 * variable length array.
 */
#include <stdio.h>

void f(int n)
{
  printf("`test00' called\n");
  int (*pa)[n];
  int (*x)[n] = pa + 5;
  int (*y)[n] = pa;
  printf("%ld\n", x - y);
}

int main(void)
{
  f(5);
  return 0;
}
