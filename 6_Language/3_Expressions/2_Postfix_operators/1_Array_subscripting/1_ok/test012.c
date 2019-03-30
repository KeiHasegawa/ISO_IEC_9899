/*
 * Check if subscripting operator works well for constant pointer.
 */
#include <stdio.h>

typedef long long int T;

int f(T n)
{
  return ((int*)0)[n];
}

int main(void)
{
  int a[] = { 3, 7, -5, 2, 1, 1, 0, 26, 'c' };
  for ( int i = 0 ; i != sizeof a/sizeof a[0] ; ++i ){
    T n = (T)&a[i];
    n >>= 2;
    if ( f(n) != a[i] ){
      printf("error f(%lld) != a[%d]\n", n, i);
      return -1;
    }
  }
  printf("ok\n");
  return 0;
}

extern int a[];

int g(int n)
{
  /* just compile test */
  return a[n] + ((int*)0)[n];
}

int a[] = { 0, 1, 2 };
