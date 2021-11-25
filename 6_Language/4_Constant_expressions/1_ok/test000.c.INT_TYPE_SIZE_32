/*
 * 6.4 of ISO/IEC 9899 says
 *
 * Constant expressions shall not contain assignment, increment, decrement,
 * function-call, or comma operators, except when they are contained within
 * the operand of a sizeof operator.
 *
 * But we allow comma operators in constant-expression if 2nd operand of
 * comma operator is constant.
 */
#include <stdio.h>

int test000(int n)
{
  printf("`test000' called\n");
  struct S {
    unsigned int a : sizeof(n = 1);
    unsigned int b : sizeof n++;
    unsigned int c : sizeof n--;
    unsigned int d : sizeof ++n;
    unsigned int e : sizeof --n;
    unsigned int f : sizeof test000(n);
    unsigned int g : sizeof(n,n+1);
  };
  struct S s = { 15, 15, 15, 15, 15, 15, 15 };
  printf("%d, %d, %d, %d, %d, %d, %d\n",
	 s.a, s.b, s.c, s.d, s.e, s.f, s.g);
  s.a++;
  s.b++;
  s.c++;
  s.d++;
  s.e++;
  s.f++;
  s.g++;
  printf("%d, %d, %d, %d, %d, %d, %d\n",
	 s.a, s.b, s.c, s.d, s.e, s.f, s.g);
  return 0;
}

int main(void)
{
  test000(3);
  return 0;
}
