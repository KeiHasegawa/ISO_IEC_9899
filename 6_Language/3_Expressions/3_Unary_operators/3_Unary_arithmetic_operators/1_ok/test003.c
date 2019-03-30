/*
 * Check if variable length array works well if the dimension is specified
 * by unary arithmetic opeartor.
 */
#include <stdio.h>

struct S;

void f(char* a, long double b, int* c, struct S* d,
       long double (*pa)[+*a][(int)-b][*c = ~*c][!d])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < *a ; ++i ){
    for ( int j = 0 ; j < -b ; ++j ){
      for ( int k = 0 ; k < *c ; ++k ){
	for ( int l = 0 ; l < !d ; ++l )
	  printf(" %Lf", (*pa)[i][j][k][l]);
      }
    }
    printf("\n");
  }
}

int main(void)
{
  long double a[][2][3][2][1] = {
    {
      { { { 1 }, { 2 } }, { { 3 }, { 4 } }, { { 5 }, { 6 } } },
      { { { 7 }, { 8 } }, { { 9 }, { 10 } }, { { 11 }, { 12 } } },
    }
  };
  f(&(char){2},-3,&(int){~2},0,&a[0]);
  return 0;
}
