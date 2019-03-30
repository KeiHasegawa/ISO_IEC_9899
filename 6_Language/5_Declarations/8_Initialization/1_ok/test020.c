/*
 * Check if member designators are recognized.
 */
#include <stdio.h>
#include <stdlib.h>

div_t x = { .quot = 2, .rem = -1 };

extern void f(div_t);

int main(void)
{
  f(x);
  div_t y = { .quot = 3, .rem = -4 };
  f(y);
  return 0;
}

void f(div_t d)
{
  printf("d.quot = %d, d.rem = %d\n", d.quot, d.rem);
}
