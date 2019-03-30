/*
 * Inline function definitions `f' and `g' follows the inline function calls
 * in inline function `h'.
 */
#include <stdio.h>

inline int h(int, int);

int main(void)
{
  printf("h(5,3) return value : %d\n", h(5,3));
  return 0;
}

inline int f(int, int);

inline int g(int, int);

inline int h(int a, int b)
{
  return f(a,b) * g(a,b);
}

inline int f(int a, int b)
{
  return a + b;
}

inline int g(int a, int b)
{
  return a - b;
}
