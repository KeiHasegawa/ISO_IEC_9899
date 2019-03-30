/*
 * Check if multiplicative-operator works well when one operand is constant.
 */
#include <stdio.h>

/* int */
void test00(int a)
{
  printf("`test00' called\n");
  printf("%d\n", a * (-1));
  printf("%d\n", 2 * a);
  printf("%d\n", a / (-3));
  printf("%d\n", 4 / a);
  printf("%d\n", a % 5);
  printf("%d\n", 6 % a);
}

/* unsigned int */
void test01(unsigned int a)
{
  printf("`test01' called\n");
  printf("%u\n", a * 3U);
  printf("%u\n", (-4U) * a);
  printf("%u\n", a / 5U);
  printf("%u\n", (-6U) / a);
  printf("%u\n", a % 7U);
  printf("%u\n", (-8U) % a);
}

/* long int */
void test02(long int a)
{
  printf("`test02' called\n");
  printf("%ld\n", a * (-5L));
  printf("%ld\n", 6L * a);
  printf("%ld\n", a / (-7L));
  printf("%ld\n", 8L / a);
  printf("%ld\n", a % (-9L));
  printf("%ld\n", 10L % a);
}

/* unsigned long int */
void test03(unsigned long int a)
{
  printf("`test03' called\n");
  printf("%lu\n", a * 7UL);
  printf("%lu\n", (-8UL) * a);
  printf("%lu\n", a / 9UL);
  printf("%lu\n", (-10UL) / a);
  printf("%lu\n", a % 11UL);
  printf("%lu\n", (-12UL) % a);
}

/* long long int */
void test04(long long int a)
{
  printf("`test04' called\n");
  printf("%lld\n", a * 9LL);
  printf("%lld\n", (-10LL) * a);
  printf("%lld\n", a / 11LL);
  printf("%lld\n", (-12LL) / a);
  printf("%lld\n", a % 13LL);
  printf("%lld\n", (-14LL) % a);
}

/* unsigned long long int */
void test05(unsigned long long int a)
{
  printf("`test05' called\n");
  printf("%llu\n", a * (-11ULL));
  printf("%llu\n", 12ULL * a);
  printf("%llu\n", a / (-13ULL));
  printf("%llu\n", 14ULL / a);
  printf("%llu\n", a % (-15ULL));
  printf("%llu\n", 16ULL % a);
}

/* float */
void test06(float a)
{
  printf("`test06' called\n");
  printf("%f\n", a * 13.0F);
  printf("%f\n", (-14.0F) * a);
  printf("%f\n", a / 15.0F);
  printf("%f\n", (-16.0F) / a);
}

/* double */
void test07(double a)
{
  printf("`test07' called\n");
  printf("%f\n", a * 15.0);
  printf("%f\n", (-16.0) * a);
  printf("%f\n", a / 16.0);
  printf("%f\n", (-17.0) / a);
}

/* long double */
void test08(long double a)
{
  printf("`test08' called\n");
  printf("%Lf\n", a * 17.0);
  printf("%Lf\n", (-18.0) * a);
  printf("%Lf\n", a / 19.0);
  printf("%Lf\n", (-20.0) / a);
}

int main(void)
{
  test00(2);
  test01(2U);
  test02(-2L);
  test03(2UL);
  test04(2LL);
  test05(2ULL);
  test06(2.0F);
  test07(0.25);
  test08(0.125L);
  return 0;
}
