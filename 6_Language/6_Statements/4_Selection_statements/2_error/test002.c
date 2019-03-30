/*
 * ..., and shall not cause a block to be entered by a jump from outside the
 * block to a statement that follows a case or default label in the block (or
 * an enclosed block) if that block contains the declaration of a variably
 * modified object or variably modified typedef name.
 */
void f(int n)
{
  switch ( n ){
    {
      int A[n];
    case 0:
      break;
    }
    {
      typedef int B[n];
    default:
      break;
    }
  }
}
