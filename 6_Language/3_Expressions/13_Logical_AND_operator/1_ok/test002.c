/*
 * Unlike the bitwise binary & operator, the && operator guarantees
 * left-to-right evaluation; there is a sequence point after the evaluation
 * of the first operand. If the first operand compares equal to 0, the second
 * operand is not evaluated.
 */
#include <stdio.h>

extern int f(void);

void test000(int a)
{
  printf("`test000' called\n");
  printf("%d\n", a && f());
}

void test001(int* a)
{
  printf("`test001' called\n");
  printf("%d\n", *a && f());
}

int main(void)
{
  test000(0);
  test000(1);
  test001(&(int){0});
  test001(&(int){1});
  return 0;
}

int f(void)
{
  printf("`f' called\n");
  return 1;
}
