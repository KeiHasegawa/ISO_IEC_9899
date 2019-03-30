/*
 * One of the following shall hold for the second and third operands:
 * - ...
 * - both operands have void type;
 * - ...
 */
#include <stdio.h>

void test000(int (*x)(double), char (*y)(long int), void (*z)(void))
{
  printf("`test000' called\n");
  (*x)(0.5) ? (void)(*y)(3L) : (*z)();
}

int f(double d)
{
  static int s;
  printf("`f' called with %f\n", d);
  return s++;
}

char g(long int n)
{
  printf("`g' called with %ld\n", n);
  return '\x11';
}

void h(void)
{
  printf("`h' called\n");
}

int main(void)
{
  test000(f,g,h);
  test000(f,g,h);
  return 0;
}
