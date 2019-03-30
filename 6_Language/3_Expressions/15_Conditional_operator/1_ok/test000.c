/*
 * The first operand shall have scalar type.
 */
#include <stdio.h>

void test000(char x)
{
  printf("`test000' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test001(signed char x)
{
  printf("`test001' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test002(unsigned char x)
{
  printf("`test002' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test003(short int x)
{
  printf("`test003' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test004(unsigned short int x)
{
  printf("`test004' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test005(int x)
{
  printf("`test005' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test006(unsigned int x)
{
  printf("`test006' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test007(long int x)
{
  printf("`test007' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test008(unsigned long int x)
{
  printf("`test008' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test009(long long int x)
{
  printf("`test009' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test010(unsigned long long int x)
{
  printf("`test010' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test011(float x)
{
  printf("`test011' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test012(double x)
{
  printf("`test012' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test013(long double x)
{
  printf("`test013' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

enum E { a, b, c };

void test014(enum E x)
{
  printf("`test014' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

void test015(void* x)
{
  printf("`test015' called\n");
  printf("%s\n", x ? "hello" : "goodbye");
}

struct S {
  int a;
};

void test016(struct S* x)
{
  printf("`test016' called\n");
  printf("%s\n", x->a ? "hello" : "goodbye");
}

int main(void)
{
  test000(0); test000(1);
  test001(0); test001(1);
  test002(0); test002(1);
  test003(0); test003(1);
  test004(0); test004(1);
  test005(0); test005(1);
  test006(0); test006(1);
  test007(0); test007(1);
  test008(0); test008(1);
  test009(0); test009(1);
  test010(0); test010(1);
  test011(0); test011(1);
  test012(0); test012(1);
  test013(0); test013(1);
  test014(0); test014(1);
  test015(0); test015((void*)1);
  test016(&(struct S){0}); test016(&(struct S){1});
  return 0;
}
