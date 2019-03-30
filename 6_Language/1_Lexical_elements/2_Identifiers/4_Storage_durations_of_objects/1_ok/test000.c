/*
 * static storage duration object
 */
#include <stdio.h>

int a = 123; /* `a' has static storage duration. because
                `a' has external or internal linkage
                (in this case, external linkage)
              */

static int b = 456;   /* `b' has static storage duration. because
                         `b' has external or internal linkage
                         (in this case, internal linkage)
                       */

extern void f(void);

int main(void)
{
  printf("a = %d, b = %d\n", a, b);
  f();
  printf("a = %d, b = %d\n", a, b);
  f();
  return 0;
}


void f(void)
{
  static int a = 789;  /* `a' has static storage duration. becase
                          specified `static' storage-class specifier.
                          (`a' has no linkage)
                        */
  printf("a = %d, b = %d\n", ++a, ++b);
}

