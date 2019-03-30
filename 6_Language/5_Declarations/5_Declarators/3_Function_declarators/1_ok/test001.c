/*
 * Check if parameter scope is recognized.
 */
#include <stdio.h>

int f(double (*pf)(float a), char a)
{
  return (*pf)(a);
}

double g(float a)
{
  return a;
}

int main(void)
{
  printf("f(&g,'a') = %d\n", f(&g,'a'));
  return 0;
}
