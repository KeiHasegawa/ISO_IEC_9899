/*
 * Check if the sizeof operator shall not be applied to an expression that
 * has function type or an incomplete type, to the parenthesized name of 
 * such a type, or to an lvalue that designates a bit-field object.
 */
void test00(void)
{
  sizeof test00;
  int (*pf)(void);
  sizeof *pf;
  sizeof test00();
  extern struct S s;
  sizeof s;
  extern union U u;
  sizeof u;
  extern enum E e;
  sizeof e;
  extern int a[];
  sizeof a;
}

void test01(void)
{
  sizeof(int (int));
  sizeof(void);
  struct S;
  sizeof(struct S);
  union U;
  sizeof(union U);
  enum E;
  sizeof(enum E);
  sizeof(int []);
}

void test02(void)
{
  struct S {
    unsigned int a : 3;
  } s;
  sizeof s.a;
}
