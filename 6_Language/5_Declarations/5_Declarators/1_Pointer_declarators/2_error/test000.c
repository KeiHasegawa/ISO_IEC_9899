/*
 * Check if ISO sample works well.
 */
extern const int a;
extern int b;

void test000(void)
{
  const int *ptr_to_constant = &a;
  int *const constant_ptr = &b;
  *ptr_to_constant = 1;  /* error */
  constant_ptr = &a;  /* error */
  ++(*constant_ptr);  /* ok */
}

void test001(void)
{
  typedef int *int_ptr;
  const int_ptr constant_ptr = &b;
  ++(*constant_ptr);  /* ok */
  constant_ptr = &a;  /* error */
}
