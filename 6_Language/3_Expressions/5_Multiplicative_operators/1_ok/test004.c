/*
 * Check multiplicative operator works well outside function.
 */
#include <stdio.h>

long double test_000 = 'c' * 'd';
int test_001 = 30.0F / 10.0L;
char test_002 = 30LL % (short int)8;

int main(void)
{
  printf("test_000 = %Lf\n", test_000);
  printf("test_001 = %d\n", test_001);
  printf("test_002 = %d\n", test_002);
  return 0;
}
