/*
 * Check conditional operator works well in sub expression.
 */
#include <stdio.h>

float f(int*, char, int, double*);

void test000(void)
{
  printf("`test000' called\n");
  int a[] = { 0, 1 };
  double d[] = { -0.5, 2.5 };
  printf("f(&a[0],'c',100,&d[0]) = %f\n", f(&a[0],'c',100,&d[0]));
  printf("f(&a[0],'d',100,&d[0]) = %f\n", f(&a[0],'d',100,&d[0]));
}

float array[] = { 0, 1, 2, 3, 4, 5 };

void test001(void)
{
  printf("`test001' called\n");
  printf("%f\n", array[0] ? array[1] : array[2]);
  printf("%f\n", array[3] ? array[4] : array[5]);
}

int main(void)
{
  test000();
  test001();
  return 0;
}

float f(int* p, char c, int i, double* q)
{
  return p[i-c] ? q[i-c-1] : q[i-c+1];
}
