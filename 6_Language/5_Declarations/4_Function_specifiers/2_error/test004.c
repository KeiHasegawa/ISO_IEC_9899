/*
 * Inline function call mismatching argument is error.
 */
inline int f(int n)
{
  if ( n )
    return n - 1;
  else
    return 5;
}

void g(void)
{
  f();
}
