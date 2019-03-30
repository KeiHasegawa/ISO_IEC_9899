/*
 * Check error if operand is not declared.
 */
void f(void)
{
  a++;
  b--;
}

void h(int);

void g(void)
{
  h(c++);
  h(d--);
}
