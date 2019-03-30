/*
 * Check if typedef-name is used in typedef declaraiton.
 */
#include <stdio.h>

typedef int I;
typedef I II;
II* f(void);
I a;

int main(void)
{
  *f() = 123;
  printf("a = %d\n", a);
  return 0;
}

int* f(void)
{
  return &a;
}
