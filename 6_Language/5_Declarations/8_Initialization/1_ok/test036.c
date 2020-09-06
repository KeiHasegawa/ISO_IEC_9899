/*
 * Check if initialization with generated poiner works well,
 * where the pointer is generated from inline function
 */
#include <stdio.h>

inline int fact(int n)
{
  if (!n)
    return 1;
  return n * fact(n-1);
}

inline int simple(int a, int b)
{
  return a + b;
}

int main()
{
  int (*pf1)(int) = fact;
  printf("(*pf1)(10) returns %d\n", (*pf1)(10));
  int (*pf2)(int, int) = simple;
  printf("(*pf2)(3, 5) returns %d\n", (*pf2)(3, 5));
  return 0;
}
