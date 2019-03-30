/*
 * Check if type in type-specifier is unsigned int
 */
#include <stdio.h>

void test000(unsigned x, signed y)
{
  printf("`test000' called\n");
  printf("%d, %d\n", x, y);
  if ( x == y )
    printf("x is equal to y\n");
  else
    printf("x is not equal to y\n");
}

void test001(unsigned int x, int unsigned y)
{
  printf("`test001' called\n");
  printf("%d, %d\n", x, y);
}

int main(void)
{
  test000(4294967295,-1);
  test001(2147483647,2147483648);
  return 0;
}
