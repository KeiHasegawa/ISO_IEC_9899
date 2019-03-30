/*
 * Check if casted pointer works well at additive-expression.
 */

#include <stdio.h>

int* f(void* p)
{
  return (int*)p - 1;
}

double* g(char* p)
{
  return (double*)p + 1;
}

int main()
{
  int a[] = { 1, 2, 3, 4 };
  int* p = f(&a[2]);
  printf("*p = %d\n", *p);
  double b[] = { 5, 6, 7, 8 };
  double* q = g((char*)&b[2]);
  printf("*q = %f\n", *q);
  return 0;
}
