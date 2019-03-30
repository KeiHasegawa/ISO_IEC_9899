/*
 * Check the result of sizeof operator is not lvalue.
 */
void test00(void)
{
  int a;
  sizeof a = 1;
  &sizeof a;
}
