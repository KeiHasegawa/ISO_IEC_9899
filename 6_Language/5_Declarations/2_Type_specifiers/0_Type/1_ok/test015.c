/*
 * Check if type in type-specifier is struct-or-union specifier
 */
#include <stdio.h>

struct S {
  int a;
  char b[10];
};

void test000(struct S s)
{
  printf("`test000' called\n");
  printf("%d, %s\n", s.a, s.b);
}

union U {
  int a;
  float b;
};

void test001(union U u)
{
  printf("`test001' called\n");
  printf("0x%x, %f\n", u.a, u.b);
}

int main(void)
{
  test000((struct S){2, "languages"});
  test001((union U){.b = 1});
  return 0;
}
