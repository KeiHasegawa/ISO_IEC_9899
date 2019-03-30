/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `unsigned long long int'.
 */
#include <stdio.h>

void test00(unsigned long long int a, long double b)
{
  printf("%lld + %Lf = %Lf\n", a, b, a + b);
}

void test01(unsigned long long int a, double b)
{
  printf("%lld + %f = %f\n", a, b, a + b);
}

void test02(unsigned long long int a, float b)
{
  printf("%lld + %f = %f\n", a, b, a + b);
}

void test03(unsigned long long int a, unsigned long long int b)
{
  printf("%lld + %lld = %lld\n", a, b, a + b);
}

void test04(unsigned long long int a, long long int b)
{
  printf("%lld + %lld = %lld\n", a, b, a + b);
}

void test05(unsigned long long int a, unsigned long int b)
{
  printf("%lld + %ld = %lld\n", a, b, a + b);
}

void test06(unsigned long long int a, long int b)
{
  printf("%lld + %ld = %lld\n", a, b, a + b);
}

void test07(unsigned long long int a, unsigned int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test08(unsigned long long int a, int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test09(unsigned long long int a, unsigned short int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test10(unsigned long long int a, short int b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test11(unsigned long long int a, unsigned char b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test12(unsigned long long int a, signed char b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

void test13(unsigned long long int a, char b)
{
  printf("%lld + %d = %lld\n", a, b, a + b);
}

int main(void)
{
  test00(0ULL, 1.5L);
  test01(1ULL, 2.5);
  test02(2ULL, 3.5F);
  test03(3ULL, 4ULL);
  test04(4ULL, 5LL);
  test05(5ULL, 6UL);
  test06(6ULL, 7L);
  test07(7ULL, 8L);
  test08(8ULL, 9U);
  test09(9ULL, 10);
  test10(10ULL, 11);
  test11(11ULL, 12);
  test12(12ULL, 13);
  test13(13ULL, 14);
  return 0;
}
