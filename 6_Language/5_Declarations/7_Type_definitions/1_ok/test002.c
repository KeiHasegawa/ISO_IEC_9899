/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

typedef int MILES, KLICKSP();
typedef struct { double hi, lo; } range;

MILES distance;
extern KLICKSP *metricp;
range x;
range z, *zp;

int f()
{
  printf("`f' called\n");
  return -2;
}

void g(void)
{
  printf("`g' called\n");
  distance = 1;
  metricp = &f;
  x.hi = 3;
  x.lo = 4;
  z.hi = 5;
  z.lo = 6;
  zp = &x;
}

void h(void)
{
  printf("`h' called\n");
  printf("%d\n", distance);
  printf("%d\n", metricp());
  printf("(%f, %f)\n", x.hi, x.lo);
  printf("(%f, %f)\n", z.hi, z.lo);
  printf("(%f, %f)\n", zp->hi, zp->lo);
}

int main(void)
{
  f();
  g();
  h();
  return 0;
}

KLICKSP *metricp;
