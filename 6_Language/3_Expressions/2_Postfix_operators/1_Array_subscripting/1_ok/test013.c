/*
 * Check if subscripting operator works well for array and variable.
 */
#include <stdio.h>

extern int a[];

void f(int n)
{
  a[n] = a[n-1];
}

void g(int n, int m)
{
  a[n] = a[m];
}

int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main(void)
{
  f(5);
  for ( int i = 0 ; i != sizeof a/sizeof a[0] ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  g(2,7);
  for ( int i = 0 ; i != sizeof a/sizeof a[0] ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  return 0;
}
