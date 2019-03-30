/*
 * Check parameter scope variable length array works well, whose dimension
 * is specified by assignment operators.
 */
#include <stdio.h>

void f(double* p, double (*pa)[(int)(*p *= *p)])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < *p ; ++i )
    printf(" %f", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  double a[][5] = {
    { 0, 1, 2, 3, 4 }
  };
  f(&(double){2.1},&a[0]);
  return 0;
}
