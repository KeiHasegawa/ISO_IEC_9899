/*
 * Calling functin specified times
 */
#include <stdio.h>

void g(void);

void f(int n)
{
  while ( n-- )
    g();
}

int main(void)
{
  f(5);
  return 0;
}

void g(void)
{
  static int n;
  if ( n )
    printf("`g' called %d times.\n", ++n);
  else
    printf("`g' called first.\n"), ++n;
}
