/*
 * Check if type in type-specifier is char
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  char a[] = "hello world\n";
  for ( int i = 0 ; i < sizeof a - 1; ++i )
    printf("%c", a[i]);
}

int main(void)
{
  test000();
  return 0;
}
