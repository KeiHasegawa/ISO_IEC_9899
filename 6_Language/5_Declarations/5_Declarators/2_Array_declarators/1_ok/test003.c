/*
 * If * is used instead of a size expression, the array type is a variable
 * length array type of unspecified size, which can only be used in
 * declarations with function prototype scope.
 */
#include <stdio.h>

extern void f(int a[*]);

extern void g(int [*]);

int sz;

void test000(void)
{
  printf("`test000' called\n");
  int a[] = { 0, 1, 2, 3, 4 };
  sz = sizeof a/sizeof a[0];
  f(&a[0]);
  g(&a[0]);
}

void f(int* p)  /* ok */
{
  printf("`f' called\n");
  for ( int i = 0 ; i < sz ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}

void g(int a[])  /* ok */
{
  printf("`g' called\n");
  for ( int i = 0 ; i < sz ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}

int main(void)
{
  test000();
  return 0;
}
