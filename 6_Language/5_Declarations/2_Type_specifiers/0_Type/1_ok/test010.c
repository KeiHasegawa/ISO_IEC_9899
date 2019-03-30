/*
 * Check if type in type-specifier is long long int
 */
#include <stdio.h>

void test000(long long x)
{
  printf("`test000' called\n");
  printf("%lld\n", x);
}

void test001(signed long long x,
	     long signed long y,
	     long long signed z)
{
  printf("`test001' called\n");
  printf("%lld, %lld, %lld\n", x, y, z);
}

void test002(int long long x,
	     long int long y,
	     long long int z)
{
  printf("`test002' called\n");
  printf("%lld, %lld, %lld\n", x, y, z);
}

void test003(signed long long int a,
	     signed long int long b,
	     signed int long long c,
	     long signed long int d,
	     long signed int long e,
	     long long signed int f,
	     long long int signed g,
	     long int long signed h,
	     long int signed long i,
	     int signed long long j,
	     int long signed long k,
	     int long long signed l)
{
  printf("`test003' called\n");
  printf(" %lld", a);
  printf(" %lld", b);
  printf(" %lld", c);
  printf(" %lld", d);
  printf(" %lld", e);
  printf(" %lld", f);
  printf(" %lld", g);
  printf(" %lld", h);
  printf(" %lld", i);
  printf(" %lld", j);
  printf(" %lld", k);
  printf(" %lld", l);
  printf("\n");
}

int main(void)
{
  test000(1LL);
  test001(2LL,3LL,4LL);
  test002(5LL,6LL,7LL);
  test003(0,1,2,3,4,5,6,7,8,9,10,11);
  return 0;
}
