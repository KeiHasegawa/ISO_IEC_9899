/*
 * If an identifier has no linkage, there shall be no more than one
 * declaration of the identifier (in a declarator or type specifier) with
 * the same scope and in the same name space, except for tags as specified
 * in 6.5.2.3.
 */

void f(int a, double a); /* `a' has no linkage */
			 /*  2nd `a' is error  */



void g(void)
{
  int b;  /* no likage because block scope without `extern' */
  int b;  /* no likage because block scope without `extern' */
  /* 2nd `b' is error */

  int c;  /* no likage because block scope without `extern' */
  static int c;  /* no likage because block scope without `extern' */
  /* 2nd `c' is error */
}

void h(int d)  /* no linkage becase block scope without `extern' */
{
  int d;  /* no linkage becase block scope without `extern' */
  /* 2nd `d' is error */
}
