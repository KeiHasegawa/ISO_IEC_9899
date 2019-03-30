/*
 * Check if parameter scope enum declaration at inline function works well.
 */
#include <stdio.h>

inline int fact(enum E { x, y, z } e)
{
  if (!e)
    return 1;
  return e * fact(e-1);
}

int main()
{
  printf("fact(6) = %d\n", fact(6));
  return 0;
}
