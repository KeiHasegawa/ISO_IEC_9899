/*
 * Check if conversions from `long double' to integer are well done.
 */
#include <stdio.h>

/* from `long double' to `char' */
void test00(long double y)
{
  printf("`test00' called\n");
  char x = y;
  printf("%d\n", x);
}

/* from `long double' to `signed char' */
void test01(long double y)
{
  printf("`test01' called\n");
  signed char x = y;
  printf("%d\n", x);
}

/* from `long double' to `unsigned char' */
void test02(long double y)
{
  printf("`test02' called\n");
  unsigned char x = y;
  printf("%d\n", x);
}

/* from `long double' to `short int' */
void test03(long double y)
{
  printf("`test03' called\n");
  short int x = y;
  printf("%d\n", x);
}

/* from `long double' to `unsigned short int' */
void test04(long double y)
{
  printf("`test04' called\n");
  unsigned short int x = y;
  printf("%d\n", x);
}

/* from `long double' to `int' */
void test05(long double y)
{
  printf("`test05' called\n");
  int x = y;
  printf("%d\n", x);
}

/* from `long double' to `unsigned int' */
void test06(long double y)
{
  printf("`test06' called\n");
  unsigned int x = y;
  printf("%d\n", x);
}

/* from `long double' to `long int' */
void test07(long double y)
{
  printf("`test07' called\n");
  long int x = y;
  printf("%ld\n", x);
}

/* from `long double' to `unsigned long int' */
void test08(long double y)
{
  printf("`test08' called\n");
  unsigned long int x = y;
  printf("%lu\n", x);
}

/* from `long double' to `long long int' */
void test09(long double y)
{
  printf("`test09' called\n");
  long long int x = y;
  printf("%lld\n", x);
}

/* from `long double' to `unsigned long long int' */
void test10(long double y)
{
  printf("`test10' called\n");
  unsigned long long int x = y;
  printf("%llu\n", x);
}

void f(long double y)
{
  printf("`f' called with %Lf\n", y);
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
  long double a[] = {
    -128.5L, -128.0L, -127.5L, 126.5L, 127.0L, 127.5L,

    254.5L, 255.0L, 255.5L,

    -32768.5L, -32768.0L, -32767.5L, 32766.5L, 32767.0L, 32767.5L,

    65534.5L, 65535.0L, 65535.5L,

    -2147483648.5L, -2147483648.0L, -2147483647.5L,
    2147483646.5L, 2147483647.0L, 2147483647.5L,

    4294967294.5L, 4294967295.0L, 4294967295.5L,

    -9223372036854775808.5L, -9223372036854775808.0L, -9223372036854775807.5L,
    9223372036854775806.5L, 9223372036854775807.0L, 9223372036854775807.5L,

    18446744073709551614.5L, 18446744073709551615.0L, 18446744073709551615.5L,
  };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    f(a[i]);
  return 0;
}
