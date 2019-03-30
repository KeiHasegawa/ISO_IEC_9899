/*
 * Check if `register' is recognized.
 */
#include <stdio.h>

int main(void)
{
  register int i;
  i = 1234;
  printf("i = %d\n", i);
  return 0;
}
