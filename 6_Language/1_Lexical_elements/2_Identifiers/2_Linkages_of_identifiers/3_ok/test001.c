/*
 * Check if identifiers with external linkage are recognized.
 */
#include <stdio.h>

void f(void);  /* external linkage
                o no storage-class so, same as `extern void f(void);'
                */

extern void g(void);  /* external linkage
                       o `extern' specified
                       */

int a;  /* external linkage
         o file scope
         o no storage-class
         */

int main(void)
{
  printf("a = %d\n", a = 123);
  f();
  g();
  return 0;
}

void f(void)
{
  printf("`f' called\n");
}

void g(void)
{
  printf("`g' called\n");
}
