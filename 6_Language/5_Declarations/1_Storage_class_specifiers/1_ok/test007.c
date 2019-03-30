/*
 * Check if type of qualified typedef-name is recognized.
 */
#include <stdio.h>

typedef int A[2][3];

const A a = { { 1, 2, 3 }, { 4, 5, 6 } };

int main(void)
{
  for ( int i = 0 ; i < 2 ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j ){
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}


