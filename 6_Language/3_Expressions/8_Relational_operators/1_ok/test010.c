/*
 * Check relational operators work well in sub expression.
 */
#include <stdio.h>

unsigned short int array[8];

void test00(void)
{
  printf("`test00' called\n");
  if ( array[3] < array[5] )
    printf("array[3] < array[5]\n");
  else
    printf("array[3] >= array[5]\n");

  if ( array[2] > array[4] )
    printf("array[2] > array[4]\n");
  else
    printf("array[2] <= array[4]\n");

  if ( array[6] <= array[1] )
    printf("array[6] <= array[1]\n");
  else
    printf("array[6] > array[1]\n");

  if ( array[0] >= array[7] )
    printf("array[0] >= array[7]\n");
  else
    printf("array[0] < array[7]\n");
}

void test01(double* p, int i, int j)
{
  printf("`test01' called\n");
  if ( p[i] < p[j] )
    printf("p[i] < p[j]\n");
  else
    printf("p[i] >= p[j]\n");

  if ( p[i+1] > p[j-1] )
    printf("p[i+1] > p[j-1]\n");
  else
    printf("p[i+1] <= p[j-1]\n");

  if ( p[2*(i-1)] <= p[j] )
    printf("p[2*(i-1)] <= p[j]\n");
  else
    printf("p[2*(i-1)] > p[j]\n");

  if ( p[j-i] >= p[j+3] )
    printf("p[j-i] >= p[j+3]\n");
  else
    printf("p[j-i] < p[j+3]\n");
}

int main(void)
{
  for ( int i = 0 ; i < sizeof array / sizeof *array ; ++i )
    array[i] = i;
  test00();

  double d[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
  test01(&d[0],3,4);

  return 0;
}
