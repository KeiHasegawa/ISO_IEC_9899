/*
 * inline function definition follows inline function call in inline function.
 */
#include <stdio.h>

inline void g(int, int);

int main(void)
{
  g(3,5);
  return 0;
}

inline int f(int, int);

inline void g(int a, int b)
{
  printf("`g' called\n");
  printf("f(%d,%d) return %d\n", a,b,f(a,b));
}

inline int f(int a, int b)
{
  printf("`f' called\n");
  return a + b;
}
