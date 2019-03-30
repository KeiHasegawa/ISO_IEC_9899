/*
 * Check the value of an enumeration constant can be defined.
 */
#include <stdio.h>

enum E1 { a0, a1, a2, a3 };

void test000(void)
{
  printf("`test000' called\n");
  printf("%d, %d, %d, %d\n", a0, a1, a2, a3);
}

enum E2 { b0 = 0, b1 = 1, b2 = 2, b3 = 3 };

void test001(void)
{
  printf("`test001' called\n");
  printf("%d, %d, %d, %d\n", b0, b1, b2, b3);
}

enum E3 { c0 = 8, c1, c2 = 2, c3 };

void test002(void)
{
  printf("`test002' called\n");
  printf("%d, %d, %d, %d\n", c0, c1, c2, c3);
}

int main(void)
{
  test000();
  test001();
  test002();
  return 0;
}
