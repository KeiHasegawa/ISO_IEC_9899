/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

struct s { double i; } f(void);

union {
  struct {
    int f1;
    struct s f2;
  } u1;
  struct {
    struct s f3;
    int f4;
  } u2;
} g;

struct s f(void)
{
  return g.u1.f2;
}

void h(void)
{
  printf("`h' called\n");
  g.u2.f3 = f();
  printf("%f\n", g.u2.f3.i);
}

int main(void)
{
  g.u1.f2.i = 1.5;
  h();
  return 0;
}

