/*
 * Check if conditional operator works well for incomplete type.
 */
#include <stdio.h>

extern struct S s;

typedef struct S T;

struct S {
  char c[1024];
  float f;
  int i;
};

struct S ss = { "Programming Language C", 0.625F, sizeof s };

int f(void), g(void);

int main(void)
{
  struct S x = f() ? s : ss;
  printf("x.c = %s, x.f = %f, x.i = %d\n", x.c, x.f, x.i);
  x = g() ? s : ss;
  printf("x.c = %s, x.f = %f, x.i = %d\n", x.c, x.f, x.i);
  return 0;
}

struct S s = { "Programming Language C++", -1.25F, sizeof(T)+1 };

int f(void)
{
  static int n;
  return n++;
}

int g(void)
{
  static int n;
  return ++n;
}
