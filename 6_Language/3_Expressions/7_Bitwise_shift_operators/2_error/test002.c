/*
 * Check the result of shift operators is not lvalue.
 */
void f(int a, int b)
{
  (a << 1) = 1;
  (b >> 1) = 2;

  &(a << 1);
  &(b >> 1);
}
