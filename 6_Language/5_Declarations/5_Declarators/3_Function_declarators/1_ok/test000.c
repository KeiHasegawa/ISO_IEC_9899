/*
 * Check if declaration is recognized, whose type
 * is function.
 */
#include <stdio.h>

int test01(int a[])  /* function returning int */
{
  return *a;
}

int* test02(double* p)  /* function returning pointer to int */
{
  static int s;
  s = p[2];
  return &s;
}

int f(float a)
{
  return a * 10;
}

int (*a03[])(float) = { 0, 0, 0, 0, f };

int (*test03(double a))(float a)  /* test03 is function returning pointer to
				        function which takes float parameter.
					 test03 takes double type parameter.  */
{
  return a03[(int)a];
}

int (*test04(void))[4]  /* function returning pointer to array of int */
{
  static int a[] = { 0, 1, 2, 3 };
  return &a;
}

int main(void)
{
  int n = 1;
  printf("test01(&n) = %d\n", test01(&n));
  double d[] = { 10.0, 11.0, 12.0 };
  printf("*test02(d) = %d\n", *test02(d));
  printf("test03(4)(5) = %d\n", test03(4)(5));
  int (*pa)[4] = test04();
  for ( int i = 0 ; i < 4 ; ++i )
    printf("(*pa)[%d] = %d\n", i, (*pa)[i]);
  return 0;
}
