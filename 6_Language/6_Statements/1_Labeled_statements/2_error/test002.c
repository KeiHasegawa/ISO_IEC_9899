/*
 * Check error if case expression is not integer constant.
 */
extern int a[5];

void f(int n)
{
  switch ( n ) {
  case (&a)[n]:
    ;
  }
}
