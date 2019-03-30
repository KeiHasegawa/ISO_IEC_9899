/*
 * Check if initializers are recognized, where
 * initialized variables are declared with typedef-name.
 */
#include <stdio.h>

typedef int A[];

A a = { 1, 2 }, b = { 3, 4, 5 };

extern void f(const int*, int);

int main(void)
{
  f(a, sizeof a/sizeof a[0]);
  f(b, sizeof b/sizeof b[0]);
  A c = { 1, 2 }, d = { 3, 4, 5 };
  f(c, sizeof c/sizeof c[0]);
  f(d, sizeof d/sizeof d[0]);
  return 0;
}

void f(const int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}
