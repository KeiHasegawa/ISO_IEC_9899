/*
 * Check if struct or union works well, which declared in
 * function parameter scope or function returning type.
 */
#include <stdio.h>

void test00(struct S { int a; float b; } s)
{
  printf("`test00' called\n");
  printf("%d %f\n", s.a, s.b);
}

void test01(struct S { int a; float b; }* ps)
{
  printf("`test00' called\n");
  printf("%d %f\n", ps->a, ps->b);
}

void test02(struct { int a; float b; } s)
{
  printf("`test01' called\n");
  printf("%d %f\n", s.a, s.b);
}

void test03(struct { int a; float b; }* ps)
{
  printf("`test01' called\n");
  printf("%d %f\n", ps->a, ps->b);
}

struct S1 { int a; } test10(void)
{
  printf("`test10' called\n");
  return (struct S1){ 1 };
}

struct S2 { float a; }* test11(void)
{
  printf("`test11' called\n");
  static struct S2 s = { 2 };
  return &s;
}

struct { int a; } test12(void);

struct { int a; }* test13(void)
{
  printf("`test13' called\n");
  return 0;
}

int main(void)
{
  {
    struct T { int a; float b; };
    struct T t = { 1, 2 };
    test01((void*)&t);
  }

  {
    struct T { int a; float b; };
    struct T t = { 1, 2 };
    test03((void*)&t);
  }

  {
    struct S1 s1 = test10();
    printf("s1.a = %d\n", s1.a);
  }

  {
    struct S2* s2 = test11();
    printf("s2->a = %f\n", s2->a);
  }

  {
    test13();
  }
  return 0;
}
