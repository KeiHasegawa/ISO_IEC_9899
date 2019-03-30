/*
 * The first operand is evaluated; there is a sequence point after its
 * evaluation. The second operand is evaluated only if the first compares
 * unequal to 0; the third operand is evaluated only if the first compares
 * equal to 0; the value of the second or third operand (whichever is
 * evaluated) is the result.
 */
#include <stdio.h>

void f(int a)
{
  printf("`f' called with %d\n", a);
}

void g(int a)
{
  printf("`g' called with %d\n", a);
}

void test000(int x, int* p)
{
  printf("`test000' called\n");
  x ? f(x) : g(x);
  *p ? f(*p) : g(*p);
}

int main(void)
{
  test000(0,&(int){0});
  test000(3,&(int){1});
  return 0;
}
