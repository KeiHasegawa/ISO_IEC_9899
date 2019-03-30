/*
 * Check if dealloc isn't skipped for variable length array, it works well.
 */
#include <stdio.h>

int x;

void f(int n)
{
  int a[n];

  for ( int i = 0 ; i != sizeof a/sizeof a[0] ; ++i ){
    a[i] = x + i;
  }

  for ( int i = 0 ; i != sizeof a/sizeof a[0] ; ++i ){
    printf("a[%d] = %d\n", i, a[i]);
    if ( i == x )
      return;
  }
}

int main(void)
{
  x = 10;
  f(300);
  return 0;
}
