/*
 * Check logical AND operator works well in
 *
 *   - if expression statement
 *   - if expression statement else statement
 *   - while expression statement
 *   - do statement while expression
 *   - for ( ... ; expression ; ... ) statement
 *   - 1st expression in conditional-exression
 *   - otherwise
 */
#include <stdio.h>

void test000(char* x, char* y)
{
  printf("`test000' called\n");
  if ( *x && *y )
    printf("*x && *y\n");
}

void test001(char* x, char* y)
{
  printf("`test001' called\n");
  if ( *x && *y )
    printf("*x && *y\n");
  else
    printf("!(*x && *y)\n");
}

void test002(int x, int* y)
{
  printf("`test002' called\n");
  while ( x && *y )
    printf("x = %d, y = %d\n", --x, *y += 2);
}

void test003(int* x, int y)
{
  printf("`test003' called\n");
  do
    printf("*x = %d, y = %d\n", --*x, y += 2);
  while ( *x && y );
}

void test004(long long int* x, double y)
{
  printf("`test004' called\n");
  for ( ; *x && y ; ++x )
    printf("*x = %lld, y = %f\n", *x, --y);
}

void test005(long long int x, char* y)
{
  printf("`test005' called\n");
  x && *y ? printf("x && *y\n") : printf("!(x && *y)\n");
}

void test006(long long int x, char* y)
{
  printf("`test006' called\n");
  printf("x && *y = %d\n", x && *y);
}

int main(void)
{
  {
    char x = 'a';
    char y = 'b';
    test000(&x,&y);
    x = '\0';
    test000(&x,&y);
    y = '\0';
    test000(&x,&y);
    x = 'c';
    test000(&x,&y);
  }
  {
    char x = 'a';
    char y = 'b';
    test001(&x,&y);
    x = '\0';
    test001(&x,&y);
    y = '\0';
    test001(&x,&y);
    x = 'c';
    test001(&x,&y);
  }
  {
    int y = -8;
    test002(3,&y);
  }
  {
    int x = 4;
    test003(&x,-6);
  }
  {
    long long int x[] = { 3, 2, 1, 0 };
    test004(&x[0],2);
  }
  {
    char y = '\0';
    test005(3LL,&y);
    y = 'a';
    test005(0LL,&y);
    test005(3LL,&y);
  }
  {
    char y = '\0';
    test006(3LL,&y);
    y = 'a';
    test006(0LL,&y);
    test006(3LL,&y);
  }
  return 0;
}
