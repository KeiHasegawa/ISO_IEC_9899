/*
 * If the same qualifier appears more than once in the same
 * specifier-qualifier-list , either directly or via one or more typedefs,
 * the behavior is the same as if it appeared only once.
 */
#include <stdio.h>

void test000(const int* a)
{
  printf("`test000' called\n");
  const const int* b = a;
  printf("%d\n", *b);
}

int main(void)
{
  test000(&(int){3});
  return 0;
}

