/*
 * Check if array subscripting is recognized,
 * where type of array subscriptiong is array.
 */
#include <stdio.h>

int x[3][5];

int *p = x[1];

int (*q)[5] = &x[1];

int main(void)
{
  for ( int i = 0 ; i < 3 ; ++i ){
    for ( int j = 0 ; j < 5 ; ++j )
      x[i][j] = 10 * i + j;
  }

  printf("p[3] = %d\n", p[3]);
  printf("(*q)[4] = %d\n", (*q)[4]);
  return 0;
}
