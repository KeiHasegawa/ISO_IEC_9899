/*
 * Check if postfix increment or decrement operator is recognized.
 * here, operand type is arithmetic type.
 */
#include <stdio.h>

/* char */
void test00(char x)
{
  printf("`test00' called\n");
  printf("%c\n", x++);
  printf("%c\n", x++);
  printf("%c\n", x--);
  printf("%c\n", x--);
}

/* signed char */
void test01(signed char x)
{
  printf("`test01' called\n");
  printf("%c\n", x++);
  printf("%c\n", x++);
  printf("%c\n", x--);
  printf("%c\n", x--);
}

/* unsigned char */
void test02(unsigned char x)
{
  printf("`test02' called\n");
  printf("%c\n", x++);
  printf("%c\n", x++);
  printf("%c\n", x--);
  printf("%c\n", x--);
}

/* short int */
void test03(short int x)
{
  printf("`test03' called\n");
  printf("%d\n", x++);
  printf("%d\n", x++);
  printf("%d\n", x--);
  printf("%d\n", x--);
}

/* unsigned short int */
void test04(unsigned short int x)
{
  printf("`test04' called\n");
  printf("%d\n", x++);
  printf("%d\n", x++);
  printf("%d\n", x--);
  printf("%d\n", x--);
}

/* int */
void test05(int x)
{
  printf("`test05' called\n");
  printf("%d\n", x++);
  printf("%d\n", x++);
  printf("%d\n", x--);
  printf("%d\n", x--);
}

/* unsigned int */
void test06(unsigned int x)
{
  printf("`test06' called\n");
  printf("%d\n", x++);
  printf("%d\n", x++);
  printf("%d\n", x--);
  printf("%d\n", x--);
}

/* long int */
void test07(long int x)
{
  printf("`test07' called\n");
  printf("%ld\n", x++);
  printf("%ld\n", x++);
  printf("%ld\n", x--);
  printf("%ld\n", x--);
}

/* unsigned long int */
void test08(unsigned long int x)
{
  printf("`test08' called\n");
  printf("%ld\n", x++);
  printf("%ld\n", x++);
  printf("%ld\n", x--);
  printf("%ld\n", x--);
}

/* long long int */
void test09(long long int x)
{
  printf("`test09' called\n");
  printf("%lld\n", x++);
  printf("%lld\n", x++);
  printf("%lld\n", x--);
  printf("%lld\n", x--);
}

/* unsigned long long int */
void test10(unsigned long long int x)
{
  printf("`test10' called\n");
  printf("%lld\n", x++);
  printf("%lld\n", x++);
  printf("%lld\n", x--);
  printf("%lld\n", x--);
}

/* float */
void test11(float x)
{
  printf("`test11' called\n");
  printf("%f\n", x++);
  printf("%f\n", x++);
  printf("%f\n", x--);
  printf("%f\n", x--);
}

/* double */
void test12(double x)
{
  printf("`test12' called\n");
  printf("%f\n", x++);
  printf("%f\n", x++);
  printf("%f\n", x--);
  printf("%f\n", x--);
}

/* long double */
void test13(long double x)
{
  printf("`test13' called\n");
  printf("%Lf\n", x++);
  printf("%Lf\n", x++);
  printf("%Lf\n", x--);
  printf("%Lf\n", x--);
}

/* enum */
enum E { a, b, c, d, e, f, g };
void test14(enum E x)
{
  printf("`test14' called\n");
  printf("%d\n", x++);
  printf("%d\n", x++);
  printf("%d\n", x--);
  printf("%d\n", x--);
}

int main(void)
{
  test00('a');
  test01('A');
  test02('X');
  test03(3);
  test04(-4);
  test05(5);
  test06(-6);
  test07(7);
  test08(-8);
  test09(9);
  test10(-10);
  test11(11);
  test12(-12);
  test13(13);
  test14(-14);
  return 0;
}
