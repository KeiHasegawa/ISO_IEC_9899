/*
 * Check the result of cast operator is not lvalue.
 */
void test00(void)
{
  int a;
  ((char)a) = 1;
  &(double)a;
}
