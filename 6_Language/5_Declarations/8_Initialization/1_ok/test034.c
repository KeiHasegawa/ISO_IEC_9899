/*
 * Check if constant pointer works well.
 */
#include <stdio.h>

int* p000 = (int*)0x1234;

void test000(void)
{
  printf("`test000' called\n");
  printf("p000 = 0x%08x\n", (int)p000);
}

int* p001 = &((int*)0x5678)[3];

void test001(void)
{
  printf("`test001' called\n");
  printf("p001 = 0x%08x\n", (int)p001);
}

int* p002 = (int*)(char*)0x9abc;

void test002(void)
{
  printf("`test002' called\n");
  printf("p002 = 0x%08x\n", (int)p002);
}

int* p003 = (int*)0xdef0 + 3;

void test003(void)
{
  printf("`test003' called\n");
  printf("p003 = 0x%08x\n", (int)p003);
}

int* p004 = 4 + (int*)0x1234;

void test004(void)
{
  printf("`test004' called\n");
  printf("p004 = 0x%08x\n", (int)p004);
}

int* p005 = (int*)0x5678 - 2;

void test005(void)
{
  printf("`test005' called\n");
  printf("p005 = 0x%08x\n", (int)p005);
}

long int n006 = (int*)0x20 - (int*)0x10;

void test006(void)
{
  printf("`test006' called\n");
  printf("n006 = %ld\n", n006);
}

int n007_0 = (int*)0x10 < (int*)0x20;
int n007_1 = (int*)0x10 > (int*)0x20;
int n007_2 = (int*)0x10 <= (int*)0x20;
int n007_3 = (int*)0x10 >= (int*)0x20;
int n007_4 = (int*)0x10 == (int*)0x20;
int n007_5 = (int*)0x10 != (int*)0x20;

void test007(void)
{
  printf("`test007' called\n");
  printf("n007_0 = %d\n", n007_0);
  printf("n007_1 = %d\n", n007_1);
  printf("n007_2 = %d\n", n007_2);
  printf("n007_3 = %d\n", n007_3);
  printf("n007_4 = %d\n", n007_4);
  printf("n007_5 = %d\n", n007_5);
}

int n008_0 = (int*)0x20 < (int*)0x20;
int n008_1 = (int*)0x20 > (int*)0x20;
int n008_2 = (int*)0x20 <= (int*)0x20;
int n008_3 = (int*)0x20 >= (int*)0x20;
int n008_4 = (int*)0x20 == (int*)0x20;
int n008_5 = (int*)0x20 != (int*)0x20;

void test008(void)
{
  printf("`test008' called\n");
  printf("n008_0 = %d\n", n008_0);
  printf("n008_1 = %d\n", n008_1);
  printf("n008_2 = %d\n", n008_2);
  printf("n008_3 = %d\n", n008_3);
  printf("n008_4 = %d\n", n008_4);
  printf("n008_5 = %d\n", n008_5);
}

int n009_0 = (int*)0x30 < (int*)0x20;
int n009_1 = (int*)0x30 > (int*)0x20;
int n009_2 = (int*)0x30 <= (int*)0x20;
int n009_3 = (int*)0x30 >= (int*)0x20;
int n009_4 = (int*)0x30 == (int*)0x20;
int n009_5 = (int*)0x30 != (int*)0x20;

void test009(void)
{
  printf("`test009' called\n");
  printf("n009_0 = %d\n", n009_0);
  printf("n009_1 = %d\n", n009_1);
  printf("n009_2 = %d\n", n009_2);
  printf("n009_3 = %d\n", n009_3);
  printf("n009_4 = %d\n", n009_4);
  printf("n009_5 = %d\n", n009_5);
}

int n010_0 = (int*)0x30 == 0;
int n010_1 = (int*)0x30 != 0;
int n010_2 = (int*)0 == 0;
int n010_3 = (int*)0 != 0;

void test010(void)
{
  printf("`test010' called\n");
  printf("n010_0 = %d\n", n010_0);
  printf("n010_1 = %d\n", n010_1);
  printf("n010_2 = %d\n", n010_2);
  printf("n010_3 = %d\n", n010_3);
}

int* p011 = &*(int*)0x1000;

void test011(void)
{
  printf("`test011' called\n");
  printf("p011 = 0x%08x\n", (int)p011);
}

struct S { int a; };

struct S* p012 = (struct S*)0x10 + 50;

void test012(void)
{
  printf("`test012' called\n");
  printf("p012 = 0x%08x\n", (int)p012);
}

int main(void)
{
  test000();
  test001();
  test002();
  test003();
  test004();
  test005();
  test006();
  test007();
  test008();
  test009();
  test010();
  test011();
  test012();
  return 0;
}
