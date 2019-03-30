/*
 * Check unary arithmetic operator works well outside function.
 */
#include <stdio.h>

int test_000 = +1.0L;
long long int test_001 = -'c';
unsigned char test_002 = ~0;
float test_003 = !0ULL;

void test00(void)
{
  printf("`test00' called\n");
  printf("%d %lld %d %f\n", test_000, test_001, test_002, test_003);
}

int main(void)
{
  test00();
  return 0;
}
