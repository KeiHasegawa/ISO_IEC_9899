/*
 * After all rewrites, the parameters in a parameter-type-list that is part of
 * a function definition shall not have incomplete type.
 */
#include <stdio.h>

struct S;

void f(struct S);  /* ok. not function definition */

struct S {
  int a;
};

int main(void)
{
  struct S s = { 1 };
  f(s);
  return 0;
}

void f(struct S ss)
{
  printf("`f' called\n");
  printf("ss.a = %d\n", ss.a);
}
