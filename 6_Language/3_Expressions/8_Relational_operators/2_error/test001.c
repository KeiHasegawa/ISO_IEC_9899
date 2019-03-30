/*
 * Check error undeclared operand is used in relational operators.
 */
void f(void)
{
  a < 1;
  2 > b;
  c <= 3;
  4 >= d;
}

void h(int);

void g(void)
{
  h(a < b);

  h(c > d);

  h(u <= v);

  h(s >= t);
}
