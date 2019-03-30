/*
 * Only one operand of logical-OR operator is constant case.
 */
#include <stdio.h>

extern void test00(int);
extern void test01(int);
extern void test02(int);
extern void test03(int);

int main(void)
{
  test00(0);
  test00(5);
  test01(0);
  test01(4);
  test02(0);
  test02(3);
  test03(0);
  test03(2);
  return 0;
}

void test00(int a)
{
  printf("`test00' called\n");
  if ( a || 1 )
    printf("a || 1\n");
  else
    printf("!(a || 1)\n");
}

void test01(int a)
{
  printf("`test01' called\n");
  if ( a || 0 )
    printf("a || 0\n");
  else
    printf("!(a || 0)\n");
}

void test02(int a)
{
  printf("`test02' called\n");
  if ( a || 1 )
    printf("1 || a\n");
  else
    printf("!(1 || a)\n");
}

void test03(int a)
{
  printf("`test03' called\n");
  if ( 0 || a )
    printf("0 || a\n");
  else
    printf("!(0 || a)\n");
}
