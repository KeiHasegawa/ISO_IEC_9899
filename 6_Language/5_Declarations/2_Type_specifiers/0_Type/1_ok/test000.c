/*
 * Check if type in type-specifier is void
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  const void* a[10] = { 0 };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    printf(" %d", (int)a[i]);
  printf("\n");
}

int main(void)
{
  test000();
  return 0;
}
