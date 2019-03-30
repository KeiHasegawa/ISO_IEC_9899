/*
 * Check inline function call works well, where inline function `f' is called
 * multiple times in the same function `g'.
 */
#include <stdio.h>

inline int f(int n)
{
  if ( n > 5 )
    return n - 2;
  else
    return n + 5;
}

void g(void)
{
  printf("f(2) return value : %d\n", f(2));
  printf("f(6) return value : %d\n", f(6));
}

int main(void)
{
  g();
  return 0;
}
