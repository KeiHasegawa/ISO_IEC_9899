/*
 * Check if parameter scope pointer to VLA declaration works well.
 * (function definition)
 */
#include <stdio.h>

void f(int n, float (*p)[n + 2])
{
  for ( int i = 0 ; i != sizeof(*p)/sizeof (*p)[0] ; ++i )
    printf("(*p)[%d] = %f\n", i, (*p)[i]);
}

void g(int n)
{
  float a[n + 2];
  for ( int i = 0 ; i != n + 2 ; ++i )
    a[i] = i + n;
  f(n, &a);
}

int main()
{
  g(10);
  return 0;
}
