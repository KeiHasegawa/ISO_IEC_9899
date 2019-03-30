/*
 * Check if typedef declaration is recognized,
 * whose type is incomlete array.
 */
#include <stdio.h>

void f(int*, int);

int main(void)
{
  typedef int A[];
  A a = { 1, 2 }, b = { 3, 4, 5 };
  f(&a[0], sizeof a/sizeof a[0]);
  f(&b[0], sizeof b/sizeof b[0]);
  return 0;
}

void f(int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}
