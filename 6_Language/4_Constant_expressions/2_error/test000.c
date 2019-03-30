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
int test000(int n)
{
  struct S {
    unsigned int a : (n = 1);
    unsigned int b : n++;
    unsigned int c : n--;
    unsigned int d : ++n;
    unsigned int e : --n;
    unsigned int f : test000(n);
    unsigned int g : (n,n+1);
  };
  return 0;
}

