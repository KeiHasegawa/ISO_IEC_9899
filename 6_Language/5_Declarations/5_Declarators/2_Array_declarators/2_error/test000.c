/*
 * The [ and ] may delimit an expression or *. If [ and ] delimit an
 * expression (which specifies the size of an array), it shall have an
 * integer type. If the expression is a constant expression then it shall
 * have a value greater than zero. The element type shall not be an incomplete
 * or function type.
 */
void test000(double d)
{
  int a[5.0F];  /* error */
  int b[d]; /* error */
}

void test001(void)
{
  int a[0];  /* error */
  int b[-1];  /* error */
}

struct S;

void test002(void)
{
  struct S a[10];  /* error */
  void b[5]; /* error */
  int c[10](void); /* error */

  struct S (*d)[10];  /* As far as ISO, this is error. */
                      /* But we will allow this. */
  ++d;                /* But this must be error */
}

