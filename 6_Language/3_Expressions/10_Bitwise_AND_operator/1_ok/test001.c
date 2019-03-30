/*
 * Check bitwise and operator works well outside function.
 */
#include <stdio.h>

int test_000 = (char)0xc & (long int)0xa;
long long int test_001 = -1LL & -2;

int main(void)
{
  printf("test_000 = %d\n", test_000);
  printf("test_001 = %lld\n", test_001);
  return 0;
}
