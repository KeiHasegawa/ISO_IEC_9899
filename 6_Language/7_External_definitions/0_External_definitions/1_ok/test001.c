/*
 * Thus, if an identifier declared with external linkage is not used in an
 * expression, there need be no external definition for it.
 */
#include <stdio.h>

extern int a;

void test000(void)
{
  printf("`test000' called\n");
  printf("sizeof a = %d\n", (int)(sizeof a));
}

int main(void)
{
  test000();
  return 0;
}
