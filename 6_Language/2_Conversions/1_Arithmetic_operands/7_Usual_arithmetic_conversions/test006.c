/*
 * Check if usual arithmetic conversion is well done.
 * Here, type of one opernd is `long int'.
 */
#include <stdio.h>

void test00(long int a, long double b)
{
  printf("%ld + %Lf = %Lf\n", a, b, a + b);
}

void test01(long int a, double b)
{
  printf("%ld + %f = %f\n", a, b, a + b);
}

void test02(long int a, float b)
{
  printf("%ld + %f = %f\n", a, b, a + b);
}

void test03(long int a, unsigned long long int b)
{
  printf("%ld + %lld = %lld\n", a, b, a + b);
}

void test04(long int a, long long int b)
{
  printf("%ld + %lld = %lld\n", a, b, a + b);
}

void test05(long int a, unsigned long int b)
{
  printf("%ld + %ld = %ld\n", a, b, a + b);
}

void test06(long int a, long int b)
{
  printf("%ld + %ld = %ld\n", a, b, a + b);
}

void test07(long int a, unsigned int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test08(long int a, int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test09(long int a, unsigned short int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test10(long int a, short int b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test11(long int a, unsigned char b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test12(long int a, signed char b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

void test13(long int a, char b)
{
  printf("%ld + %d = %ld\n", a, b, a + b);
}

int main(void)
{
  test00(0L, 1.5L);
  test01(1L, 2.5);
  test02(2L, 3.5F);
  test03(3L, 4ULL);
  test04(4L, 5LL);
  test05(5L, 6UL);
  test06(6L, 7L);
  test07(7L, 8L);
  test08(8L, 9U);
  test09(9L, 10);
  test10(10L, 11);
  test11(11L, 12);
  test12(12L, 13);
  test13(13L, 14);
  return 0;
}
