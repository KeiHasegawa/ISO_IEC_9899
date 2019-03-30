/*
 * Check if conversions are well done.
 *
 * o a value with integer type is converted to another integer type.
 * o the new type is unsigned.
 * o the value can not be represented by the new type.
 */
#include <stdio.h>

/* from `long long int' to `unsigned char' */
void test00(long long int y)
{
  printf("`test00' called\n");
  unsigned char x = y;
  printf("0x%x\n", x);
}

/* from `long long int' to `unsigned short int' */
void test01(long long int y)
{
  printf("`test01' called\n");
  unsigned short int x = y;
  printf("0x%x\n", x);
}

/* from `long long int' to `unsigned int' */
void test02(long long int y)
{
  printf("`test02' called\n");
  unsigned int x = y;
  printf("0x%x\n", x);
}

/* from `long long int' to `unsigned long int' */
void test03(long long int y)
{
  printf("`test03' called\n");
  unsigned long int x = y;
  printf("0x%lx\n", x);
}

/* from `int' to `unsigned char' */
void test04(int y)
{
  printf("`test00' called\n");
  unsigned char x = y;
  printf("0x%x\n", x);
}

/* from `int' to `unsigned short int' */
void test05(int y)
{
  printf("`test01' called\n");
  unsigned short int x = y;
  printf("0x%x\n", x);
}

int main(void)
{
  test00(0x123456789abcdef0LL);
  test01(0x123456789abcdef0LL);
  test02(0x123456789abcdef0LL);
  test03(0x123456789abcdef0LL);
  test04(0x12345678);
  test05(0x12345678);
  return 0;
}
