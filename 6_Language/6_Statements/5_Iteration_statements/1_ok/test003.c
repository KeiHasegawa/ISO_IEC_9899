/*
 * Check if for statement works well, where 3rd expression is very long.
 */
#include <stdio.h>

void g(int i, int j)
{
  printf("`g' called with %d, %d\n", i, j);
}

void f(int j)
{
  printf("`f' called\n");
  for ( int i = 0 ; i < 5 ; ++i, ++j, g(i,j) )
    printf("i = %d, j = %d\n", i, j);
}

int main(void)
{
  f(7);
  return 0;
}

