/*
 * Check if parameter scope union declaration works well.
 * (parameter scope at block scope function declaration)
 */
#include <stdio.h>

void f()
{
  printf("`f' called\n");
  void g(void (*pf)(union U { double d; int i[2]; }));
  union U {
    double d;
    int i[2];
  };
  typedef void FUNC(void (*pf)(union U));
  FUNC* pf = (FUNC*)&g;
  void h(union U);
  pf(h);
}

int main()
{
  f();
  return 0;
}

union U {
  double d;
  int i[2];
};

void g(void (*pf)(union U))
{
  printf("`g' called\n");
  union U x = { 1.0 };
  pf(x);
}

void h(union U u)
{
  printf("`h' called\n");
  printf("u.d = %f\n", u.d);
  printf("u.i[0] = %08x u.i[1] = %08x\n", u.i[0], u.i[1]);
}
