/*
 * Check if operator "|" applied to undeclared identifier.
 */
void g(int);

void f(void)
{
  g(a | b);
}
