struct S;
extern struct S s;

void test000(void)
{
  if ( 0 ) {
    s;  // Error. The result type of this expression is incomplete type.
  }
}

void test001(void)
{
  if ( 1 ) {
  }
  else {
    s;  // Error. The result type of this expression is incomplete type.
  }
}
