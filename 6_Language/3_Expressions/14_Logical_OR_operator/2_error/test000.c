/*
 * Each of the operands shall have scalar type.
 */
void test000(int a, int b)
{
  (void)a || b;
  a || (void)b;
}

void test001(void)
{
  struct S;
  extern struct S s;
  union U;
  extern union U u;
  enum E;
  extern enum E e;
  s || 1;
  2 || u;
  e || 3;
}

void test002(void)
{
  struct S { int a; };
  struct S s;
  union U { int a; };
  union U u;
  enum E { a };
  enum E e;
  1 || s;  /* error */
  u || 2;  /* error */
  3 || e;  /* ok */
}
