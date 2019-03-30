/*
 * Check the result of relational operators is not lvalue.
 */
void test00(int a, int b)
{
  (a < b) = 1;
  (a > b) = 2;
  (a <= b) = 3;
  (a >= b) = 4;
}

void test01(int a, int b)
{
  &(a < b);
  &(a > b);
  &(a <= b);
  &(a >= b);
}
