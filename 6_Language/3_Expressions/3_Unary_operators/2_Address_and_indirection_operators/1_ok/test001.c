/*
 * Check if operator `*' is recognized, where
 * type of operand is pointer to function or array
 */
#include <stdio.h>

int f(float a)
{
  return a + 5;
}

int a[5] = { 0, 1, 2, 3, 4 };

void g(int (*pf)(float), int (*pa)[5])
{
  printf("(*pf)(-0.5) = %d\n", (*pf)(-0.5));
  printf("(*pa)[3] = %d\n", (*pa)[3]);
}

int main(void)
{
  g(&f,&a);
  return 0;
}

