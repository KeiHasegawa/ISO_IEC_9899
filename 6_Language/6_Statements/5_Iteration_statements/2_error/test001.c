/*
 * The declaration part of a for statement shall only declare identifiers
 * for objects having storage class auto or register.
 */
void test000(void)
{
  for ( typedef int i ; ; )
    ;
}

void test001(void)
{
  for ( extern int i ; ; )
    ;
}

void test002(void)
{
  for ( static int i ; ; )
    ;
}
