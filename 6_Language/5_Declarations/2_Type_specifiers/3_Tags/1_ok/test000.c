/*
 * Two declarations of structure, union, or enumerated types which are in
 * different scopes or use different tags declare distinct types. Each
 * declaration of a structure, union, or enumerated type which does not
 * include a tag declares a distinct type.
 */
#include <stdio.h>

struct T {
  int a;
  char b;
};

void test000(void)
{
  printf("`test000' called\n");
  struct T t = { 2, 'a' };
  printf("%d, '%c'\n", t.a, t.b);
  {
    struct T {
      char c[10];
    };
    struct T t = { "program" };
    printf("%s\n", t.c);
  }
  {
    union T {
      int d;
      double e;
    };
    union T u = { 1 };
    printf("%d", u.d);
    u.e = 2;
    printf(" %f\n", u.e);
  }
  {
    enum T { a, b, c, d, e };
    printf("%d, %d, %d, %d, %d\n", a, b, c, d, e);
  }
  printf("%d, '%c'\n", t.a, t.b);
}

int main(void)
{
  test000();
  return 0;
}
