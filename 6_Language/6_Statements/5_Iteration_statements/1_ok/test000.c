/*
 * Check if while statement works well.
 */
#include <stdio.h>

void test000(int n)
{
  printf("`test000' called\n");
  while ( n-- )
    printf("n = %d\n", n);
}

void test001(const char* p)
{
  printf("`test001' called\n");
  while ( *p )
    printf("%c", *p++);
  printf("\n");
}

int main(void)
{
  test000(3);
  test001("abcdefg");
  return 0;
}
