/*
 * Check if parameter scope enum declaration works well.
 * (parameter scope at block scope function declaration)
 */

#include <stdio.h>

void f(int n)
{
  printf("`f' called\n");
  void g(enum E { a, b, c });
  g(n);  // ok
}

void g(enum E { a, b, c } e)
{
  printf("`g' called\n");
  printf("e = %d\n", e);
}

int main()
{
  f(2);
  return 0;
}


