/*
 * Check if `sizeof' of array subscripting is recognized.
 * Check if array subscripting of array subscripting is recognized.
 */
#include <stdio.h>

int x[3][5];

int y = sizeof x[2];

int main(void)
{
  printf("sizeof x = %d\n", (int)(sizeof x));
  printf("y = %d\n", y);
  for ( int i = 0 ; i < 3 ; ++i ){
    for ( int j = 0 ; j < 5 ; ++j ){
      x[i][j] = 10 * i + j;
    }
  }
  printf("x[2][3] = %d\n", x[2][3]);
  printf("x[1][8] = %d\n", x[1][8]);
  if ( &x[2][3] == &x[1][8] )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
