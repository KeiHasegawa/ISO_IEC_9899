/*
 * Check if assignment is available, where
 * operand is structure.
 */
#include <stdio.h>

struct inner {
  int a;
  int b;
};

struct outer {
  struct inner i;
};

int main(void)
{
  struct outer o;
  struct inner i = { 1, 2 };
  o.i = i;
  printf("o.i.a = %d, o.i.b = %d\n", o.i.a, o.i.b);
  return 0;
}
