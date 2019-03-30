/*
 * The first operand shall have scalar type.
 */
void test00(int a, int b, int c)
{
  (void)a ? b : c;
}

struct S {
  int a;
};

void test01(struct S a, int b, int c)
{
  a ? b : c;
}

void test02(int b, int c)
{
  union U;
  extern union U a;
  a ? b : c;
}
