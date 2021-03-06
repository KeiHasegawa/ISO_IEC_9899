/*
 * Check calling inline function works well. In these inline function,
 * call other inline function.
 */

#include <stdio.h>

inline int g(int);

inline int f(int n)
{
  printf("`f' called with %d\n", n);
  if ( n )
    return g(n-1);
  return 1;
}

inline int h(int);

inline int g(int n)
{
  printf("`g' called with %d\n", n);
  if ( n )
    return h(n-1);
  return 1;
}

inline int h(int n)
{
  printf("`h' called with %d\n", n);
  if ( n )
    return f(n-1);
  return 1;
}

int main()
{
  f(10);
  return 0;
}

