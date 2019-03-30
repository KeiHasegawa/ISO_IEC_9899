/*
 * inline function definition follows inline function call.
 */
#include <stdio.h>

inline int f(int, int);

void g(void)
{
  printf("`g' called\n");
  printf("f(3,5) return %d\n", f(3,5));
}

int main(void)
{
  g();
  return 0;
}

inline int f(int a, int b)
{
  printf("`f' called\n");
  return a + b;
}
