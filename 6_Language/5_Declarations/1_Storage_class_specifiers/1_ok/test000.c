/*
 * Check if `typedef' is recognized.
 */
#include <stdio.h>

int main(void)
{
  typedef int I;
  I i = 1234;
  printf("i = %d\n", i);
  return 0;
}
