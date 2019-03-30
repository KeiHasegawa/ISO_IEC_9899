/*
 * Check if multi-dimensional array initialzations are recognized.
 */
#include <stdio.h>

short x[4][3][2] = {
  1, 0, 0, 0, 0, 0,
  2, 3, 0, 0, 0, 0,
  4, 5, 6
};

extern void f(short a[4][3][2]);

int main(void)
{
  f(x);
  printf("\n");
  short y[4][3][2] = {
    1, 0, 0, 0, 0, 0,
    2, 3, 0, 0, 0, 0,
    4, 5, 6
  };
  f(y);
  return 0;
}

void f(short a[4][3][2])
{
  for ( int i = 0 ; i < 4 ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j ){
      for ( int k = 0 ; k < 2 ; ++k )
	printf(" %d", a[i][j][k]);
    }
    printf("\n");
  }
}


