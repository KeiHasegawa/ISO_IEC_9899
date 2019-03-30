/*
 * Check if parenthed expression can be lvalue.
 * Check if void expression can be used.
 * Check if parenthed function can be called.
 */
#include <stdio.h>

void f(void)
{
  printf("f called\n");
}

int main(void)
{
  int a;
  printf("(a) = %d\n", (a) = 1);
  printf("%s\n", *&("Pascal"));
  (f());
  (f)();
  return 0;
}
