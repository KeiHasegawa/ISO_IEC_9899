/*
 * Check if declarations without linkage are recognized.
 */
#include <stdio.h>

struct S;  /* `S' has no linkage
              o neither object nor function
            */

void f(int a);  /* `a' has no linkage 
                   o function parameter
                 */

int main(void)
{
  int a;  /* no likage because block scope without `extern' */
  static int b;  /* no linkage because block scope without `extern' */
  printf("a = %d\n", a = 123);
  f(b = 456);
  return 0;
}

void f(int b)  /* no linkage becase block scope without `extern' */
{
  printf("`f' called with %d\n", b);
}
