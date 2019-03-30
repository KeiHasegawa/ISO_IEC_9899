/*
 * Check error if undeclared operand is used in bitwise exclusive or operator.
 */
void f(void)
{
  a ^ 1;
  2 ^ b;
  c ^ d;
}

void h(int);

void g(void)
{
  h(a ^ 1);
  h(2 ^ b);
  h(c ^ d);
}
