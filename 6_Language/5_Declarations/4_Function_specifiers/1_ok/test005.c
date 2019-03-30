/*
 * Check calling inline function works well. In this inline function,
 * call another inline function.
 */

#include <stdio.h>

inline int test000(int n)
{
  printf("`test000' called with %d\n", n);
  return n + 1;
}

inline int test001(int n)
{
  printf("`test001' called with %d\n", n);
  return test000(n + 1);
}

inline int test002(int n)
{
  printf("`test002' called with %d\n", n);
  return test001(n + 1);
}

inline int test003(int n)
{
  printf("`test003' called with %d\n", n);
  return test002(n + 1);
}

int main(void)
{
  printf("test003(5) return value : %d\n", test003(5));
  return 0;
}
