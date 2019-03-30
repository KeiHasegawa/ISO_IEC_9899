/*
 * Check function call works well, where argument is the result of
 * function call.
 */
#include <stdio.h>

int main(void)
{
  printf("%d\n", printf("hello world\n"));
  return 0;
}
