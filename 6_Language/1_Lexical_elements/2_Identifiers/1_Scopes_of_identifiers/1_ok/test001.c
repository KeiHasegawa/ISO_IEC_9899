/*
 * Check if file scope declarations are recognized.
 */
#include <stdio.h>

int a;  /* `a' has file scope */

typedef double X;  /* `X' has file scope */

struct S {
  int m;  /* `m' has block scope */
};  /* `struct S' has file scope */

struct {
  int n;  /* `n' has block scope */
} s = { 3 };  /* none-tagged `s' has file scope */

enum E { x, y, z }; /* `enum E' has file scope. */
                    /* `x', `y' and `z' has also file scope */

int main(void)  /* `main' has file scope */
{
  extern void f(double);
  f(-0.5);
  extern void g(const struct S*);
  struct S s = { 2 };
  g(&s);
  return 0;
}

void f(X d)  /* `f' has file scope */
{
  printf("d = %f\n", d);
  printf("%d %d %d\n", x, y, z);
}

void g(const struct S* ps) /* `g' has file scope */
{
  printf("ps->m = %d\n", ps->m);
  printf("s.n = %d\n", s.n);
}
