/*
 * Check if declarations with internal linkage are recognized.
 */
#include <stdio.h>

static double a = -0.25;  /* `a' has internal linkage */
static int f(void)  /* `f' has internal linkage */
{
  return 456;
}

void y(void)
{
  printf("a = %f\n", a);
  printf("f() = %d\n", f());
  extern void x(void);
  x();
}
