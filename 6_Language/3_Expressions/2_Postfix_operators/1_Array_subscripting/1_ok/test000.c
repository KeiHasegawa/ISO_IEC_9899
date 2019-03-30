/*
 * o Check if address of array subscripting is recognized.
 * o Check if sizeof of array subscripting is recognized.
 * o Check if index[array] is recognized, where index is
 *   integer type, array is pointer type.
 */
#include <stdio.h>

int a[10];
int* p = &a[3];
int x = sizeof(a[4]);

int main(void)
{
  printf("x = %d\n", x);
  for ( int i = 0 ; i < 10 ; ++i )
    i[a] = i;
  printf("p[a[2]] = %d\n", p[a[2]]);
  return 0;
}

int test00(void)
{
  return ((int*)3)[3];
}
