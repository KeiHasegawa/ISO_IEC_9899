/*
 * Check if parameter scope variable length array works well, whose dimension
 * is specified by bitwise exclusive or operator.
 */
#include <stdio.h>

int *p;

void f(int n, unsigned long long int (*pa)[n = *p ^ n])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < n ; ++i )
    printf(" %lld", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  unsigned long long int a[][5] = {
    { 0, 1, 2, 3, 4 }
  };
  p = &(int){8};
  f(13,&a[0]);
  return 0;
}
