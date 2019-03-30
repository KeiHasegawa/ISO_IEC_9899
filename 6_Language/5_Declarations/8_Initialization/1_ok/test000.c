/*
 * Check if generated pointer is initializer constant.
 */
#include <stdio.h>

int a[10];
int *p = a;

int main(void)
{
  for ( int i = 0 ; i < 10 ; ++i )
    a[i] = i;
  printf("p[5] = %d\n", p[5]);
  return 0;
}
