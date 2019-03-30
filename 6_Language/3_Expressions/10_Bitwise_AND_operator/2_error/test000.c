/*
 * Each of the operands shall have integer type.
 */
void test000(float a, double b, long double c, int* d)
{
  1 & a;
  b & 2;
  3 & c;
  d & 4;
  1.0F & 2;
  3 & 4.0;
  5.0L & 6;
  1 & (float)2;
  (double)3 & 4;
  5 & (long double)6;
  7 & (int*)8;
}

void test001(void)
{
  struct S { int a; } s;
  struct SS;
  extern struct SS ss;
  union U { int a; } u;
  union UU;
  extern union UU uu;
  enum E { a } e;
  enum EE;
  extern enum EE ee;

  s & 1;  /* error */
  2 & ss; /* error */
  u & 3;  /* error */
  4 & uu; /* error */
  e & 5;  /* ok */
  6 & ee; /* error */
}

