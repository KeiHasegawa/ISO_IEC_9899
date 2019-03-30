/*
 * Check if compound literal can be lef operand in assignment operator.
 */
#include <stdio.h>

void test00(void)
{
  printf("`test00' called\n");
  int n;
  (int){ n } = 1;
}

void test01(void)
{
  printf("`test01' called\n");
  struct S { int a; } s;
  (struct S){ 1 } = s;
}

void test02(void)
{
  printf("`test02' called\n");
  union U { int a; } u;
  (union U){ 1 } = u;
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
