/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `unsigned long int'.
 */
#include <stdio.h>

void test00(unsigned long int a, long double b)
{
  printf("%ld + %Lf = %Lf\n", a, b, a + b);
}

void test01(unsigned long int a, double b)
{
  printf("%ld + %f = %f\n", a, b, a + b);
}

void test02(unsigned long int a, float b)
{
  printf("%ld + %f = %f\n", a, b, a + b);
}

void test03(unsigned long int a, unsigned long long int b)
{
  printf("%ld + %lld = %lld\n", a, b, a + b);
}

void test04(unsigned long int a, long long int b)
{
  printf("%ld + %lld = %lld\n", a, b, a + b);
}

void test05(unsigned long int a, unsigned long int b)
{
  printf("%ld + %ld = %ld\n", a, b, a + b);
}

void test06(unsigned long int a, long int b)
{
  printf("%ld + %ld = %ld\n", a, b, a + b);
}

void test07(unsigned long int a, unsigned int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test08(unsigned long int a, int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test09(unsigned long int a, unsigned short int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test10(unsigned long int a, short int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test11(unsigned long int a, unsigned char b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test12(unsigned long int a, signed char b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test13(unsigned long int a, char b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

int main(void)
{
  test00(0UL, 1.5L);
  test01(1UL, 2.5);
  test02(2UL, 3.5F);
  test03(3UL, 4ULL);
  test04(4UL, 5LL);
  test05(5UL, 6UL);
  test06(6UL, 7L);
  test07(7UL, 8L);
  test08(8UL, 9U);
  test09(9UL, 10);
  test10(10UL, 11);
  test11(11UL, 12);
  test12(12UL, 13);
  test13(13UL, 14);
  return 0;
}
