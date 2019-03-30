/*
 * Check if function call is error, where function
 * returns incomplete type
 */
#include <stdio.h>

struct T f(void);

int main(void)
{
  f();
  return 0;
}
