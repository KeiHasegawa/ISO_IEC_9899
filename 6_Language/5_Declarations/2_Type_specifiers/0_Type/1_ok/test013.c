/*
 * Check if type in type-specifier is double
 */
#include <stdio.h>

void test000(double a)
{
  printf("`test000' called\n");
  printf("%f\n", a);
}

int main(void)
{
  test000(1.5L);
  return 0;
}
