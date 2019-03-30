/*
 * A member of a structure or union may have any object type other than a
 * variably modified type.
 */

void test000(int n)
{
  struct S {
    int a[n];
  };
}

void test001(int n)
{
  struct S {
    int b[3][n];
  };
}
