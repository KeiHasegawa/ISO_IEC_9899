/*
 * Check operator '>' works well for pointer type operand.
 */
#include <stdio.h>

void test00(const char* a, volatile char* b)
{
  printf("`test00' called\n");
  printf("a > b = %d\n", a > b);
}

void test01(void)
{
  printf("test01' called\n");
  int a[10];
  printf("&a[1] > &a[0] = %d\n", &a[1] > &a[0]);
  printf("&a[1] > &a[1] = %d\n", &a[1] > &a[1]);
  printf("&a[1] > &a[2] = %d\n", &a[1] > &a[2]);
}

int array[10];

void test02(void)
{
  printf("test02' called\n");
  printf("&array[1] > &array[0] = %d\n", &array[1] > &array[0]);
  printf("&array[1] > &array[1] = %d\n", &array[1] > &array[1]);
  printf("&array[1] > &array[2] = %d\n", &array[1] > &array[2]);
}

struct S* ps;
struct S {
  int a;
};
struct S s;

void test03(void)
{
  printf("`test03' called\n");
  printf("ps > &s = %d\n", ps > &s);
}

int main(void)
{
  {
    char x[10];
    test00(&x[1],&x[0]);
    test00(&x[1],&x[1]);
    test00(&x[1],&x[2]);
  }
  test01();
  test02();
  {
    ps = &s;
    --ps;
    test03();
    ++ps;
    test03();
    ++ps;
    test03();
  }
  return 0;
}
