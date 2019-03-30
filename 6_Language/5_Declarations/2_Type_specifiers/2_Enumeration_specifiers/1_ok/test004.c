/*
 * Check if parameter scope enum declaration works well.
 */
#include <stdio.h>

void f(enum E { a, b, c } e)
{
  printf("`f' called\n");
  printf("e = %d\n", e);
}

void g(enum E { a, b, c } e)
{
  printf("`g' called\n");
  f(e); /* ok. g::param::enum E is not compatible with f::param::enum E.
           But they are arithmetic type. */
}

int main()
{
  g(2); // ok.
  return 0;
}
