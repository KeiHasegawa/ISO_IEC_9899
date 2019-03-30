/*
 * Check static storage duration in block scope can be initialized.
 */
#include <stdio.h>

int a[] = { 0, 1, 2, 3 };

void test000(void)
{
  printf("`test000' called\n");
  static int (*pa)[sizeof a/sizeof *a] = &a;
  for ( int i = 0 ;i  < sizeof a/sizeof *a ; ++i )
    printf(" %d", (*pa)[i]);
  printf("\n");
}

void test001(void)
{
  printf("`test001' called\n");
  static int n = -5;
  printf("n = %d\n", n++);
}

int main(void)
{
  test000();
  test001(); test001(); test001();
  return 0;
}
