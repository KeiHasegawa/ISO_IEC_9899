/*
 * Check if function prototype scope declarations are recognized.
 */
#include <stdio.h>

int a = 123;  /* `a' has file scope */

void f(void (*pf)(int a))  /* `pf' has block scope.
			        `a' has function prototype scope */
{
  int a = 456;
  extern void g(int a);  /* `a' has function prototype scope */
  printf("a = %d\n", a);
  g(a);
  (*pf)(-a);
}

void g(int a)
{
  printf("`g' called with %d.\n", a);
}

int main(void)
{
  printf("a = %d\n", a);
  f(&g);
  return 0;
}
