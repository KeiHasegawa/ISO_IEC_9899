/*
 * Check error if undeclared operand is used in equality operators.
 */
void f(void)
{
  a == 1;
  0 == b;
  c == d;
}

void h(int);

void g(void)
{
  h(a == b);

  h(c != d);
}
