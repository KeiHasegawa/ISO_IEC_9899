/*
 * Check if variable length array works in loop.
 */
#include <stdio.h>

int f(int n, int m)
{
  for ( int i = 0 ; i != n ; ++i ) {
    int a[m];
    int b[n+m];
    for ( int j = 0 ; j != m ; ++j ) {
      a[j] = i + j;
      if ( a[j] != i + j ) {
	printf("a[%d] != %d + %d\n", j, i, j);
	return -1;
      }
    }
    for ( int k = 0 ; k != n+m ; ++k ) {
      b[k] = i - k;
      if ( b[k] != i - k ){
	printf("b[%d] != %d - %d\n", k, i, k);
	return -1;
      }
    }
  }
  return 0;
}

int main(void)
{
  if ( f(1,3) != 0 ) {
    printf("error in f(1,3)\n");
    return -1;
  }

  if ( f(3,7) != 0 ) {
    printf("error in f(3,7)\n");
    return -1;
  }

  if ( f(250,777) != 0 ) {
    printf("error in f(250,777)\n");
    return -1;
  }

  if ( f(1024,1024) != 0 ) {
    printf("error in f(1024,1024)\n");
    return -1;
  }

  printf("ok\n");
  return 0;
}

void g(int n)
{
  int a[n];  /* May be optimized. no allocate and deallocate code */
}
