/*
 * Check if array initializations are well done.
 */
#include <stdio.h>

int a[] = { 1, 2, 3, 4 };

int b[5] = { 1, 2, 3, 4 };

extern void f(const int*, int);

int main(void)
{
  f(&a[0],sizeof a/sizeof a[0]);
  f(b,sizeof b/sizeof b[0]);
  int a[] = { 1, 2, 3, 4 };
  f(a,sizeof a/sizeof a[0]);
  int b[5] = { 1, 2, 3, 4 };
  f(&b[0],sizeof b/sizeof b[0]);
  return 0;
}

void f(const int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf("p[%d] = %d\n", i, p[i]);
}
