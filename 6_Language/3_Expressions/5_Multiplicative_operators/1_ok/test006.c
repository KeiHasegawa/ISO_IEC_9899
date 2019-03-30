/*
 * Check multiplicative operator in sub expression.
 */
#include <stdio.h>

long double array[4];

void test00(void)
{
  printf("`test00' called\n");
  printf("%Lf\n", array[3] * 5);
  printf("%Lf\n", array[3] / array[2]);
  printf("%d\n",  (int)array[3] % 5);
}

void test01(long double* p, int n)
{
  printf("`test01' called\n");
  printf("%Lf\n", p[n] * (2.0 + p[3]));
  printf("%Lf\n", p[n] / (1.0 + p[1]));
  printf("%lld\n", (int)p[n] % 2LL);
}

int main(void)
{
  for ( int i = 0 ; i < sizeof array/sizeof *&array[0] ; ++i )
    array[i] = i;
  test00();
  test01(&array[0],3);
  return 0;
}
