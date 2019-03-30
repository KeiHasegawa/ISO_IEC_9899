/*
 * Check inline function call works well in conditional operator.
 */
#include <stdio.h>

inline int f(int t)
{
  return t;
}

inline int g(int t)
{
  return -t;
}

int h(int a, int b)
{
  return a ? f(b) : g(b);
}

int main(void)
{
  for ( int i = 0 ; i < 2 ; ++i ){
    for ( int j = 0 ; j < 4 ; ++j )
      printf(" %d", h(i,j));
    printf("\n");
  }
  return 0;
}
