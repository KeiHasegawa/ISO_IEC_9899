/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `double'.
 */
#include <stdio.h>

void test00(double a, long double b)
{
  printf("%f + %Lf = %Lf\n", a, b, a + b);
}

void test01(double a, double b)
{
  printf("%f + %f = %f\n", a, b, a + b);
}

void test02(double a, float b)
{
  printf("%f + %f = %f\n", a, b, a + b);
}

void test03(double a, unsigned long long int b)
{
  printf("%f + %lld = %f\n", a, b, a + b);
}

void test04(double a, long long int b)
{
  printf("%f + %lld = %f\n", a, b, a + b);
}

void test05(double a, unsigned long int b)
{
  printf("%f + %ld = %f\n", a, b, a + b);
}

void test06(double a, long int b)
{
  printf("%f + %ld = %f\n", a, b, a + b);
}

void test07(double a, unsigned int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test08(double a, int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test09(double a, unsigned short int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test10(double a, short int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test11(double a, unsigned char b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test12(double a, signed char b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test13(double a, char b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

int main(void)
{
  test00(0.5, 1.5L);
  test01(1.5, 2.5);
  test02(2.5, 3.5F);
  test03(3.5, 4ULL);
  test04(4.5, 5LL);
  test05(5.5, 6UL);
  test06(6.5, 7L);
  test07(7.5, 8L);
  test08(8.5, 9U);
  test09(9.5, 10);
  test10(10.5, 11);
  test11(11.5, 12);
  test12(12.5, 13);
  test13(13.5, 14);
  return 0;
}
