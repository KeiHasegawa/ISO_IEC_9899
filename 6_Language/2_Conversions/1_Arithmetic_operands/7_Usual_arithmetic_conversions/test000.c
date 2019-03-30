/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `long double'.
 */
#include <stdio.h>

void test00(long double a, long double b)
{
  printf("%Lf + %Lf = %Lf\n", a, b, a + b);
}

void test01(long double a, double b)
{
  printf("%Lf + %f = %Lf\n", a, b, a + b);
}

void test02(long double a, float b)
{
  printf("%Lf + %f = %Lf\n", a, b, a + b);
}

void test03(long double a, unsigned long long int b)
{
  printf("%Lf + %lld = %Lf\n", a, b, a + b);
}

void test04(long double a, long long int b)
{
  printf("%Lf + %lld = %Lf\n", a, b, a + b);
}

void test05(long double a, unsigned long int b)
{
  printf("%Lf + %ld = %Lf\n", a, b, a + b);
}

void test06(long double a, long int b)
{
  printf("%Lf + %ld = %Lf\n", a, b, a + b);
}

void test07(long double a, unsigned int b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

void test08(long double a, int b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

void test09(long double a, unsigned short int b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

void test10(long double a, short int b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

void test11(long double a, unsigned char b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

void test12(long double a, signed char b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

void test13(long double a, char b)
{
  printf("%Lf + %d = %Lf\n", a, b, a + b);
}

int main(void)
{
  test00(0.5L, 1.5L);
  test01(1.5L, 2.5);
  test02(2.5L, 3.5F);
  test03(3.5L, 4ULL);
  test04(4.5L, 5LL);
  test05(5.5L, 6UL);
  test06(6.5L, 7L);
  test07(7.5L, 8L);
  test08(8.5L, 9U);
  test09(9.5L, 10);
  test10(10.5L, 11);
  test11(11.5L, 12);
  test12(12.5L, 13);
  test13(13.5L, 14);
  return 0;
}
