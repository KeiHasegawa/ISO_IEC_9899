/*
 * The declaration of an identifier for a function that has block scope 
 * shall have no explicit storage-class specifier other than extern.
 */
void f(void)
{
  typedef int test_000(void);  /* I think this is ok */
  extern int test_001(void);  /* ok */
  static int test_002(void);  /* error */
  auto int test_003(void);  /* error */
  register int test_004(void);  /* error */
}
