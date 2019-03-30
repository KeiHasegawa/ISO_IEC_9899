/*
 * Check error if undeclared variable is used in conditional operator.
 */
void test000(void)
{
  a ? 1 : 2;
  3 ? b : 4;
  5 ? 6 : c;
  d ? e : f;
}

void h(int);

void g(void)
{
  h(a ? 1 : 2);
  h(3 ? b : 4);
  h(5 ? 6 : c);
  h(d ? e : f);
}
