/*
 * A goto statement shall not cause a block to be entered by a jump from
 * outside the block to a labeled statement in the block (or an enclosed block)
 * if that block contains the declaration of a variably modified object or
 * variably modified typedef name.
 */
void test000(int n)
{
  goto label;
  {
    int A[n];
  label:
    ;
  }
}

void test001(int n)
{
  goto label;
  {
    typedef int A[n];
  label:
    ;
  }
}
