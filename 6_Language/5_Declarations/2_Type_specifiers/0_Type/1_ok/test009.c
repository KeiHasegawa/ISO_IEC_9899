/*
 * Check if type in type-specifier is unsigned long int
 */
#include <stdio.h>

void test001(unsigned long x, long unsigned y)
{
  printf("`test001' called\n");
  printf("%lu, %lu\n", x, y);
}

void test003(unsigned long int a,
	     unsigned int long b,
	     long unsigned int c,
	     long int unsigned d,
	     int unsigned long e,
	     int long unsigned f)
{
  printf("`test003' called\n");
  printf("%lu, %lu, %lu, %lu, %lu, %lu\n", a, b, c, d, e, f);
}

int main(void)
{
  test001(2L,3L);
  test003(6L,7L,8L,9L,10L,11L);
  return 0;
}
