/*
 * Check if function call is well done, where function returns
 * structure whose member is structure.
 */
#include <stdio.h>

struct inner {
  int a;
  int b;
};

struct outer {
  struct inner i;
  char c[10];
};

struct outer f(void);

int main(void)
{
  printf("f().i.a = %d\n", f().i.a);
  return 0;
}

struct outer f(void)
{
  return (struct outer){ 1, 2, "foo" };
}

