/*
 * Check parameter scope variable length array works well, whose dimension
 * is specified by logical AND operator.
 */
#include <stdio.h>

struct S {
  int a;
};

extern struct S* g(int);

void f(int n, int m, long int (*pa)[m = n + (g(n)->a && g(n+1))])
{
  for ( int i = 0 ; i < m ; ++i )
    printf(" %ld", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  long int a[][3] = {
    { 0, 1, 2 }
  };
  f(3,0,&a[0]);
  return 0;
}

struct S* g(int n)
{
  printf("`g' called with %d\n", n);
  if ( n == 3 ){
    static struct S a = { 1 };
    return &a;
  }
  else
    return 0;
}
