/*
 * Check if type in type-specifier is unsigned short int
 */
#include <stdio.h>

void test001(unsigned short x, short unsigned y)
{
  printf("`test001' called\n");
  printf("%d, %d\n", x, y);
}

void test003(unsigned short int a,
	     unsigned int short b,
	     short unsigned int c,
	     short int unsigned d,
	     int unsigned short e,
	     int short unsigned f)
{
  printf("`test003' called\n");
  printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
}

int main(void)
{
  test001(32767,65535);
  test003(127,128,255,256,32767,32768);
  return 0;
}
