/*
 * Check if labeled-statement works well.
 */
#include <stdio.h>

void test000(int n)
{
  printf("`test000' called\n");
  int a = 1;
  if ( n )
    goto label;
  ++a;
 label:
  printf("%d\n", a);
}

void test001(int n)
{
  printf("`test001' called\n");
 label:
  printf(" %d", n);
  if ( --n )
    goto label;
  printf("\n");
}

void test002(int n)
{
  printf("`test002' called\n");
  switch ( n ){
  case 0: printf("case 0:\n"); break;
  case 1: printf("case 1:\n"); break;
  default: printf("default:\n"); break;
  }
}

int main(void)
{
  test000(0);
  test000(1);
  test001(2);
  test002(0);
  test002(1);
  test002(2);
  return 0;
}
