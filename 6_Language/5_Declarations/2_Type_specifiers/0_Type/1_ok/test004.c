/*
 * Check if type in type-specifier is short int
 */
#include <stdio.h>

void test000(short x)
{
  printf("`test000' called\n");
  printf("%d\n", x);
}

void test001(signed short x, short signed y)
{
  printf("`test001' called\n");
  printf("%d, %d\n", x, y);
}

void test002(int short x, short int y)
{
  printf("`test002' called\n");
  printf("%d, %d\n", x, y);
}

void test003(signed short int a,
	     signed int short b,
	     short signed int c,
	     short int signed d,
	     int signed short e,
	     int short signed f)
{
  printf("`test003' called\n");
  printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
}

int main(void)
{
  test000(32767);
  test001(32767,65535);
  test002(-32768,65536);
  test003(127,128,255,256,32767,32768);
  return 0;
}
