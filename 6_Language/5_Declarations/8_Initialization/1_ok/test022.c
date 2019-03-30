/*
 * Check if array designators are recognized.
 */
#include <stdio.h>

#define MAX 12
int x[MAX] = {
  1, 3, 5, 7, 9, [MAX-5] = 8, 6, 4, 2, 0
};
#undef MAX

#define MAX 7
int y[MAX] = {
  1, 3, 5, 7, 9, [MAX-5] = 8, 6, 4, 2, 0
};
#undef MAX

extern void f(const int*, int);

int main(void)
{
#define MAX 14
  int u[MAX] = {
    1, 3, 5, 7, 9, [MAX-5] = 8, 6, 4, 2, 0
  };
#undef MAX

#define MAX 5
  int v[MAX] = {
    1, 3, 5, 7, 9, [MAX-5] = 8, 6, 4, 2, 0
  };
  f(x,sizeof x/sizeof x[0]);
  f(y,sizeof y/sizeof y[0]);
  f(u,sizeof u/sizeof u[0]);
  f(v,sizeof v/sizeof v[0]);
  return 0;
}

void f(const int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}
