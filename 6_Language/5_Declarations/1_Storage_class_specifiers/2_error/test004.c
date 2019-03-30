/*
 * Check if multiple storage-class-specifier is error.
 */
void f(void)
{
  typedef typedef int test_00;
  typedef extern int test_01;
  typedef static int test_02;
  typedef auto int test_03;
  typedef register int test_04;
}
