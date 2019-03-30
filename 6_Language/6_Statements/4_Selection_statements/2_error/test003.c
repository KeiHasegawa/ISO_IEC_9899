/*
 * The expression of each case label shall be an integer constant expression.
 */
void test000(int a)
{
  switch ( a ){
  case 1.0F:
    ;
  case 2.0:
    ;
  case 3.0L:
    ;
  case (void*)0:
    ;
  }
}

void test001(int a)
{
  int b;
  struct S;
  extern struct S s;
  union U;
  extern union U u;
  switch ( a ){
  case b:
    ;
  case s:
    ;
  case u:
    ;
  }
}
