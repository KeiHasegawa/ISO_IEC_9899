/*
 * Check if extra braces are recognized.
 */
#include <stdio.h>

int a = { 1 };

struct S {
  int a;
  double b;
  char c[10];
};

struct S b = { { 2 }, { 3.0 }, { "foo" } };

char c[] = { "bar" };

int main(void)
{
  int d = { 4 };
  struct S e = { { 5 }, { 6.0 }, { "baz" } };
  char f[] = { "qux" };
  printf("a = %d\n", a);
  printf("b.a = %d, b.b = %f, b.c = \"%s\"\n", b.a, b.b, b.c);
  printf("c = \"%s\"\n", c);
  printf("d = %d\n", d);
  printf("e.a = %d, e.b = %f, e.c = \"%s\"\n", e.a, e.b, e.c);
  printf("f = \"%s\"\n", f);
  return 0;
}
