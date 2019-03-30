/*
 * Check if variable length array in function parameter works well.
 */

#include <stdio.h>

void addscalar(int n, int m, double a[n][n*m+300], double x);

int main()
{
  double b[4][308];
  for ( int i = 0 ; i < 4 ; ++i ){
    for ( int j = 0 ; j < 308 ; ++j )
      b[i][j] = 0;
  }
  addscalar(4, 2, b, 2.17);

  int error = 0;
  for ( int i = 0 ; i < 4 ; ++i ){
    for ( int j = 0 ; j < 308 ; ++j ){
      if ( b[i][j] != 2.17 )
	++error;
    }
  }

  printf("error = %d\n", error);
  return 0;
}

void addscalar(int n, int m, double a[n][n*m+300], double x)
{
  for (int i = 0; i < n; i++)
    for (int j = 0, k = n*m+300; j < k; j++)
      a[i][j] += x;
}
