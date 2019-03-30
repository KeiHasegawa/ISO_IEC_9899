/*
 * Check if parameter scope variable length array works well, whose
 * dimension is specified by shift operators.
 */
#include <stdio.h>

char a[] = { 0, 1, 2, 3, 4 };

void f(int n, int m, double (*pa)[a[n] << a[m]][a[n] >> a[m]])
{
  for ( int i = 0 ; i < a[n] << a[m] ; ++i ){
    for ( int j = 0 ; j < a[n] >> a[m] ; ++j )
      printf(" %f", (*pa)[i][j]);
    printf("\n");
  }
}

int main(void)
{
  double a[][8][2] = { {
    { 0, 1 }, { 2, 3 }, { 4, 5 }, { 6, 7 },
    { 8, 9 }, { 10, 11 }, { 12, 13 }, { 14, 15 }
  } };
  f(4,1,&a[0]);
  return 0;
}
