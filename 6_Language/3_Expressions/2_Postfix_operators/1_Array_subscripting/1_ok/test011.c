/*
 * Check if subscripting operator works well for multi dimensions array.
 */
#include <stdio.h>

int b[5][7];

int f(int n)
{
  return b[3][n];
}

int g(int n, int m)
{
  return b[n][m];
}

int main(void)
{
  for ( int i = 0 ; i != sizeof b/sizeof b[0] ; ++i ){
    for ( int j = 0 ; j != sizeof b[0]/sizeof b[0][0] ; ++j ){
      b[i][j] = 0x1000 * i + j - 3;
    } 
  }

  for ( int j = 0 ; j != sizeof b[0]/sizeof b[0][0] ; ++j ){
    if ( f(j) != 0x1000 * 3 + j - 3 ){
      printf("error f(%d) != 0x1000 * 3 + %d - 3\n", j, j);
      return -1;
    }
  }

  for ( int i = 0 ; i != sizeof b/sizeof b[0] ; ++i ){
    for ( int j = 0 ; j != sizeof b[0]/sizeof b[0][0] ; ++j ){
      if ( g(i,j) != 0x1000 * i + j - 3 ){
	printf("error g(%d,%d) != 0x1000 * %d + %d - 3\n", i, j, i, j);
	return -2;
      }
    } 
  }
  
  printf("ok\n");

  return 0;
}
