/*
 * Check calling inline function works well. In these inline function,
 * call other inline function.
 */

#include <stdio.h>

inline void f(int n)
{
  printf("`f' called with %d\n", n);
  if ( n )
    f(n-1);
}

int main()
{
  f(10);
  return 0;
}

