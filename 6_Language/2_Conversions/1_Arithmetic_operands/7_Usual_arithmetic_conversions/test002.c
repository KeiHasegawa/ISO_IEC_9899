/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `float'.
 */
#include <stdio.h>

void test00(float a, long double b)
{
  printf("%f + %Lf = %Lf\n", a, b, a + b);
}

void test01(float a, double b)
{
  printf("%f + %f = %f\n", a, b, a + b);
}

void test02(float a, float b)
{
  printf("%f + %f = %f\n", a, b, a + b);
}

void test03(float a, unsigned long long int b)
{
  printf("%f + %lld = %f\n", a, b, a + b);
}

void test04(float a, long long int b)
{
  printf("%f + %lld = %f\n", a, b, a + b);
}

void test05(float a, unsigned long int b)
{
  printf("%f + %ld = %f\n", a, b, a + b);
}

void test06(float a, long int b)
{
  printf("%f + %ld = %f\n", a, b, a + b);
}

void test07(float a, unsigned int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test08(float a, int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test09(float a, unsigned short int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test10(float a, short int b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test11(float a, unsigned char b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test12(float a, signed char b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

void test13(float a, char b)
{
  printf("%f + %d = %f\n", a, b, a + b);
}

int main(void)
{
  test00(0.5F, 1.5L);
  test01(1.5F, 2.5);
  test02(2.5F, 3.5F);
  test03(3.5F, 4ULL);
  test04(4.5F, 5LL);
  test05(5.5F, 6UL);
  test06(6.5F, 7L);
  test07(7.5F, 8L);
  test08(8.5F, 9U);
  test09(9.5F, 10);
  test10(10.5F, 11);
  test11(11.5F, 12);
  test12(12.5F, 13);
  test13(13.5F, 14);
  return 0;
}
