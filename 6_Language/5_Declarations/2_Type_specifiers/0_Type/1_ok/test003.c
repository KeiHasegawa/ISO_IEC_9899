/*
 * Check if type in type-specifier is unsigned char
 */
#include <stdio.h>

void test000(signed char x, char unsigned y)
{
  printf("`test000' called\n");
  printf("%d, %d\n", x, y);
  if ( x == y )
    printf("x is equal to y\n");
  else
    printf("x is not equal to y\n");
  x = y;
  printf("%d, %d\n", x, y);
  if ( x == y )
    printf("x is equal to y\n");
  else
    printf("x is not equal to y\n");
}

int main(void)
{
  test000(255,255);
  return 0;
}
