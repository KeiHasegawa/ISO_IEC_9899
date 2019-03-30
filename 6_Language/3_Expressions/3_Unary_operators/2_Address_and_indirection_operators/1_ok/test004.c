/*
 * Check if variable length array works well if the dimension is specified
 * by address and indirection operators.
 */
#include <stdio.h>

void f(char* p, short int s, long double (*pa)[++*p][*(&s+s)+3])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < *p ; ++i ){
    for ( int j = 0 ; j < *(&s+s)+3 ; ++j )
      printf(" %Lf", (*pa)[i][j]);
    printf("\n");
  }
}

int main(void)
{
  long double a[][2][3] = {
    { { 1, 2, 3 }, { 4, 5, 6 } },
  };
  f(&(char){1},0,&a[0]);
  return 0;
}
