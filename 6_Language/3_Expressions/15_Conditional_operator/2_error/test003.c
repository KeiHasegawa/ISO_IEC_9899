/*
 * Check the result of conditional operator is not lvalue.
 */
void f(int a, int b, int c)
{
  (a ? b : c) = 1;
  &(a ? b : c);
}
