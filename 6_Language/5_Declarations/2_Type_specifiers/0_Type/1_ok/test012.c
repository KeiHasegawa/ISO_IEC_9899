/*
 * Check if type in type-specifier is float
 */
#include <stdio.h>

void test000(float a)
{
  printf("`test000' called\n");
  printf("%f\n", a);
}

int main(void)
{
  test000(1.5L);
  return 0;
}
