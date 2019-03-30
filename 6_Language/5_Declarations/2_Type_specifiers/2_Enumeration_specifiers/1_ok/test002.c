/*
 * Check the declaration of enum-specifier works well, where
 * value of enum-member is specified by other enum-member.
 */
#include <stdio.h>

enum E { a, b, c = a + 50 };

void test000(void)
{
  printf("`test000' called\n");
  printf("%d, %d, %d\n", a, b, c);
}

int main(void)
{
  test000();
  return 0;
}
