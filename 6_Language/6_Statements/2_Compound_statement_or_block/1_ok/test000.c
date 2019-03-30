/*
 * Check if compound statement works well.
 */
#include <stdio.h>

void test000(int n)
{
  printf("`test000' called with %d\n", n);
  int a = 1;
  int b = 2;
  int c[] = { 3, 4, 5, 6 };
  for ( int i = 0 ; i < sizeof c/sizeof *c ; ++i )
    printf(" %d", c[i]);
  printf("\n");
 label:
  {}  /* empty compound statement */
  {
    if ( n ){
      printf("a = %d\n", a);
    }
    else {
      ++n;
      printf("b = %d\n", b);
      goto label;
    }
  }
  {}  /* empty compound statement */
}

int main(void)
{
  test000(0);
  return 0;
}
