/*
 * Check the declaration of enum-specifier works well, where
 * tag-name of enum-speicifier is omitted.
 */
#include <stdio.h>

enum { A0, A1, A2 = 20, A3 };

void test000(void)
{
  printf("`test000' called\n");
  printf("%d, %d, %d, %d\n", A0, A1, A2, A3);
}

void test001(void)
{
  printf("`test001' called\n");
  enum { A0, A1 = 20, A2, A3 };
  printf("%d, %d, %d, %d\n", A0, A1, A2, A3);
}

int main(void)
{
  test000();
  test001();
  return 0;
}
