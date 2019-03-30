/*
 * Check logical AND operator works well in sub expression.
 */
#include <stdio.h>

char array[2] = { 0, 1 };

void test000(void)
{
  printf("`test000' called\n");
  printf("%d\n", array[0] && array[0]);
  printf("%d\n", array[0] && array[1]);
  printf("%d\n", array[1] && array[0]);
  printf("%d\n", array[1] && array[1]);
}

void test001(int* x, double* y)
{
  printf("`test001' called\n");
  printf("%d\n", *x && *y);
}

int main(void)
{
  test000();
  test001(&(int){0},&(double){0});
  test001(&(int){0},&(double){1});
  test001(&(int){1},&(double){0});
  test001(&(int){1},&(double){1});
  return 0;
}
