/*
 * Check the result of bitwise inclusive or operator is not lvalue.
 */
void f(int a, int b)
{
  (a | b) = 1;
  &(a | b);
}
