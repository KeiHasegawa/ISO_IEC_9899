/*
 * After all rewrites, the parameters in a parameter-type-list that is part of
 * a function definition shall not have incomplete type.
 * Arrays and functions are rewritten as pointers.
 */
#include <stdio.h>

void test000(void (int));
void test001(void f(int));
void test002(int []);
void test003(int a[]);
void test004(int [4]);
void test005(int a[4]);

void f(int a)
{
  printf("`f' called with %d\n", a);
}

int b[] = { 0, 1, 2, 3 };

int main(void)
{
  test000(f);
  test001(&f);
  test002(&b[0]);
  test003(b);
  test004(&b[0]);
  test005(b);
  return 0;
}

void test000(void (*pf)(int))
{
  printf("`test000' called\n");
  pf(5);
}

void test001(void f(int))
{
  printf("`test001' called\n");
  f(6);
}

void test002(int *p)
{
  printf("`test002' called\n");
  for ( int i = 0 ; i < 4 ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}

void test003(int a[])
{
  printf("`test003' called\n");
  for ( int i = 0 ; i < 4 ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}

void test004(int* a)
{
  printf("`test004' called\n");
  for ( int i = 0 ; i < 4 ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}

void test005(int a[])
{
  printf("`test005' called\n");
  for ( int i = 0 ; i < 4 ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}
