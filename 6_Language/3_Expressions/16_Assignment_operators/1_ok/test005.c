/*
 * Check left operand is evaluated once in compound assignment operator.
 */
#include <stdio.h>

int x;

int* f(void)
{
  printf("`f' called\n");
  return &x;
}

void test000(void)
{
  printf("`test000' called\n");
  *f()  = 1;    printf("x = %d\n", x);
  *f() *= 2;    printf("x = %d\n", x);
  *f() /= 3;    printf("x = %d\n", x);
  *f() %= 4;    printf("x = %d\n", x);
  *f() += 5;    printf("x = %d\n", x);
  *f() -= 6;    printf("x = %d\n", x);
  *f() <<= 7;   printf("x = %d\n", x);
  *f() >>= 8;   printf("x = %d\n", x);
  *f() &= 9;    printf("x = %d\n", x);
  *f() ^= 10;   printf("x = %d\n", x);
  *f() |= 11;   printf("x = %d\n", x);
}

int main(void)
{
  test000();
  return 0;
}
