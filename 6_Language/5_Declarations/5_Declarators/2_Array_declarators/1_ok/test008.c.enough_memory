/*
 * Check if variable length array works in some block scopes.
 */
#include <stdio.h>

void f(int n, int m)
{
  int a[n];
  int b[m];
  for ( int x = 0 ; x != n ; ++x )
    a[x] = x;
  for ( int y = 0 ; y != m ; ++y )
    b[y] = y;

  for ( int i = 0 ; i != n ; ++i ) {
    int c[m];
    for ( int j = 0 ; j != m ; ++j ) {
      c[j] = j;
    }
    int d[n];
    for ( int k = 0 ; k != n ; ++k ) {
      d[k] = k;
    }
  }

  for ( int z = 0 ; z != n ; ++z )
    a[z] = z;
  for ( int w = 0 ; w != m ; ++w )
    b[w] = w;
}

int main(void)
{
  f(3,1024);
  f(1024,3);
  f(7,3);
  f(3,7);
  f(1024,1024);
  printf("ok\n");
  return 0;
}
