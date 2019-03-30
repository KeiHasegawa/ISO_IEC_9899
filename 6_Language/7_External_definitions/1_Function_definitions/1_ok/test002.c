/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

typedef int F(void); /* type F is ``function of no arguments returning int'' */
F f, g; /* f and g both have type compatible with F */
int f(void) { printf("`f' called\n"); return 1; } /* RIGHT: f has type compatible with F */
int g() { printf("`g' called\n"); return 2; } /* RIGHT: g has type compatible with F */
F *e(void) { printf("`e' called\n"); return f; } /* e returns a pointer to a function */
F *((e2))(void) { printf("`e2' called\n"); return g; } /* same: parentheses irrelevant */
int (*fp)(void); /* fp points to a function that has type F */
F *Fp; /* Fp points to a function that has type F */

int main(void)
{
  printf("%d\n", f());
  printf("%d\n", g());
  F* a = e();
  printf("%d\n", a());
  F* b = e2();
  printf("%d\n", b());
  fp = f;
  printf("%d\n", fp());
  Fp = g;
  printf("%d\n", Fp());
  return 0;
}
