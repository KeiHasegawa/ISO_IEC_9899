/*
 * Check error if undeclared variable is used in logical AND operator.
 */
void f(void)
{
  a || 1;
  2 || b;
  c || d;
}

void g(void)
{
  a || 1,  2 || b, c || d;
}
