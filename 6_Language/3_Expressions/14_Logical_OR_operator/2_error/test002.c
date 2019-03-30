/*
 * Check the result of logical AND operator is not lvalue.
 */
void f(int a, int b)
{
  (a || b) = 1;
  &(a || b);
}
