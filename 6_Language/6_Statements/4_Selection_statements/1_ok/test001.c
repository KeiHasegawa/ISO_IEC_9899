/*
 * Check if if-else-statement is recognized.
 */
#include <stdio.h>

void test000(int n)
{
  printf("`test000' called\n");
  if ( n )
    printf("n = %d\n", n);
  else
    printf("n is zero\n");
}

void test001(double* p)
{
  printf("`test000' called\n");
  if ( *p )
    printf("*p = %f\n", *p);
  else
    printf("*p is zero\n");
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
