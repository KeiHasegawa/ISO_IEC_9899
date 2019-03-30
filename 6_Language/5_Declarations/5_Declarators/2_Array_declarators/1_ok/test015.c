/*
 * Check if parameter scope pointer to VLA declaration works well.
 * (function declaration at block scope)
 */
#include <stdio.h>

int N;

void f(int n)
{
  void g(float (*p)[n / 2]);  // direct declarator
  float a[n+5];
  g(&a);
  void h(int (*)[N + n]);  // abstract declarator
  int b[N + n];
  h(&b);

  printf("N = %d\n", N);
  printf("a:\n");
  for (float* p = &a[0] ; p != &a[n+5] ; ++p)
    printf("%f\n", *p);

  printf("b:\n");
  for (int* p = &b[0]; p != &b[N+n]; ++p)
    printf("%d\n", *p);
}

int main()
{
  N = 10;
  f(20);
  return 0;
}

void g(float (*p)[N * 2 + 5])
{
  float* begin = &(*p)[0];
  float* end = begin + sizeof *p/sizeof (*p)[0];
  for (; begin != end ; ++begin)
    *begin = ++N;
}

void h(int (*p)[N+20])
{
  for (int i = 0 ; i != N + 20; ++i)
    (*p)[i] = i;
}
