/*
 * Check if function call is available, where
 * pointer to function is used.
 */
#include <stdio.h>

int f(int n)
{
  printf("f called with %d\n", n);
  return n + 5;
}

int g(int (*pf)(int), int n)
{
  return (*pf)(n) + 10;
}

int main(void)
{
  extern int f(int);
  int n = g(&f,1);
  printf("n = %d\n", n);
  return 0;
}
