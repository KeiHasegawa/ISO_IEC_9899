/*
 * Check the resutl of multiplicative operator is not lvalue.
 */
void test00(int a, int b, int c)
{
  (a * b) = c;
  (a / b) = c;
  (a % b) = c;
}

void test01(int a, int b)
{
  &(a * b);
  &(a / b);
  &(a % b);
}
