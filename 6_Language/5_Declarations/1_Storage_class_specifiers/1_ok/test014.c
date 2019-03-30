/*
 * Check if typedef declaration is recognized,
 * whose type is variable length array.
 */
#include <stdio.h>

void f(int n)
{
  typedef int B[n];
  n += 1;
  {
    B a;
    int b[n];
    for ( int i = 0 ; i < n ; ++i )
      b[i] = 2 * i + 1;
    for ( int i = 1 ; i < n ; i++)
      a[i-1] = b[i];
    for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
      printf(" %d", a[i]);
    printf("\n");
  }
}

int main(void)
{
  f(5);
  return 0;
}
