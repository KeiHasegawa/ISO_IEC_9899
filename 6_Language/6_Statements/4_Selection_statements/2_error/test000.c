/*
 * The controlling expression of an if statement shall have scalar type.
 */
void test000(void)
{
  struct S;
  extern struct S s;
  if ( s )
    test000();

  union U;
  extern union U u;
  if ( u )
    test000();

  if ( test000() )
    test000();
}

void test001(void)
{
  struct S { int a; };
  struct S s;
  if ( s )
    test001();
  union U { int a; };
  union U u;
  if ( u )
    test001();
}

