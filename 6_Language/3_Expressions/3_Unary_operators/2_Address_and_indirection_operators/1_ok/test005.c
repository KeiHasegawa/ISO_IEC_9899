/*
 * Check if address of operator works well for the result of subscripting
 * operator.
 */
#include <stdio.h>

extern int a[];

int* f(int n)
{
  return n ? &a[n] : &((int*)0)[n];
}

int main(void)
{
  if ( f(0) != 0 ){
    printf("error\n");
    return -1;
  }

  if ( f(2) != &a[2] ){
    printf("error\n");
    return -2;
  }

  printf("ok\n");
  return 0;
}

int a[10];
