/*
 * Check each of the operands shall have integer type in shift operators.
 */

/* floating type */
void test00(void)
{
  2.0F >> 1;
  2 << 1.0;
  2.0L >> 1;
}

/* pointer */
void test01(int* p, char* q)
{
  p >> 1;
  2 << q;
  (void*)2 >> 1;

  extern void f(void);
  f << 1;
  extern int a[];
  2 << a;
}

/* void */
void tset02(void)
{
  (void)2 << 1;
  2 >> (void)1;
}

/* incomplete struct, union or enum */
void test03(void)
{
  struct S;
  union U;
  enum E;
  extern struct S s;
  extern union U u;
  extern enum E e;
  s << 1;
  2 >> u;
  e << 1;
}

/* complete struct or union */
void test04(void)
{
  struct S { int a; } s;
  union U { int a; } u;
  enum E { a } e;
  2 >> s;  /* error */
  u << 1;  /* error */
  1 << e;  /* ok */ 
}
