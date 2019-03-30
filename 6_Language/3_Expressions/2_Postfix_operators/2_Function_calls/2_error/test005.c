/*
 * Check error if mismatch argument for inline function.
 */

inline int f(int a, int b)
{
  return a + b;
}

void g(void)
{
  f(1);
  f(2,3,4);
}
