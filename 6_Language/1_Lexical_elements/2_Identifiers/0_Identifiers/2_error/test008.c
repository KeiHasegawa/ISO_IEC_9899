/*
 * Check if declarations with qualifier are recognized.
 */
#include <stdio.h>

const c = 1;
volatile v;
int *restrict r;

int main(void)
{
  printf("c = %d\n", c);
  printf("v = %d\n", v = 2);
  int n;
  r = &n;
  printf("*r = %d\n", *r = 3);
  return 0;
}
