/*
 * The controlling expression of an iteration statement shall have scalar type.
 */
struct S;

void test000(void)
{
  extern struct S s;
  while ( s )
    ;
}

struct S {
  int a;
};

void test001(struct S s)
{
  for ( ; s ; )
    ;
}

union U;

void test002(void)
{
  extern union U u;
  do
    ;
  while ( u );
}
