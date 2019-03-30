/*
 * Check if struct variable initializers are recognized,
 * which contains bit field member.
 */
#include <stdio.h>

struct S {
  unsigned int a : 2;
  unsigned int b : 3;
  unsigned int c : 5;
  int d;
  int e : 4;
  int f : 3;
  int g : 2;
};

struct S x = {
  2, 6, 0xff, 7, 14, 14, 14
};

extern void f(struct S);

int main(void)
{
  f(x);
  struct S y = {
    0x1e, 0x1e, 0x1e, -3, 13, 15, 1
  };
  f(y);
  return 0;
}

void f(struct S s)
{
  printf("s.a = %d, s.b = %d, s.c = %d\n", s.a, s.b, s.c);
  printf("s.d = %d\n", s.d);
  printf("s.e = %d, s.f = %d, s.g = %d\n", s.e, s.f, s.g);
}
