/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

void f(int n, int m)
{
  int a[n][m];
  int (*p)[m] = a; // p == &a[0]
  printf("p:");
  for ( int i = 0 ; i < m ; ++i )
    printf(" %d", (*p)[i] = i);
  printf("\n");
  p += 1; // p == &a[1]
  printf("p:");
  for ( int i = 0 ; i < m ; ++i )
    printf(" %d", (*p)[i] = 2 * i + 5);
  printf("\n");
  printf("a:\n");
  for ( int i = 0 ; i < 2 ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
      printf(" %d", a[i][j]);
    printf("\n");
  }
  (*p)[2] = 99; // a[1][2] == 99
  if ( a[1][2] == 99 )
    printf("ok\n");
  else
    printf("error\n");
  n = p - a; // n == 1
  printf("n = %d\n", n);
}

int main(void)
{
  f(4,3);
  return 0;
}
