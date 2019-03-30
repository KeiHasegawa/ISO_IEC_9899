/*
 * Check if type in type-specifier is int
 */
#include <stdio.h>

void test000(int x)
{
  printf("`test000' called\n");
  printf("%d\n", x);
}

void test001(signed x)
{
  printf("`test001' called\n");
  printf("%d\n", x);
}

void test002(signed int x, int signed y)
{
  printf("`test002' called\n");
  printf("%d, %d\n", x, y);
}


int main(void)
{
  test000(2147483647);
  test001(2147483648);
  test002(2147483647,4294967295);
  return 0;
}
