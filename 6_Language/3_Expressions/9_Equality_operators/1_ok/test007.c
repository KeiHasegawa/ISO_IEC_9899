/*
 * Check if parameter scope variable length array works well, whose dimension
 * is specified by equality operators.
 */
#include <stdio.h>

long long int array[] = {
  0, 1, 2, 3, 4
};

void f(int n, int m,
       unsigned int (*pa)[(n == m ? array[0] : array[1])+
			  (n != m ? array[n] : array[m])])
{
  printf("`f' called\n");
  for ( int i = 0 ; i < sizeof *pa/sizeof **pa ; ++i )
    printf(" %u", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  unsigned int a[][3] = {
    { 0, 1, 2 }
  };
  f(3,3,&a[0]);
  f(2,4,&a[0]);
  return 0;
}
