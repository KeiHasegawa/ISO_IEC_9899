/*
 * Check if array designator must be constant.
 */
void f(int a)
{
  int b[] = { [a] = 3 };
}
