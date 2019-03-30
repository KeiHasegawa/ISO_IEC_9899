/*
 * For subtraction, one of the following shall hold:
 * - both operands have arithmetic type;
 * - both operands are pointers to qualified or unqualified versions of
 *   compatible object types; or
 * - the left operand is a pointer to an object type and the right operand
 *   has integertype.
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

  s - 1;
  u - 2;
  e - 3;

  struct S* ps; ps - 1;
  union U* pu;  pu - 2;
  enum E* pe;   pe - 3;
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

  s - 1;  /* error */
  u - 2;  /* error */
  e - 3;  /* ok */

  struct S* ps; ps - 1;  /* ok */
  union U* pu;  pu - 2;  /* ok */
  enum E* pe;   pe - 3;  /* ok */
}

/* void */
void test02(void)
{
  test02() - 1;
  (void*)0 - 2;
}

void test03(void)
{
  int* p;
  double* q;
  p - q;
  (int*)0 - (double*)1;
}

