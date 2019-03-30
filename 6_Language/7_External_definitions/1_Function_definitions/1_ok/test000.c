/*
 * Check if function definition works well.
 */
#include <stdio.h>

void f(int);

void f(int a)
{
  printf("`f' called with %d\n", a);
}

void g(int);

int main(void)
{
  f(3);
  g(4);
  return 0;
}

void g(int a)
{
  printf("`g' called with %d\n", a);
}
