/*
 * Check if multiple variable length array in a block works well.
 */

#include <stdio.h>

void f(int n)
{
  int a[n];
  int b[n];
  
  for ( int i = 0 ; i < n ; i++ )
    a[i] = i, b[i] = -i;

  for ( int i = 0 ; i < n ; i++ )
    printf("a[%d] = %d, b[%d] = %d\n", i, a[i], i, b[i]);
}

int main(void)
{
  f(5);
  return 0;
}
