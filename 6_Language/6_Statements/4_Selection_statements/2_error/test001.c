/*
 * The controlling expression of a switch statement shall have integer type,
 * ...
 */
void test000(int* a, double b)
{
  switch ( a )
    ;
  switch ( b )
    ;
}

struct S;
union U;

void test001(void)
{
  extern struct S s;
  extern union U u;
  switch ( s )
    ;
  switch ( u )
    ;
}

struct S { int a; };
union U { int a; };

void test002(struct S s, union U u)
{
  switch ( s )
    ;
  switch ( u )
    ;
}
