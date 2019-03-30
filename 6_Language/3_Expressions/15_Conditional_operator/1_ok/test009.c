/*
 * Check the parameter scope variable length array works well, whose dimension
 * is specified by conditional operator.
 */
#include <stdio.h>

float g(double a)
{
  printf("`g' called with %f\n", a);
  return 4.5;
}

long long int h(float a)
{
  printf("`h' called with %f\n", a);
  return 4LL;
}

void* x;

void f(int n, unsigned long long int (*pa)[n = x ? g(n) : h(n)])
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %llu", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  unsigned long long int a[][4] = {
    { 0, 1, 2, 3 }
  };
  x = (void*)0;
  f(4,&a[0]);
  x = (void*)1;
  f(4,&a[0]);
  return 0;
}
