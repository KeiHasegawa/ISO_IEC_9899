/*
 * Check if pointer generation rule is correct.
 */
#include <stdio.h>

int x[3][5];

int (*y)[5] = x;

int *z = x[1];

int main(void)
{
  (*y)[3] = 123;
  printf("z[-2] = %d\n", z[-2]);
  return 0;
}
