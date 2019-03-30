/*
 * Check if array designators are recognized.
 */
#include <stdio.h>

int a[] = { [3] = 1, 2 };

int b[5] = { [2] = 1, 2 };

extern void f(const int*, int);

int main(void)
{
  f(&a[0],sizeof a/sizeof a[0]);
  f(&b[0],sizeof b/sizeof b[0]);
  int c[] = { [3] = 1, 2 };
  int d[5] = { [2] = 1, 2 };
  f(&c[0],sizeof c/sizeof c[0]);
  f(&d[0],sizeof d/sizeof d[0]);
  return 0;
}

void f(const int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf("p[%d] = %d\n", i, p[i]);
}
