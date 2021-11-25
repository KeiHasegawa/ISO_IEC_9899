/*
 * Check if compound literal outside funciton is recognized.
 */
#include <stdio.h>

int* p = (int []){1, 2, 3};

void test00(void)
{
  printf("`test00' called\n");
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}

void test01(void)
{
  printf("`test01' called\n");
  int n = 1;
  int* p = &n;
  p = (int [2]){*p};
  printf("p[0] = %d, p[1] = %d\n", p[0], p[1]);
}

struct S {
  int a;
  int b;
};

struct S* ps = &(struct S){ 4, 5 };

void test02(void)
{
  printf("`test02' called\n");
  printf("ps->a = %d, ps->b = %d\n", ps->a, ps->b);
}

union U {
  float a;
  int b;
};

union U* pu = &(union U){ 1 };

void test03(void)
{
  printf("`test03' called\n");
  printf("pu->a = %f, pu->b = 0x%08x\n", pu->a, pu->b);
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  return 0;
}
