/*
 * Check if `char' is the same range of
 * `signed char' or `unsigned char'.
 */
#include <stdio.h>

void f(void)
{
  printf("'\\xFF' = %d\n", '\xFF');
}

int main(void)
{
  f();
  return 0;
}
