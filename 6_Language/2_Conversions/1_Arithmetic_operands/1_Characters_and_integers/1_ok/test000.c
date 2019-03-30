/*
 * Check if integer promotions are well done.
 */
#include <stdio.h>

/* from `char' to `int' */
void test00(char x)
{
  printf("`test00' called\n");
  printf("%d\n", -x);
}

/* from `signed char' to `int' */
void test01(signed char x)
{
  printf("`test01' called\n");
  printf("%d\n", -x);
}

/* from `unsigned char' to `int' */
void test02(unsigned char x)
{
  printf("`test02' called\n");
  printf("%d\n", -x);
}

/* from `short int' to `int' */
void test03(short int x)
{
  printf("`test03' called\n");
  printf("%d\n", -x);
}

/* from `unsigned short int' to `int' */
void test04(unsigned short int x)
{
  printf("`test04' called\n");
  printf("%d\n", -x);
}

int main(void)
{
  test00(-1);
  test01(-1);
  test02(-1);
  test03(-2);
  test04(-2);  
  return 0;
}
