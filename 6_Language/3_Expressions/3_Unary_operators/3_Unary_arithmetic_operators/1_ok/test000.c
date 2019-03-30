/*
 * Check if the operand of the unary + or - operator shall have arithmetic
 * type; of the ~ operator, integer type; of the ! operator, scalar type.
 */
#include <stdio.h>

/* char */
void test00(char x)
{
  printf("`test00' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* signed char */
void test01(signed char x)
{
  printf("`test01' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* unsigned char */
void test02(unsigned char x)
{
  printf("`test02' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* short int */
void test03(short int x)
{
  printf("`test03' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* unsigned short int */
void test04(unsigned short int x)
{
  printf("`test04' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* int */
void test05(int x)
{
  printf("`test05' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* unsigned int */
void test06(unsigned int x)
{
  printf("`test06' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* long int */
void test07(long int x)
{
  printf("`test07' called\n");
  printf("%ld %ld %ld %d\n", +x, -x, ~x, !x);
}

/* unsigned long int */
void test08(unsigned long int x)
{
  printf("`test08' called\n");
  printf("%ld %ld %ld %d\n", +x, -x, ~x, !x);
}

/* long long int */
void test09(long long int x)
{
  printf("`test09' called\n");
  printf("%lld %lld %lld %d\n", +x, -x, ~x, !x);
}

/* unsigned long long int */
void test10(unsigned long long int x)
{
  printf("`test10' called\n");
  printf("%lld %lld %lld %d\n", +x, -x, ~x, !x);
}

/* float */
void test11(float x)
{
  printf("`test11' called\n");
  printf("%f %f %d\n", +x, -x, !x);
}

/* double */
void test12(double x)
{
  printf("`test12' called\n");
  printf("%f %f %d\n", +x, -x, !x);
}

/* long double */
void test13(long double x)
{
  printf("`test13' called\n");
  printf("%Lf %Lf %d\n", +x, -x, !x);
}

/* enum */
enum E { a, b, c, d };
void test14(enum E x)
{
  printf("`test14' called\n");
  printf("%d %d %d %d\n", +x, -x, ~x, !x);
}

/* pointer to int */
void test15(int* p)
{
  printf("`test15' called\n");
  printf("%d\n", !p);
}

int main(void)
{
  int i = -8;
  test00(i++);
  test01(i++);
  test02(i++);
  test03(i++);
  test04(i++);
  test05(i++);
  test06(i++);
  test07(i++);
  test08(i++);
  test09(i++);
  test10(i++);
  test11(i++);
  test12(i++);
  test13(i++);
  test14(i++);
  test15(&i);
  return 0;
}
