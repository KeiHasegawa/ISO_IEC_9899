/*
 * Check if struct declaration with `static' is recognized,
 */
#include <stdio.h>

static struct S { int a; };

void f(struct S* p)
{
  p->a = 123;
}

int main(void)
{
  struct S s;
  f(&s);
  printf("s.a = %d\n", s.a);
  return 0;
}
