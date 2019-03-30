/*
 * If, in a parameter declaration, an identifier can be treated as a typedef
 * name or as a parameter name, it shall be taken as a typedef name.
 */
#include <stdio.h>

typedef int A;

void test000(A);  /* `A' is typedef name. */
void test001(A A); /* 1st `A' is typedef name, 2nd `A' is parameter name. */
void test002(const A); /* `A' is typedef name. */
void test003(const A A); /* 1st `A' is typedef name, 2nd `A' is parameter name. */
void test004(const A*); /* `A' is typedef name. */
void test005(const A* A); /* 1st `A' is typedef name, 2nd `A' is parameter name. */

int main(void)
{
  test000(0);
  test001(1);
  test002(2);
  test003(3);
  int a = 4;
  test004(&a);
  int b = 5;
  test005(&b);
  return 0;
}

void test000(A A)
{
  printf("`test000' called with %d\n", A);
}

void test001(int A)
{
  printf("`test001' called with %d\n", A);
}

void test002(const A A)
{
  printf("`test002' called with %d\n", A);
}

void test003(const int A)
{
  printf("`test003' called with %d\n", A);
}

void test004(const A* A)
{
  printf("`test004' called with %d\n", *A);
}

void test005(const int* A)
{
  printf("`test005' called with %d\n", *A);
}
