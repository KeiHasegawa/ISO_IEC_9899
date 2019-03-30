/*
 * Check if qualified typedef-names are recognized,
 * whose type is array, function
 */
#include <stdio.h>

typedef int A[3];
typedef int F(void);

const A a = { 1, 2, 3 };

volatile F f;

int main(void)
{
  int n = sizeof a / sizeof a[0];
  for ( int i = 0 ; i < n ; ++i )
    printf("a[%d] = %d\n", i, a[i]);
  printf("f() return %d\n" , f());
  return 0;
}

volatile int f(void)
{
  return 5;
}
