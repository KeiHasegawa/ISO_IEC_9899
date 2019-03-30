/*
 * Each of the operands shall have arithmetic type. The operands of the %
 * operator shall have integer type.
 */

/* void */
void test00(int a)
{
  (void)a * a;
  a / (void)a;
  a % (void)a;
}

/* int* */
void test01(int* a)
{
  a * *a;
  *a / a;
  *a % a;

  *a * (int*)1;
  (int*)2 / *a;
  (int*)3 % *a;
}

/* incomplete struct, union or enum */
void test02(void)
{
  struct S;
  extern struct S s;
  union U;
  extern union U u;
  enum E;
  extern enum E e;

  s * 3;
  4 / s;
  s % 5;

  u * 6;
  7 / u;
  u % 8;

  e * 9;
  10 / e;
  11 % e;
}

/* complete struct, union or enum.
   In this case, multiplicative operator for enum is not error */
void test03(void)
{
  struct S { int a; };
  extern struct S s;
  union U { int a; };
  extern union U u;
  enum E { a };
  extern enum E e;

  s * 3;
  4 / s;
  s % 5;

  u * 6;
  7 / u;
  u % 8;

  e * 9;  /* ok */
  10 / e; /* ok */
  11 % e; /* ok */
}

/* non-integer type for operator `%' */
void test04(double a, float b)
{
  a * b; /* ok */
  a / b; /* ok */
  a % b; /* error */
}
