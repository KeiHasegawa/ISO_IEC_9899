/*
 * Check if parameter scope pointer to VLA declaration works well.
 * (function declaration at file scope)
 */
#include <stdio.h>

void f(int n, double (*)[n * 2]);  // abstract declarator

void g(int n, double (*p)[n + 2]); // direct declarator

int main()
{
  double a[10];
  f(5, &a);
  g(8, &a);
  return 0;
}

void f(int n, double (*p)[n * 2])
{
  for (int i = 0 ; i != sizeof *p/sizeof (*p)[0] ; ++i)
    (*p)[i] = i * n;
}

void g(int n, double (*p)[n + 2])
{
  for (int i = 0 ; i != sizeof (*p)/sizeof (*p)[0] ; ++i)
    printf("(*p)[%d] = %f\n", i, (*p)[i]);
}
