/*
 * Check declarations with initializer are
 * recognized.
 */

#include <stdio.h>

double d = 2.5;

int main(void)
{
  int a;
  a = (int)d;
  int b = a;
  printf("d = %f, a = %d, b = %d\n", d, a, b);
  return 0;
}
