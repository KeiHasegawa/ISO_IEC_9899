/*
 * An assignment operator shall have a modifiable lvalue as its left operand.
 */
void test000(void)
{
  test000 = test000;
}

void test001(void)
{
  int x[10];
  int y[10];
  x = y;
}

void test002(int* const p, const int* q)
{
  *p = 1;  /* ok */
  *q = 2;  /* error */

  extern const int x;
  x = 1;  /* error */
}

struct S;
extern struct S x, y;

void test003(void)
{
  x = y;
}

void test004(void)
{
  1 = 2;
  3.0 = 4.0;
  'a' = 'b';
  "programming" = "languages";
}
