double f(void)
{
  return a + 1.0;  /* error `a' undeclared */
}

int g(void)
{
  return 3 - b;  /* error `b' undeclared */
}

void hh(int);

void h(void)
{
  hh(a + b);

  hh(c - d);
}
