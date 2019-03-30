/*
 * Check if variable length array works well if the dimension is specified
 * by cast operator.
 */
#include <stdio.h>

void f(double* p, long double (*pa)[(long int)(*p = (int)*p - 1)])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < *p ; ++i )
    printf(" %Lf", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  long double a[][6] = {
    { 1, 2, 3, 4, 5, 6 },
  };
  f(&(double){7.5},&a[0]);
  return 0;
}
