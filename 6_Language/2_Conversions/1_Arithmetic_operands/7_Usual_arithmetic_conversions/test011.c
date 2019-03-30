/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `unsigned char'.
 */
#include <stdio.h>

void test00(unsigned char a, long double b)
{
  printf("%d + %Lf = %Lf\n", a, b, a + b);
}

void test01(unsigned char a, double b)
{
  printf("%d + %f = %f\n", a, b, a + b);
}

void test02(unsigned char a, float b)
{
  printf("%d + %f = %f\n", a, b, a + b);
}

void test03(unsigned char a, unsigned long long int b)
{
  printf("%d + %lld = %lld\n", a, b, a + b);
}

void test04(unsigned char a, long long int b)
{
  printf("%d + %lld = %lld\n", a, b, a + b);
}

void test05(unsigned char a, unsigned long int b)
{
  printf("%d + %ld = %ld\n", a, b, a + b);
}

void test06(unsigned char a, long int b)
{
  printf("%d + %ld = %ld\n", a, b, a + b);
}

void test07(unsigned char a, unsigned int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test08(unsigned char a, int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test09(unsigned char a, unsigned short int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test10(unsigned char a, short int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test11(unsigned char a, unsigned char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test12(unsigned char a, signed char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test13(unsigned char a, char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

int main(void)
{
  test00(0, 1.5L);
  test01(1, 2.5);
  test02(2, 3.5F);
  test03(3, 4ULL);
  test04(4, 5LL);
  test05(5, 6UL);
  test06(6, 7L);
  test07(7, 8L);
  test08(8, 9U);
  test09(9, 10);
  test10(10, 11);
  test11(11, 12);
  test12(12, 13);
  test13(13, 14);
  return 0;
}
