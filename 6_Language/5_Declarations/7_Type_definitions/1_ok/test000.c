/*
 * If a typedef name specifies a variably modified type then it shall have
 * block scope.
 */ 
#include <stdio.h>

void test000(int n)
{
  typedef int A[n]; /* block scope */
  A a;
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", a[i] = i);
  printf("\n");
}

int main(void)
{
  test000(5);
  return 0;
}
