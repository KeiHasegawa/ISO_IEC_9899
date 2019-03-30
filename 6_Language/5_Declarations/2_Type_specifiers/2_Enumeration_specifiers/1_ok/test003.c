/*
 * Check if enum works well, which declared in
 * function parameter scope or function returning type.
 */
#include <stdio.h>

void test00(enum E { a, b } e)
{
  printf("`test00' called\n");
  printf("a = %d, b = %d, e = %d\n", a, b, e);
}

void test01(enum E { a, b }* pe)
{
  printf("`test01' called\n");
  printf("a = %d, b = %d, *pe = %d\n", a, b, *pe);
}

void test02(enum { a, b } e)
{
  printf("`test02' called\n");
  printf("a = %d, b = %d, e = %d\n", a, b, e);
}

void test03(enum { a, b }* pe)
{
  printf("`test03' called\n");
  printf("a = %d, b = %d, *pe = %d\n", a, b, *pe);
}

enum E1 { a, b, c } test10(void)
{
  printf("`test10' called\n");
  return b;
}

enum E2 { d, e, f }* test11(void)
{
  printf("`test11' called\n");
  static enum E2 e = f;
  return &e;
}

enum { h, i, j } test12(void)
{
  return i;
}

enum { k, l, m }* test13(void)
{
  printf("`test13' called\n");
  return 0;
}

int main(void)
{
  {
    test00(3);
  }
  {
    int n = -3;
    test01((void*)&n);
  }
  {
    test02(4);
  }
  {
    int n = -4;
    test03((void*)&n);
  }
  {
    enum E1 x = test10();
    printf("x = %d\n", x);
  }
  {
    enum E2* x = test11();
    printf("*x = %d\n", *x);
  }
  {
    int n = test12();
    printf("n = %d\n", n);
  }
  {
    test13();
  }
  return 0;
}
