/*
 * Unless the type name specifies a void type, the type name shall specify
 * qualified or unqualified scalar type and the operand shall have scalar type.
 */
#include <stdio.h>

/* void */
void test00(int x)
{
  printf("`test00' called\n");
  (void)x;
  (void)printf("hello world\n");
}

/* char */
void test01(int x)
{
  printf("`test01' called\n");
  printf("(char)0x%x = 0x0x%x\n", x, (char)x);
}

/* signed char */
void test02(int x)
{
  printf("`test02' called\n");
  printf("(signed char)0x%x = 0x%x\n", x, (signed char)x);
}

/* unsigned char */
void test03(int x)
{
  printf("`test03' called\n");
  printf("(unsigned char)0x%x = 0x%x\n", x, (unsigned char)x);
}

/* short int */
void test04(int x)
{
  printf("`test04' called\n");
  printf("(short int)0x%x = 0x%x\n", x, (short int)x);
}

/* unsigned short int */
void test05(int x)
{
  printf("`test05' called\n");
  printf("(unsigned short int)0x%x = 0x%x\n", x, (unsigned short int)x);
}

/* int */
void test06(int x)
{
  printf("`test06' called\n");
  printf("(int)0x%x = 0x%x\n", x, (int)x);
}

/* unsigned int */
void test07(int x)
{
  printf("`test07' called\n");
  printf("(unsigned int)0x%x = 0x%x\n", x, (unsigned int)x);
}

/* long int */
void test08(int x)
{
  printf("`test08' called\n");
  printf("(long int)0x%x = 0x%lx\n", x, (long int)x);
}

/* unsigned long int */
void test09(int x)
{
  printf("`test09' called\n");
  printf("(unsigned long int)0x%x = 0x%lx\n", x, (unsigned long int)x);
}

/* long long int */
void test10(int x)
{
  printf("`test10' called\n");
  printf("(long long int)0x%x = 0x%llx\n", x, (long long int)x);
}

/* unsigned long long int */
void test11(int x)
{
  printf("`test11' called\n");
  printf("(unsigned long long int)0x%x = 0x%llx\n",
	 x, (unsigned long long int)x);
}

/* float */
void test12(int x)
{
  printf("`test12' called\n");
  printf("(float)0x%x = %f\n", x, (float)x);
  /*
   * 0x9abcdef0 = -1698898192
   * 
   * but bit representation of `-1698898192.0F' is
   *
   * 0xceca8642
   *
   * and is equal to that of `-1698898196.0F'.
   */
}

/* double */
void test13(int x)
{
  printf("`test13' called\n");
  printf("(double)0x%x = %f\n", x, (double)x);
}

/* long double */
void test14(int x)
{
  printf("`test14' called\n");
  printf("(long double)0x%x = %Lf\n", x, (long double)x);
}

/* pointer to int */
void test15(int x)
{
  printf("`test15' called\n");
  printf("(int*)0x%x = 0x%x\n", x, (int)((int*)x));
}

/* enum */
enum E { a, b, c, d };
void test16(int x)
{
  printf("`test16' called\n");
  printf("(enum E)0x%x = 0x%x\n", x, (enum E)x);
}

int main(void)
{
  test00(0x9abcdef0);
  test01(0x9abcdef0);
  test02(0x9abcdef0);
  test03(0x9abcdef0);
  test04(0x9abcdef0);
  test05(0x9abcdef0);
  test06(0x9abcdef0);
  test07(0x9abcdef0);
  test08(0x9abcdef0);
  test09(0x9abcdef0);
  test10(0x9abcdef0);
  test11(0x9abcdef0);
  test12(0x9abcdef0);
  test13(0x9abcdef0);
  test14(0x9abcdef0);
  test15(0x9abcdef0);
  test16(0x9abcdef0);
  return 0;
}
