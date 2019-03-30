/*
 * Check if variable length array works well if the dimension is specified
 * by postfix increment and decrement operators.
 */
#include <stdio.h>

void f(char n, short int m, long double (*pa)[n++][m--])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < n - 1 ; ++i ){
    for ( int j = 0 ; j < m + 1 ; ++j )
      printf(" %Lf", (*pa)[i][j]);
    printf("\n");
  }
}

int main(void)
{
  long double a[][2][3] = {
    { { 1, 2, 3 }, { 4, 5, 6 } },
  };
  f(2,3,&a[0]);
  return 0;
}
