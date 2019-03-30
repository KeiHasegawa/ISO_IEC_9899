/*
 * Even if there exists unused expression, compiled collectly.
 */
#include <stdio.h>

extern void f(void);

int main(void)
{
  f();
  return 0;
}

void f(void)
{
  int a[10];
  a[4] = 4;
  a[a[a[4]]] - 5; /* not use the result of expression */
  printf("`f' called\n");
}
