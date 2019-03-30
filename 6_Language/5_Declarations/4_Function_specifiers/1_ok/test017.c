/*
 * Check calling inline function works well. In these inline function,
 * call other inline function.
 */

#include <stdio.h>

inline void g(int);

inline void f(int n)
{
  printf("`f' called with %d\n", n);
  if ( n )
    g(n-1);
}

inline void h(int);

inline void g(int n)
{
  printf("`g' called with %d\n", n);
  if ( n )
    h(n-1);
}

inline void h(int n)
{
  printf("`h' called with %d\n", n);
  if ( n )
    f(n-1);
}

int main()
{
  f(10);
  return 0;
}

