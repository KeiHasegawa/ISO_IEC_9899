/*
 * Check if integer-constants are recognized.
 */
#include <stdio.h>

/*
 * integer-constant:
 *   decimal-constant integer-suffixopt
 *   octal-constant integer-suffixopt
 *   hexadecimal-constant integer-suffixopt
 */
void test00(void)
{
  printf("*** `test00' *** called\n");

  printf("%d\n", 1);     /* decimal-constant                */
  printf("%lld\n", 1LL); /* decimal-constant integer-suffix */

  printf("%d\n", 02);      /* octal-constant                */
  printf("%lld\n", 02LL);  /* octal-constant integer-suffix */

  printf("%d\n", 0x3);      /* hexadecimal-constant                */
  printf("%lld\n", 0x3LL);  /* hexadecimal-constant integer-suffix */
}

/*
 * decimal-constant:
 *   nonzero-digit
 *   decimal-constant digit
 */
void test01(void)
{
  printf("*** `test01' *** called\n");

  printf("%d\n", 1);   /* nonzero-digit */
  printf("%d\n", 10);  /* decimal-constant digit */
}

/*
 * octal-constant:
 *   0
 *   octal-constant octal-digit
 */
void test02(void)
{
  printf("*** `test02' *** called\n");

  printf("%d\n", 0);   /* 0 */
  printf("%d\n", 0123);  /* octal-constant octal-digit */
}

/*
 * hexadecimal-constant:
 *   0x hexadecimal-digit
 *   0X hexadecimal-digit
 *   hexadecimal-constant hexadecimal-digit
 */
void test03(void)
{
  printf("*** `test03' *** called\n");

  printf("%d\n", 0x1);    /* 0x hexadecimal-digit */
  printf("%d\n", 0Xa);    /* 0X hexadecimal-digit */
  printf("%d\n", 0xAb);   /* hexadecimal-constant hexadecimal-digit */
  printf("%d\n", 0XcD);   /* hexadecimal-constant hexadecimal-digit */
}

/*
 * nonzero-digit: one of
 *   1 2 3 4 5 6 7 8 9
 */
void test04(void)
{
  printf("*** `test04' *** called\n");

  printf("%d\n", 1);
  printf("%d\n", 2);
  printf("%d\n", 3);
  printf("%d\n", 4);
  printf("%d\n", 5);
  printf("%d\n", 6);
  printf("%d\n", 7);
  printf("%d\n", 8);
  printf("%d\n", 9);
}

/*
 * octal-digit: one of
 *   0 1 2 3 4 5 6 7
 */
void test05(void)
{
  printf("*** `test05' *** called\n");

  printf("%d\n", 00);
  printf("%d\n", 01);
  printf("%d\n", 02);
  printf("%d\n", 03);
  printf("%d\n", 04);
  printf("%d\n", 05);
  printf("%d\n", 06);
  printf("%d\n", 07);
}

/*
 * integer-suffix:
 *   unsigned-suffix long-suffixopt
 *   long-suffix unsigned-suffixopt
 *   unsigned-suffix long-long-suffixopt
 *   long-long-suffix unsigned-suffixopt
 */
void test06(void)
{
  printf("*** `test06' *** called\n");

  printf("%d\n", 1u);      /* unsigned-suffix             */
  printf("%lu\n", 2ul);    /* unsigned-suffix long-suffix */
  printf("%ld\n", 3l);     /* long-suffix                 */
  printf("%lu\n", 4lu);    /* long-suffix unsigned-suffix */
  printf("%u\n", 5u);      /* unsigned-suffix                  */
  printf("%llu\n", 6ull);  /* unsigned-suffix long-long-suffix */
  printf("%lld\n", 7ll);   /* long-long-suffix                 */
  printf("%llu\n", 8llu);  /* long-long-suffix unsigned-suffix */
}

/*
 * unsigned-suffix: one of
 *   u U
 */
void test07(void)
{
  printf("*** `test07' *** called\n");

  printf("%d\n", 1u);
  printf("%d\n", 2U);
}

/*
 * long-suffix: one of
 *   l L
 */
void test08(void)
{
  printf("*** `test08' *** called\n");

  printf("%ld\n", 1l);
  printf("%ld\n", 2L);
}

/*
 * long-long-suffix: one of
 *   ll LL
 */
void test09(void)
{
  printf("*** `test09' *** called\n");

  printf("%lld\n", 1ll);
  printf("%lld\n", 2LL);
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  return 0;
}

