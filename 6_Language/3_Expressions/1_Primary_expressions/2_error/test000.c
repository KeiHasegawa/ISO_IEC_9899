/*
 * Check if undeclared variables are error.
 */
int* p = &x;

void f(void)
{
  int a = b;
}

void g(void)
{
  (c);
}

void h(void)
{
  d;
}
