/*
 * Check if variable length array works well if the dimension is specified
 * by subscripting expression.
 */
#include <stdio.h>

long double g(double);

void f(int n, long double (*pa)[n = g(n)][(int)g(2)])
{
  printf("`f' called\n");
  int m = sizeof (*pa)[0]/sizeof (*pa)[0][0];
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
      printf(" %Lf", (*pa)[i][j]);
    printf("\n");
  }
}

long double g(double d)
{
  printf("`g' called with %f\n", d);
  return d + 1;
}

int main(void)
{
  long double a[][2][3] = {
    { { 1, 2, 3 }, { 4, 5, 6 } },
  };
  f(1,&a[0]);
  return 0;
}
