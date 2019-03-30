/*
 * Check parameter scope variable length array works well whose dimension
 * is specified by multiplicative operator.
 */
#include <stdio.h>

void f(long long int* a, int b, unsigned char* c,
       short int (*pa)[*a = *c / (*a % b + *a * b)])
{
  for ( int i = 0 ; i < *a ; ++i )
    printf(" %d", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  short int a[][10] = {
    { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }
  };
  f(&(long long int){3},5,&(unsigned char){180},&a[0]);
  return 0;
}

