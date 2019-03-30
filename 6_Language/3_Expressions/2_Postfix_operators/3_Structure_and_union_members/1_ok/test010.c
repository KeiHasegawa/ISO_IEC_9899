/*
 * not use the result of member reference
 */
#include <stdio.h>

struct S {
  int a;
  int b : 3;
};

void f(struct S s)
{
  printf("`f' called\n");
  s.a;
  s.b;
}

void g(struct S* ps)
{
  printf("`g' called\n");
  ps->a;
  ps->b;
}

int main(void)
{
  struct S s = { 1, 2 };
  f(s);
  g(&s);
  return 0;
}
