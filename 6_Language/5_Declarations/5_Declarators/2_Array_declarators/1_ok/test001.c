/*
 * parameter declaratortype is variable length array.
 */
#include <stdio.h>

int f(double d)
{
  printf("`f' called with %f\n", d);
  return d + 1;
}

void test00(int n, double (*pa)[n = f(n)])
{
  printf("`test00' called\n");
  for ( int i = 0 ; i < n ; ++i )
    printf(" %f", (*pa)[i]);
  printf("\n");
}

int a[] = { 3, 4, 5 };

void test01(int n, double (*pa)[n = a[2]])
{
  printf("`test01' called\n");
  for ( int i = 0 ; i < n ; ++i )
    printf(" %f", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  double a[][5] = {
    { 0, 1, 2, 3, 4 }
  };
  test00(4,&a[0]);
  test01(4,&a[0]);
  return 0;
}
