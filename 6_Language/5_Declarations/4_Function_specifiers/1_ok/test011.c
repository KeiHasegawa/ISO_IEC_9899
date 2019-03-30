/*
 * Inline function definition `f' follows the inline function call in inline
 * function `g', but not use `g'.
 */
#include <stdio.h>

inline int f(int, int);

inline int g(int a, int b)
{
  return f(a,b);
}

inline int f(int a, int b)
{
  return a + b;
}

int main(void)
{
  printf("I don't call inline function.\n");
  return 0;
}
