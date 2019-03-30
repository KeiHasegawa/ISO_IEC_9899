/*
 * Check if recursive function call is available.
 */
#include <stdio.h>

int fact(int n)
{
  return n ? n * fact(n-1) : 1;
}

int main(void)
{
  printf("5! = %d\n", fact(5));
  return 0;
}
