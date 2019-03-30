/*
 * Check if abstract declarator works well.
 */
#include <stdio.h>

typedef int T;

void f(double (T));

void g(double (t));

double h(int);

int main()
{
  f(h);
  g(3.0);
  return 0;
}

void f(double (*pf)(int))
{
  printf("`f' called\n");
  double d = (*pf)(100);
  printf("d = %f\n", d);
}

void g(double t)
{
  printf("`g' called with %f\n", t);
}

double h(int a)
{
  printf("`h' called with %d\n", a);
  return a + 5;
}
