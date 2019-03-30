/*
 * Check error if shift operator operand is not declared.
 */
void f(void)
{
  a >> 1;
  1 << b;
  c << d;
}

void h(int);

void g(void)
{
  h(a >> b);

  h(c << d);
}
