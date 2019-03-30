/*
 * Reference 6.5.5.3 function declarator
 *
 * If, in a parameter declaration, an identifier can be treated as a typedef
 * name or as a parameter name, it shall be taken as a typedef name.
 */
#include <stdio.h>

typedef int T;

void f(T (a))  /* `a' is not typedef name, so `a' is an identifier. */
{
  printf("`f' called with %d\n", a);
}

int main(void)
{
  f(3);
  return 0;
}


