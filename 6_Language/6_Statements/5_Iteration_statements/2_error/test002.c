struct S;
extern struct S s;

void test000(void)
{
  while ( 0 ) {
    s;  // Error. The result type of this expression is incomplete type.
  }
}

void test001(void)
{
  do {
    s;  // Error. The result type of this expression is incomplete type.
  } while ( 0 );
}

void test002(void)
{
  for ( ; 0 ; ) {
    s;  // Error. The result type of this expression is incomplete type.
  }
}
