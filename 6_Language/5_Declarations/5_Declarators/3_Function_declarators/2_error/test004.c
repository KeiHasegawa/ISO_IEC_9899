/*
 * Check parameter type `void' works well.
 */

void test000(void);
void test001();

void f(void)
{
  test000();    /* ok */
  test000(1);   /* error */
  test000(1,2); /* error */

  test001();    /* ok */
  test001(1);   /* ok */
  test001(1,2); /* ok */
}

