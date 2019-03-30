/*
 * Static inline function `f' is reference in static inline function
 * `g' and `h'.
 */

#include <stdio.h>

static inline int f(int x)
{
  return x + 5;
}

static inline int g(int x)
{
  return f(x) + 6;
}

static inline int h(int x)
{
  return f(x) + 7;
}

int main(void)
{
  printf("I don't use f, g or h.\n");
  return 0;
}
