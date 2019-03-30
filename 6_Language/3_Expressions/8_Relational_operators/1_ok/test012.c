/*
 * Check relational operator works well in
 *
 *   - if expression statement
 *   - if expression statement else statement
 *   - while expression statement
 *   - do statement while expression
 *   - for ( ... ; expression ; ... ) statement
 *   - 1st expression of conditional-expression
 *   - otherwise
 */
#include <stdio.h>

void test000(unsigned int* x, int y)
{
  printf("`test000' called\n");
  if ( *x < y )
    printf("*x < y\n");
}

void test001(short int x, unsigned char* y)
{
  printf("`test001' called\n");
  if ( x > *y )
    printf("x > *y\n"); 
  else
    printf("x <= *y\n");
}

void test002(float* x, double* y)
{
  printf("`test002' called\n");
  while ( *x <= *y ){
    printf("*x <= *y\n");
    ++*x;
    --*y;
  }
}

void test003(unsigned long int x, char* y)
{
  printf("`test003' called\n");
  do {
    --x;
    ++*y;
    printf("x = %lu, *y = %d\n", x, *y);
  } while ( x >= *y );
}

void test004(double* x, int y)
{
  printf("`test004' called\n");
  for ( ; *x < y ; ++*x, --y )
    printf("*x = %f, y = %d\n", *x, y);
}

void test005(char* x, char* y)
{
  printf("`test005' called\n");
  *x <= *y ? printf("*x < *y\n") : printf("*x >= *y\n");
}

void test006(int x, double y)
{
  printf("`test006' called\n");
  printf("x > y = %d\n", x > y);
}

int main(void)
{
  {
    unsigned int x = 3;
    test000(&x,2);
    test000(&x,3);
    test000(&x,4);
  }
  {
    unsigned char y = 2;
    test001(1,&y);
    test001(2,&y);
    test001(3,&y);
  }
  {
    float x = 1.5;
    double y = 4.25;
    test002(&x,&y);
  }
  {
    char y = 4;
    test003(7UL,&y);
  }
  {
    double x = -10.5;
    test004(&x,7);
  }
  {
    char x = 1;
    char y = 2;
    test005(&x,&y);
    test005(&y,&x);
  }
  {
    test006(3,-2);
    test006(-2,3);
  }
  return 0;
}
