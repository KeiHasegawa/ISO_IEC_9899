/*
 * Check if do while statement works well.
 */
#include <stdio.h>

void test000(int* p)
{
  printf("`test000' called\n");
  do
    printf(" %d", *p);
  while ( --*p );
  printf("\n");
}

int main(void)
{
  int n = 3;
  test000(&n);
  return 0;
}
