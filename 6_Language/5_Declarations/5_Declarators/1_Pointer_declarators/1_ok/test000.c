/*
 * Check if declaration is recognized, whose type is
 * pointer.
 */
#include <stdio.h>

void test00(int* p) /* pointer to int */
{
  printf("`test00' called\n");
  printf("*p = %d\n", *p);
}

void test01(int (*p)[3]) /* pointer to array of int */
{
  printf("`test01' called\n");
  for ( int i = 0 ; i < 3 ; ++i )
    printf("(*p)[i] = %d\n", (*p)[i]);
}

void test02(int (*p)(void)) /* pointer to function returning int */
{
  printf("`test02' called\n");
  printf("(*p)() = %d\n", (*p)());
}

void test03(int n, int (*p)[n]) /* pointer to varray */
{
  printf("`test03' called\n");
  for ( int i = 0 ; i < n ; ++i )
    (*p)[i] = i;
}

int main(void)
{
  int n = 1;
  test00(&n);
  int a[3] = { 0, 1, 2 };
  test01(&a);
  int f(void);
  test02(&f);
  int v[n+5];
  test03(n+5,&v);
  for ( int i = 0 ; i < sizeof v/sizeof v[0] ; ++i )
    printf("v[%d] = %d\n", i, v[i]);
  return 0;
}

int f(void)
{
  return 'a';
}
