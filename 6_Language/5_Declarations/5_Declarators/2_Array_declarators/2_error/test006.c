/*
 * Check if undeclared variables at array dimension are error handled.
 */
void f(int n)
{
  int a[N];  // undeclared `N'
  int b[M + n];  // undeclared 'M'
  double c[g()];  // ok. function call.
}
