void f(int a, int b, int c)
{
  (a + b) = c;  /* error. not lvalue */
  (a - b) = c;  /* error. not lvalue */
}

void g(int a, int b)
{
  &(a + b);  /* error. not lvalue */
  &(a - b);  /* error. not lvalue */
}
