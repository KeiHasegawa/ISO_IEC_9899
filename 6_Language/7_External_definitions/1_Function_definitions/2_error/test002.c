/*
 * Check if wrong old-style function definition is error.
 */

void f(n)
  /* error. missing declaration of `n' */
{
}

void g(h, a, s, e)
  int a;
  int s;
  int e;
  /* error. missing declaration of `h'. */
{
}
