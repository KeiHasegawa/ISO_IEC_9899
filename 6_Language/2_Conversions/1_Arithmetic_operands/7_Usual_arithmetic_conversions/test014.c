/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is some enum.
 */
#include <stdio.h>

enum E { e00, e01, e02, e03, e04, e05, e06, e07, e08, e09, e10, e11, e12, e13 };

void test00(enum E a, long double b)
{
  printf("%d + %Lf = %Lf\n", a, b, a + b);
}

void test01(enum E a, double b)
{
  printf("%d + %f = %f\n", a, b, a + b);
}

void test02(enum E a, float b)
{
  printf("%d + %f = %f\n", a, b, a + b);
}

void test03(enum E a, unsigned long long int b)
{
  printf("%d + %lld = %lld\n", a, b, a + b);
}

void test04(enum E a, long long int b)
{
  printf("%d + %lld = %lld\n", a, b, a + b);
}

void test05(enum E a, unsigned long int b)
{
  printf("%d + %ld = %ld\n", a, b, a + b);
}

void test06(enum E a, long int b)
{
  printf("%d + %ld = %ld\n", a, b, a + b);
}

void test07(enum E a, unsigned int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test08(enum E a, int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test09(enum E a, unsigned short int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test10(enum E a, short int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test11(enum E a, unsigned char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test12(enum E a, signed char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void test13(enum E a, char b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

int main(void)
{
  test00(e00, 1.5L);
  test01(e01, 2.5);
  test02(e02, 3.5F);
  test03(e03, 4ULL);
  test04(e04, 5LL);
  test05(e05, 6UL);
  test06(e06, 7L);
  test07(e07, 8L);
  test08(e08, 9U);
  test09(e09, 10);
  test10(e10, 11);
  test11(e11, 12);
  test12(e12, 13);
  test13(e13, 14);
  return 0;
}
