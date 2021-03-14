#include <stdio.h>

struct S {
  int i;
  char c;
  double d;
};

struct T {
  const char* p;
  struct S s;
  float f;
};

void f(struct S s, struct T t)
{
  s.i += t.f;
  s.c += t.s.i;
  s.d += t.s.d;
  printf("s.i = %d, s.c = '%c' s.d = %f\n", s.i, s.c, s.d);
  t.s = s;
  printf("t.p = \"%s\", t.s.i = %d, t.s.c = '%c' t.s.d = %f t.f = %f\n",
	 t.p, t.s.i, t.s.c, t.s.d, t.f);
}

int main()
{
  struct S s = { 1, '2', 3.0 };
  struct T t = { "abcdefg", { 4, '5', 6.0 }, 7.0 };
  f(s, t);
  return 0;
}
