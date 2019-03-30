/*
 * Check if type in type-specifier is signed char
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  signed char* p = 0;
  char signed* q = (signed char*)1;
  p = q;
  printf("%d %d\n", (int)p, (int)q);
}

int main(void)
{
  test000();
  return 0;
}
