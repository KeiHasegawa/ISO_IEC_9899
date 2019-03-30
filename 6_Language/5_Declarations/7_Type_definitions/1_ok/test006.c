/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

typedef void fv(int), (*pfv)(int);
void (*signal(int, void (*)(int)))(int);
fv *signal(int, fv *);
pfv signal(int, pfv);

void g(int n)
{
  printf("`g' called with %d\n", n);
}

int main(void)
{
  void (*pf)(int) = signal(3,g);
  pf(4);
  return 0;
}

void f(int n)
{
  printf("`f' called with %d\n", n);
}

void (*signal(int a, void (*b)(int)))(int)
{
  printf("`signal is called\n");
  b(a);
  return f;
}
