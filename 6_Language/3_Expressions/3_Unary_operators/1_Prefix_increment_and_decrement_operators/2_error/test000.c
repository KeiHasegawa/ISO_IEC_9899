/*
 * Check if prefix increment or decrement operand shall be
 *
 * o real or pointer type
 * o modifiable lvalue
 */

/* structure or union */
void test00(void)
{
  struct S { int a; } s;
  ++s;
  union U { int a; } u;
  --u;
}

/* incomplete structure or union */
void test01(void)
{
  extern struct S s;
  ++s;
  extern union U u;
  --u;
}

/* incomplete enumeration */
void test02(void)
{
  extern enum E e;
  ++e;
  --e;
}

/* function */
void test03(void)
{
  ++test03;
  --test03;
}

/* array */
void test04(void)
{
  int a[10];
  ++a;
  --a;
}
