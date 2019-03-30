/*
 * Check if label name has function scope.
 */
void test00(void)
{
  int n;
 Label:
  n = 1;
 Label:  /* error. multiple definition of `Label'. */
  n = 2;
  goto Label;
 Prev:
  return;
}

void test01(int n)
{
  if ( n )
    goto Prev; /* error. test00::Prev reference */
  else
    goto Post; /* error. main::Post reference */
}

int main(void)
{
 Post:
  return 0;
}
