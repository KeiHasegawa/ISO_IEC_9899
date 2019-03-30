/*
 * Check if if-statements are recognized.
 */
#include <stdio.h>

void test000(int n)
{
  printf("`test000' called\n");
  if ( n )
    printf("n = %d\n", n);
}

void test001(double* p)
{
  printf("`test001' called\n");
  if ( *p )
    printf("*p = %f\n", *p);
}

int main(void)
{
  test000(3);
  test000(0);
  double a = 1;
  test001(&a);
  a = 0;
  test001(&a);
  return 0;
}
