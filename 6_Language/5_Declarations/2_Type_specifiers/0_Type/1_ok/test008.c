/*
 * Check if type in type-specifier is long int
 */
#include <stdio.h>

void test000(long x)
{
  printf("`test000' called\n");
  printf("%ld\n", x);
}

void test001(signed long x, long signed y)
{
  printf("`test001' called\n");
  printf("%ld, %ld\n", x, y);
}

void test002(long int x, int long y)
{
  printf("`test002' called\n");
  printf("%ld, %ld\n", x, y);
}

void test003(signed long int a,
	     signed int long b,
	     long signed int c,
	     long int signed d,
	     int signed long e,
	     int long signed f)
{
  printf("`test003' called\n");
  printf("%ld, %ld, %ld, %ld, %ld, %ld\n", a, b, c, d, e, f);
}

int main(void)
{
  test000(1L);
  test001(2L,3L);
  test002(4L,5L);
  test003(6L,7L,8L,9L,10L,11L);
  return 0;
}
