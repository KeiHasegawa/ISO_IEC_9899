/*
 * A function declarator shall not specify a return type that is a function
 * type or an array type.
 * 
 * But, a function declarator can specify a return type that is a ponter to
 * function type or an pointer to array type.
 */
#include <stdio.h>

int (*test000(void))(int);  /* function returning pointer to function */

int (*test001(void))[3];  /* function returning pointer to array */

typedef int F(double);
typedef float A[5];

F* test002(void);  /* function returning pointer to function */
A* test003(void);  /* function returning pointer to array */

int main(void)
{
  int (*pf)(int) = test000();
  (*pf)(5);
  int (*pa)[3] = test001();
  for ( int i = 0 ; i < sizeof *pa/sizeof **pa ; ++i )
    printf(" %d", (*pa)[i]);
  printf("\n");
  F* pf2 = test002();
  (*pf2)(6.5);
  A* pa2 = test003();
  for ( int i = 0 ; i < sizeof *pa2/sizeof (*pa2)[0] ; ++i )
    printf(" %f", (*pa2)[i]);
  printf("\n");
  return 0;
}

int f(int a)
{
  printf("`f' called with %d\n", a);
  return a + 5;
}

int (*test000(void))(int)
{
  printf("`test000' called\n");
  return &f;
}

int (*test001(void))[3]
{
  printf("`test001' called\n");
  static int a[] = { 0, 1, 2 };
  return &a;
}

int g(double a)
{
  printf("`g' called with %f\n", a);
  return a + 9;
}

F* test002(void)
{
  printf("`test002' called\n");
  return &g;
}

A* test003(void)
{
  printf("`test003' called\n");
  static A a = { 0, 1, 2, 3, 4 };
  return &a;
}




