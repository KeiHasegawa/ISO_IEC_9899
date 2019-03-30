/*
 * Check if array of variable length array works well.
 */

#include <stdio.h>

void f(int n)
{
  int a[5][n], i, j;
  for ( i = 0 ; i < 5 ; ++i )
    for ( j = 0 ; j < n ; ++j ){
      a[i][j] = i + j;
      printf("a[%d][%d] = %d\n",i,j,a[i][j]);
    }
}

int main(void)
{
  f(3);
  return 0;
}
