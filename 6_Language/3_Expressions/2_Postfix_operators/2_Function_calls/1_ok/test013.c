/*
 * Calling function after calling the same function.
 */
#include <stdio.h>

int g(void);

void f(int n)
{
  if ( n ){
    g();
    g();
  }
}

int main(void)
{
  f(0);
  f(1);
  return 0;
}

int g(void)
{
  static int n;
  if ( n )
    printf("`g' called %d times\n", ++n);
  else {
    printf("`g' called first.\n");
    ++n;
  }
}
