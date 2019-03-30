/*
 * Check if static storage duration variables witout initializer
 * are zero cleared.
 */
#include <stdio.h>

static int *a;
static double b;
struct S {
  int* a;
  double b;
};
static struct S c;
union U {
  int a;
  float b;
};
static union U d;

extern void f(void);

int main(void)
{
  f();
  int n = 1;
  a = &n;
  b = -0.5;
  c.a = a;
  c.b = b + 3;
  d.b = 1.0;
  f();
  return 0;
}

void f(void)
{
  if ( a )
    printf("*a = %d\n", *a);
  else
    printf("a is zero\n");

  if ( b )
    printf("b = %f\n", b);
  else
    printf("b is zero\n");

  if ( c.a )
    printf("*c.a = %d\n", *c.a);
  else
    printf("c.a is zero\n");

  if ( c.b )
    printf("c.b = %f\n", c.b);
  else
    printf("c.b is zero\n");

  if ( d.a )
    printf("d.a = 0x%08x\n", d.a);
  else
    printf("d.a is zero\n");
}
