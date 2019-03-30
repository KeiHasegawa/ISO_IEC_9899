/*
 * Check if inline function definition and function call
 * is recognized.
 */
#include <stdio.h>

inline void test000(void)
{
  printf("`test000' called\n");
  printf("hello\n");
}

inline int test001(int* a, int* b, int n)
{
  printf("`test001' called\n");
  if ( n )
    return a[n];
  else
    return b[n+1];
}

inline int test002(double a, double b)
{
  printf("`test002' called\n");
  return a + b;
}

inline float test003(int a, int b)
{
  printf("`test003' called\n");
  return a - b;
}

int counter;

inline void test004(void)
{
  printf("`test004' called\n");
  ++counter;
}

int main(void)
{
  test000();
  int a[] = { 1, 2, 3 };
  int b[] = { 4, 5, 6 };
  int x = test001(a,b,0);
  printf("x = %d\n", x);
  int y = test001(a,b,1);
  printf("y = %d\n", y);
  {
    int a = test002(1,2) && test003(3,4);
    if ( a )
      printf("ok\n");
    else
      printf("error\n");
    int b = test002(1,-1) && test003(3,4);
    if ( b )
      printf("error\n");
    else
      printf("ok\n");
  }
  {
    int a = test002(1,-1) || test003(3,4);
    if ( a )
      printf("ok\n");
    else
      printf("error\n");
    int b = test002(1,2) || test003(3,4);
    if ( b )
      printf("ok\n");
    else
      printf("error\n");
  }
  {
    for ( counter = 0 ; counter < 4 ; test004() )
      printf("counter = %d\n", counter);
  }
  return 0;
}
