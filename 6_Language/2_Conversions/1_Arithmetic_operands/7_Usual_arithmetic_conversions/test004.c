/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `long long int'.
 */
#include <stdio.h>

void test00(long long int a, long double b)
{
  printf("%lld + %Lf = %Lf\n", a, b, a + b);
}

void test01(long long int a, double b)
{
  printf("%lld + %f = %f\n", a, b, a + b);
}

void test02(long long int a, float b)
{
  printf("%lld + %f = %f\n", a, b, a + b);
}

void test03(long long int a, unsigned long long int b)
{
  printf("%lld + %lld = %lld\n", a, b, a + b);
}

void test04(long long int a, long long int b)
{
  printf("%lld + %lld = %lld\n", a, b, a + b);
}

void test05(long long int a, unsigned long int b)
{
  printf("%lld + %ld = %lld\n", a, b, a + b);
}

void test06(long long int a, long int b)
{
  printf("%lld + %ld = %lld\n", a, b, a + b);
}

void test07(long long int a, unsigned int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test08(long long int a, int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test09(long long int a, unsigned short int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test10(long long int a, short int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test11(long long int a, unsigned char b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test12(long long int a, signed char b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test13(long long int a, char b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

int main(void)
{
  test00(0LL, 1.5L);
  test01(1LL, 2.5);
  test02(2LL, 3.5F);
  test03(3LL, 4ULL);
  test04(4LL, 5LL);
  test05(5LL, 6UL);
  test06(6LL, 7L);
  test07(7LL, 8L);
  test08(8LL, 9U);
  test09(9LL, 10);
  test10(10LL, 11);
  test11(11LL, 12);
  test12(12LL, 13);
  test13(13LL, 14);
  return 0;
}
