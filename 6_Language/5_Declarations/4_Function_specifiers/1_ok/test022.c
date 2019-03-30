/*
 * Check if address of static or inline function works well.
 * Especially, these functions are defined after its address
 * is referenced.
 */
#include <stdio.h>

static int f(int);

inline int g(int);

void h(int (*pf)(int), int a)
{
  int n = pf(a);
  printf("n = %d\n", n);
}

int main()
{
  h(&f, 5);
  h(&g, 10);
  int x = f(-3);
  printf("x = %d\n", x);
  int y = g(4);
  printf("y = %d\n", y);
  return 0;
}

static int f(int a)
{
  return a + 5;
}

inline int g(int a)
{
  return a - 5;
}

