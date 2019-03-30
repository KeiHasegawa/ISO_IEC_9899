/*
 * Check if declarations with internal linkage are recognized.
 */
#include <stdio.h>

static int a = 123;  /* `a' has internal linkage */
static double f(void);  /* `f' has internal linkage. */

void x(void)
{
  printf("a = %d\n", a);
  printf("f() = %f\n", f());
}

extern void y(void);

int main(void)
{
  y();
  return 0;
}

/* error. no definition of `f' */
