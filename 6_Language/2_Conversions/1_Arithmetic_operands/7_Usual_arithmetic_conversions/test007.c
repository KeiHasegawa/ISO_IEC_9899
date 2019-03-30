/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `unsigned int'.
 */
#include <stdio.h>

void test00(unsigned int a, long double b)
{
  printf("%d + %Lf = %Lf\n", a, b, a + b);
}

void test01(unsigned int a, double b)
{
  printf("%d + %f = %f\n", a, b, a + b);
}

void test02(unsigned int a, float b)
{
  printf("%d + %f = %f\n", a, b, a + b);
}

void test03(unsigned int a, unsigned long long int b)
{
  printf("%d + %lld = %lld\n", a, b, a + b);
}

void test04(unsigned int a, long long int b)
{
  printf("%d + %lld = %lld\n", a, b, a + b);
}

void test05(unsigned int a, unsigned long int b)
{
  printf("%d + %ld = %ld\n", a, b, a + b);
}

void test06(unsigned int a, long int b)
{
  printf("%d + %ld = %ld\n", a, b, a + b);
}

void test07(unsigned int a, unsigned int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test08(unsigned int a, int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test09(unsigned int a, unsigned short int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test10(unsigned int a, short int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test11(unsigned int a, unsigned char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test12(unsigned int a, signed char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test13(unsigned int a, char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

int main(void)
{
  test00(0U, 1.5L);
  test01(1U, 2.5);
  test02(2U, 3.5F);
  test03(3U, 4ULL);
  test04(4U, 5LL);
  test05(5U, 6UL);
  test06(6U, 7L);
  test07(7U, 8L);
  test08(8U, 9U);
  test09(9U, 10);
  test10(10U, 11);
  test11(11U, 12);
  test12(12U, 13);
  test13(13U, 14);
  return 0;
}
