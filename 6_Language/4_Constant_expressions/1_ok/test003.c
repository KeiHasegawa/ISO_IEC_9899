/*
 * Check ISO sample works well.
 */
#include <stdio.h>

void test000(void)
{
  static int i = 2 || 1 / 0;
  printf("%d\n", i);
}

int main(void)
{
  test000();
  return 0;
}
