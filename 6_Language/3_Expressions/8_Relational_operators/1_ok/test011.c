/*
 * Check parameter scope variable length array works well, whose dimension
 * is specified by relational operators.
 */
#include <stdio.h>

void f(float a, double b,
       long long int (*pa)[(int)(a = (a<b)+(a>b)+(a<=b)+(a>=b))])
{
  for ( int i = 0 ; i < a ; ++i )
    printf(" %lld", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  long long int a[][2] = {
    { 0, 1 }
  }; 
  f(-3.0,-3.0,&a[0]);
  return 0;
}
