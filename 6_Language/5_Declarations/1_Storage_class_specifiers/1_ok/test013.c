/*
 * Check if typedef declaration is recognized,
 * whose type is variable length array.
 */
#include <stdio.h>

void f(int n)
{
  typedef int A[n];
  A a;
  A *p = &a;
  for ( int i = 0 ; i < n ; ++i )
    (*p)[i] = i;
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}

int main(void)
{
  f(5);
  return 0;
}
