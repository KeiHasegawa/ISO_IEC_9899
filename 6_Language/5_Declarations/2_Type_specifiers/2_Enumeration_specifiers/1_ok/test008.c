/*
 * Just declare block scope struct union or enum.
 */
#include <stdio.h>

void f()
{
  printf("`f' called\n");
 
  struct S {
    int a;
  };
  const struct S cs;
  volatile struct S vs;
  struct S a[10];
  struct S* p;
  struct S g();
  int h(struct S);

  enum E { alpha, beta, gamma };
  extern enum E ae[];
  enum E* pe;
  enum E gg();
  union U hh(enum E);
}

int main()
{
  f();
  return 0;
}
