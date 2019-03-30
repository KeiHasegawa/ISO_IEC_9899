/*
 * Check if type in type-specifier is long double
 */
#include <stdio.h>

void test000(long double a, double long b)
{
  printf("`test000' called\n");
  printf("%Lf, %Lf\n", a, b);
}

int main(void)
{
  test000(1.5L,0.25F);
  return 0;
}
