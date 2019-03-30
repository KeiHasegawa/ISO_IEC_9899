/*
 * Check error if operand of multiplicative opeartor is not declared
 */

void f(void)
{
  extern long double d;
  a * d;
  d / b;
  (int)d % c;
}

void h(int);

void g(void)
{
  h(a * b);

  h(c / d);

  h(i % j);
}
