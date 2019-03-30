/*
 * Check if variable length array works well if the dimension is specified
 * by compound literal expression.
 */
#include <stdio.h>

struct S { int a; int b; };

void f(char n, short int m,
       long double (*pa)[(int[2]){n,m}[0]][(struct S){n, m}.b])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
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
