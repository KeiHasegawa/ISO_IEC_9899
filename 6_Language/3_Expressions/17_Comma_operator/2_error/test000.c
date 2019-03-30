/*
 * Check error if undeclared variable is used in comma operator.
 */
void test000(void)
{
  a, 1;
  2, b;
  c, d;
}

void test001_subr(int);

void test001(void)
{
  test001_subr((a, 1));
  test001_subr((2, b));
  test001_subr((c, d));
}
