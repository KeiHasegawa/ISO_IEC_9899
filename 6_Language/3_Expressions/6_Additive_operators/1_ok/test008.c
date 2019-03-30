/*
 * Check parameter scope variable length array works well, whose dimension
 * is specified by additive operators.
 */
#include <stdio.h>

double da[10];

long long int x, *y;

void f(int n, char* (*pa)[n = da[4] + ++x - ++*y])
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" \"%s\"", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  da[4] = 8;
  x = 'x';
  y = &(long long int){'y'};
  char* day[][7] = {
    { "Sun", "Mon", "Tue", "Wed", "Thr", "Fri", "Sat" }
  };
  f(1,&day[0]);
  printf("'%c' '%c'\n", (char)x, (char)*y);
  return 0;
}
