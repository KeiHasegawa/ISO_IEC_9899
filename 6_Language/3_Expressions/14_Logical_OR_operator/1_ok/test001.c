/*
 * Check logical OR operator works well for pointer type
 */
#include <stdio.h>

void test00(char* x, void* y)
{
  printf("`test00' called\n");
  printf("%d\n", x || y);
}

struct S;
union U;

void test01(struct S* x, union U* y)
{
  printf("`test01' called\n");
  printf("%d\n", x || y);
}

struct S {
  int a;
};

union U {
  int a;
};

void test02(union U* x, struct S* y)
{
  printf("`test02' called\n");
  printf("%d\n", x || y);
}

void test03(struct S x[5], union U y(int))
{
  printf("`test03' called\n");
  printf("%d\n", x || y);
}


int main(void)
{
  test00(0,0);
  test00(0,(void*)1);
  test00((char*)1,0);
  test00((char*)1,(void*)1);

  test01(0,0);
  test01(0,(union U*)1);
  test01((struct S*)1,0);
  test01((struct S*)1,(union U*)1);

  test02(0,0);
  test02(0,(struct S*)1);
  test02((union U*)1,0);
  test02((union U*)1,(struct S*)1);

  test03(0,0);
  test03(0,(union U (*)(int))1);
  test03((struct S*)1,0);
  test03((struct S*)1,(union U (*)(int))1);

  return 0;
}
