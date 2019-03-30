/*
 * Check if `static' is recognzied.
 */
#include <stdio.h>

int main(void)
{
  static int i;
  i = 1234;
  printf("i = %d\n", i);
  return 0;
}
