/*
 * Check if return-statement works well.
 */
#include <stdio.h>

double test000(int a, int b)
{
  printf("`test000' called\n");
  if ( a )
    return a + b;
  a = b * 2;
  for ( ; ; )
    return a - b;
}

int main(void)
{
  printf("test000(2,3) = %f\n", test000(2,3));
  printf("test000(0,4) = %f\n", test000(0,4));
  return 0;
}
