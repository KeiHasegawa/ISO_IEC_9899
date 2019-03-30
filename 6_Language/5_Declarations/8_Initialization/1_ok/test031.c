/*
 * Member designator also must be applied to qualified structure or union.
 */

#include <stdio.h>

struct S {
  int a;
  double b;
};

const struct S s = { .b = 1.0 };

int main(void)
{
  printf("%d %f\n", s.a, s.b);
  return 0;
}
