/*
 * Check if type in type-specifier is unsigned long long int
 */
#include <stdio.h>

void test000(unsigned long long a,
	     long unsigned long b,
	     long long unsigned c)
{
  printf("`test000' called\n");
  printf(" %llu", a);
  printf(" %llu", b);
  printf(" %llu", c);
  printf("\n");
}

void test001(unsigned long long int a,
	     unsigned long int long b,
	     unsigned int long long c,
	     int unsigned long long d,
	     int long unsigned long e,
	     int long long unsigned f,
	     long unsigned long int g,
	     long unsigned int long h,
	     long int unsigned long i,
	     long int long unsigned j,
	     long long int unsigned k,
	     long long unsigned int l)
{
  printf("`test001' called\n");
  printf(" %llu", a);
  printf(" %llu", b);
  printf(" %llu", c);
  printf(" %llu", d);
  printf(" %llu", e);
  printf(" %llu", f);
  printf(" %llu", g);
  printf(" %llu", h);
  printf(" %llu", i);
  printf(" %llu", j);
  printf(" %llu", k);
  printf(" %llu", l);
  printf("\n");
}

int main(void)
{
  test000(1,2,3);
  test001(0,1,2,3,4,5,6,7,8,9,10,11);
  return 0;
}
