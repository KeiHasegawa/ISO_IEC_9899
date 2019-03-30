/*
 * If an identifier for an object is declared with no linkage, the type
 * for the object shall be complete by the end of its declarator, or by the
 * end of its init-declarator if it has an initializer.
 */
struct S;

void f(struct S a); /* `a' has no linkage
		       o function parameter
                     */
/*
 * OK. ISO 6.5.5.3 says that like bellow.
 * If the function declarator is not part of a function definition, the
 * parameters may have incomplete type.
 */

void g(void)
{
  struct S b;  /* no likage because block scope without `extern' */
               /* declaration of `b' is error */

  static struct S c;  /* no likage because block scope without `extern' */
                      /* declaration of `c' is error */

  int d[]; /* no likage because block scope without `extern' */
           /* declaration of `d' is error */
}

void h(struct S e)  /* no linkage becase block scope without `extern' */
                    /* declaration of `e' is error */
{
}
