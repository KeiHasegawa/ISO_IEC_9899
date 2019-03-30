/*
 * If the function declarator is not part of a function definition, the
 * parameters may have incomplete type.
 */
#include <stdio.h>

struct S;
union U;
enum E;

void test000(struct S);
void test001(union U);
void test002(enum E);

void test010(struct SS);
void test011(union UU);
void test012(enum EE);

struct S {
  int a;
};

union U {
  int a;
};

enum E { a };

void f(void)
{
  struct S s = { 1 };
  test000(s);
  union U u = { 2 };
  test001(u);
  enum E e = a;
  test002(e);
}

int main(void)
{
  f();
  return 0;
}

void test000(struct S s)
{
  printf("`test000' called\n");
  printf("%d\n", s.a);
}

void test001(union U u)
{
  printf("`test001' called\n");
  printf("%d\n", u.a);
}

void test002(enum E e)
{
  printf("`test002' called\n");
  printf("%d\n", e);
}
