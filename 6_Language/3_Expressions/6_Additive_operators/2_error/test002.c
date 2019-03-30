/*
 * For addition, either both operands shall have arithmetic type, or one
 * operand shall be a pointer to an object type and the other shall have
 * integer type.
 */

/* incomplete struct union or enum */
void test00(void)
{
  struct S;
  extern struct S s;
  union U;
  extern union U u;
  enum E;
  extern enum E;

  s + 1;
  2 + u;
  e + 3;

  struct S* ps; ps + 1;
  union U* pu;  2 + pu;
  enum E* pe;   pe + 3;
}

/* complete struct or union */
void test01(void)
{
  struct S { int a; };
  struct S s;
  union U { int a; };
  union U u;
  enum E { a };
  enum E e;

  1 + s;  /* error */
  u + 2;  /* error */
  3 + e;  /* ok */

  struct S* ps; 1 + ps;  /* ok */
  union U* pu;  pu + 2;  /* ok */
  enum E* pe;   3 + pe;  /* ok */
}

/* void */
void test02(void)
{
  test02() + 1;
  (void*)0 + 2;
}
