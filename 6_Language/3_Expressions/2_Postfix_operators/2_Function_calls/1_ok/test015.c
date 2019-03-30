/*
 * Use function call return value.
 */

#include <stdio.h>

int g(void);
void h(int);

int f(void)
{
  int n = g();
  h(n);
  return n ? 1 : 2;
}

int main(void)
{
  printf("f() returns %d\n", f());
  return 0;
}

int g(void)
{
  return 3;
}

void h(int n)
{
  printf("`h' called with %d\n", n);
}
