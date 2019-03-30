/*
 * Check if sizeof character constant is sizeof(int)
 */
#include <stdio.h>

void f(void)
{
  printf("sizeof 'a' = %d\n", (int)(sizeof 'a'));
  printf("sizeof L'ab' = %d\n", (int)(sizeof L'ab'));
}

int main(void)
{
  f();
  return 0;
}
