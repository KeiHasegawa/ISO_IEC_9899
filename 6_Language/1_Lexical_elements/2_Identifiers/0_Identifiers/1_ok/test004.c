/*
 * Check if structure declarations with qualifier are
 * recognized.
 */
#include <stdio.h>

struct S {
  int a;
};

const struct S c = { 1 };
volatile struct S v;
struct S *restrict r;

int main(void)
{
  printf("c.a = %d\n", c.a);
  printf("v.a = %d\n", v.a = 2);
  struct S s;
  r = &s;
  printf("r->a = %d\n", r->a = 3);
  return 0;
}
