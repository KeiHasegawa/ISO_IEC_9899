/*
 * Check comma operator works well in sub expression.
 */
#include <stdio.h>

int array[] = { 0, 1, 2, 3, 4 };

void test000(void)
{
  printf("`test000' called\n");
  printf("%d\n", (array[3],array[4]));
}

struct S {
  char a[10];
};

void test001(struct S* ps, int i, int j)
{
  printf("`test001' called\n");
  printf("'%c'\n", (ps->a[i], ps->a[j]));
}

struct T;
extern struct T test_002;

struct T {
  int a;
};

void test002(void)
{
  printf("`test002' called\n");
  struct T r = (test002, test_002);
  printf("%d\n", r.a);
}

void f(void)
{
  printf("`f' called\n");
}

void g(void)
{
  printf("`g' called\n");
}

void test003(void)
{
  printf("`test003' called\n");
  (f(),g());
}

int main(void)
{
  test000();
  test001(&(struct S){"abcdefghi"}, 3, 4);
  test002();
  test003();
  return 0;
}

struct T test_002 = { 12 };
