/*
 * Check if qualified pointer is recognized.
 */
void f(void)
{
  typedef int *int_ptr;
  const int_ptr constant_ptr = 0;
  int a;
  constant_ptr = &a;  /* error */
}
