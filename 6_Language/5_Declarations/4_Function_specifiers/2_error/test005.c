/*
 * Check error if arguments don't match to parameter of inline funciton.
 */

inline int f(int, int);

void g(void)
{
  f();
}

inline int f(int a, int b)
{
  return a + b;
}
