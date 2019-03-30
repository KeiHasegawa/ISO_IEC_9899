/*
 * Check calling inline function works well. In the inline function,
 * there is a recursive call.
 */
#include <stdio.h>

inline int fact(int n)
{
  if ( n <= 0 )
    return 1;
  return n * fact(n-1);
}

int main(void)
{
  printf("fact(5) = %d\n", fact(5));
  return 0;
}
