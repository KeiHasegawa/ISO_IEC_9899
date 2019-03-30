/*
 * Check error if undeclared variable is used.
 */
void f(int n)
{
  switch ( n ){
  case a:
    ;
  }
}
