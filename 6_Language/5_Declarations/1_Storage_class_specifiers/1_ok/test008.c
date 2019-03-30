/*
 * Check if qualified pointer is recognized.
 */
#include <stdio.h>

int main(void)
{
  typedef int *int_ptr;
  int a;
  const int_ptr constant_ptr = &a;
  *constant_ptr = 1234;
  printf("a = %d\n", a);
  return 0;
}
