/*
 * A return statement with an expression shall not appear in a function whose
 * return type is void. A return statement without an expression shall only
 * appear in a function whose return type is void.
 */
void f(int a)
{
  return a;
  if ( a )
    return a;
}

int g(void)
{
  extern volatile int flag;
  for ( ; ; ){
    if ( flag )
      return;
  }
}
