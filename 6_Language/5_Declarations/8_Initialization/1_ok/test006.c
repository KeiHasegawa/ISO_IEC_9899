/*
 * Check if member designator are recognized.
 */
#include <stdio.h>

struct S {
  int a;
  char b[5];
  double c;
};

struct S s = { .c = 1.0, .a = 2, .b = "foo" };

int main(void)
{
  printf("s.a = %d, s.b = \"%s\", s.c = %f\n",
	 s.a, s.b, s.c);
  struct S t = { .c = 3.0, .a = 4, "bar" };
  printf("t.a = %d, t.b = \"%s\", t.c = %f\n",
	 t.a, t.b, t.c);
  return 0;
}
