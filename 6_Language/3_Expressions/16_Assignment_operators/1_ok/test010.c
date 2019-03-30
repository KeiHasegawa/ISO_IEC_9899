/*
 * Dereferenced pointer which is declared incomplete struct type
 * is used after complete struct declaration.
 */

#include <stdio.h>

struct S* ps;

struct S {
  int a;
  int b;
};

struct S s;

int main(void)
{
  struct S ss = { 3, 4 };
  ps = &s;
  *ps = ss;
  printf("s = (%d, %d)\n", s.a, s.b);
  printf("ss = (%d, %d)\n", ss.a, ss.b);
  printf("ps = (%d, %d)\n", ps->a, ps->b);
  return 0;
}
