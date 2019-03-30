/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

int f(void), *fip(), (*pfi)();

void g(void)
{
  printf("`g' called\n");
  int a = f();
  printf("%d\n", a);
  int* p = fip();
  printf("%d\n", *p);
  int b = pfi();
  printf("%d\n", b);
  {
    int f(void), *fip(), (*pfi)();
    int a = f();
    printf("%d\n", a);
    int* p = fip();
    printf("%d\n", *p);
    pfi = f;
    int b = (*pfi)();
    printf("%d\n", b);
  }
}

int f(void)
{
  printf("`f' called\n");
  return 5;
}

int* fip()
{
  printf("`fip' called\n");
  static int s;
  ++s;
  return &s;
}

int h(void)
{
  printf("`h' called\n");
  return -1;
}

int main(void)
{
  pfi = h;
  g();
  return 0;
}
