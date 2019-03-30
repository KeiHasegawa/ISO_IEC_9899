/*
 * Check if conversions from `double' to integer are well done.
 */
#include <stdio.h>

/* from `double' to `char' */
void test00(double y)
{
  printf("`test00' called\n");
  char x = y;
  printf("%d\n", x);
}

/* from `double' to `signed char' */
void test01(double y)
{
  printf("`test01' called\n");
  signed char x = y;
  printf("%d\n", x);
}

/* from `double' to `unsigned char' */
void test02(double y)
{
  printf("`test02' called\n");
  unsigned char x = y;
  printf("%d\n", x);
}

/* from `double' to `short int' */
void test03(double y)
{
  printf("`test03' called\n");
  short int x = y;
  printf("%d\n", x);
}

/* from `double' to `unsigned short int' */
void test04(double y)
{
  printf("`test04' called\n");
  unsigned short int x = y;
  printf("%d\n", x);
}

/* from `double' to `int' */
void test05(double y)
{
  printf("`test05' called\n");
  int x = y;
  printf("%d\n", x);
}

/* from `double' to `unsigned int' */
void test06(double y)
{
  printf("`test06' called\n");
  unsigned int x = y;
  printf("%d\n", x);
}

/* from `double' to `long int' */
void test07(double y)
{
  printf("`test07' called\n");
  long int x = y;
  printf("%ld\n", x);
}

/* from `double' to `unsigned long int' */
void test08(double y)
{
  printf("`test08' called\n");
  long int x = y;
  printf("%lu\n", x);
}

/* from `double' to `long long int' */
void test09(double y)
{
  printf("`test09' called\n");
  long long int x = y;
  printf("%lld\n", x);
}

/* from `double' to `unsigned long long int' */
void test10(double y)
{
  printf("`test10' called\n");
  unsigned long long int x = y;
  printf("%llu\n", x);
}

void f(double y)
{
  printf("`f' called with %f\n", y);
  test00(y);
  test01(y);
  test02(y);
  test03(y);
  test04(y);
  test05(y);
  test06(y);
  test07(y);
  test08(y);
  test09(y);
  test10(y);
}

int main(void)
{
  double a[] = {
    -128.5, -128.0, -127.5, 126.5, 127.0, 127.5,

    254.5, 255.0, 255.5,

    -32768.5, -32768.0, -32767.5, 32766.5, 32767.0, 32767.5,

    65534.5, 65535.0, 65535.5,

    -2147483648.5, -2147483648.0, -2147483647.5,
    2147483646.5, 2147483647.0, 2147483647.5,

    4294967294.5, 4294967295.0, 4294967295.5,

    -9223372036854775808.5, -9223372036854775808.0, -9223372036854775807.5,
    9223372036854775806.5, 9223372036854775807.0, 9223372036854775807.5,

    18446744073709551614.5, 18446744073709551615.0, 18446744073709551615.5,
  };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    f(a[i]);
  return 0;
}
