/*
 * Check if variable length array works well if the dimension is specified
 * by subscripting expression.
 */
#include <stdio.h>

char array[4];

void f(int n, long double (*pa)[n = array[n]][array[3]])
{
  printf("`f' called\n");
  int m = sizeof (*pa)[0]/sizeof (*pa)[0][0];
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
      printf(" %Lf", (*pa)[i][j]);
    printf("\n");
  }
}

int main(void)
{
  for ( int i = 0 ; i < 4 ; ++i )
    array[i] = i;
  long double a[][2][3] = {
    { { 1, 2, 3 }, { 4, 5, 6 } },
  };
  f(2,&a[0]);
  return 0;
}

