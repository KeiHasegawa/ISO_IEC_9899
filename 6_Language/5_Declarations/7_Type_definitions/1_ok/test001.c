/*
 * A typedef name shares the same name space as other identifiers declared
 * in ordinary declarators.
 */
#include <stdio.h>

typedef struct T {
  int a;
} T;  /* ok */

void test000(T t)
{
  printf("`test000' called\n");
  printf("%d\n", t.a);
}

int main(void)
{
  T t = { 2 };
  test000(t);
  return 0;
}
