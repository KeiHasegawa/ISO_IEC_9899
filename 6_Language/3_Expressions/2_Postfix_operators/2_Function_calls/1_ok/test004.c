/*
 * Check if sizeof of function call is recognized.
 */
#include <stdio.h>

extern int f(void);

int a = sizeof f();

int main(void)
{
  int b = sizeof f();
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  return 0;
}
