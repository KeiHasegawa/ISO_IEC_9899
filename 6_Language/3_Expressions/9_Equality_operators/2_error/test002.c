/*
 * Check the result of euqality operators is not lvalue.
 */
void test000(int a, int b)
{
  (a == b) = 1;
  (a != b) = 2;
}

void test001(int a, int b)
{
  &(a == b);
  &(a != b);
}
