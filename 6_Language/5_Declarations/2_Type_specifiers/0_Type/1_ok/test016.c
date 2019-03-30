/*
 * Check if type in type-specifier is enum specifier
 */
#include <stdio.h>

enum E { a, b, c, d };

void test000(enum E e)
{
  printf("`test000' called\n");
  printf("%d\n", e);
}

int main(void)
{
  test000((enum E){d});
  return 0;
}
