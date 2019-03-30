/*
 * If an identifier has no linkage, there shall be no more than one
 * declaration of the identifier (in a declarator or type specifier) with
 * the same scope and in the same name space, except for tags as specified
 * in 6.5.2.3.
 */
#include <stdio.h>

struct S;  /* `S' has no linkage
              o neither object nor function
            */

struct S { /* `S' has no linkage. But ok because 6.5.2.3 */
  int a;
};

void f(int a);  /* `a' has no linkage 
                   o function parameter
                 */

int main(void)
{
  int a;  /* no likage because block scope without `extern' */
  static int b;  /* no linkage because block scope without `extern' */
  struct S s = { 789 }; /* no linkage because block scope without `extern' */
  printf("a = %d\n", a = 123);
  f(b = 456);
  printf("s.a = %d\n", s.a);
  return 0;
}

void f(int b)  /* no linkage becase block scope without `extern' */
{
  printf("`f' called with %d\n", b);
  int c = -10;  /* no linkage becase block scope without `extern' */
  extern int c;  /* external linkage because the prior declaration specifies
		    no linkage */
  printf("c = %d\n", c);
}

int c = +10;
