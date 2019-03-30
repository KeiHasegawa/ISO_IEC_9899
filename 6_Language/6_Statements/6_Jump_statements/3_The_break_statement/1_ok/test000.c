/*
 * Check if break statement works well.
 */
#include <stdio.h>

void test000(int* p)
{
  printf("`test000' called\n");
  while ( (*p)-- ){
    if ( *p == 3 )
      break;
    printf(" %d", *p);
  }
  printf("\n");
}

void test001(double* p)
{
  printf("`test001' called\n");
  do {
    if ( *p == -3 )
      break;
    printf(" %f", *p);
  } while ( ++*p );
  printf("\n");
}

void test002(float* p, int n)
{
  printf("`test002' called\n");
  for ( int i = 0 ; i < n ; ++i ){
    if ( i ==  3 )
      break;
    printf(" %f", p[i]);
  }
  printf("\n");
}

void test003(int n)
{
  printf("`test003' called\n");
  switch ( n ){
  case 0: printf("case 0:\n");
  case 1: printf("case 1:\n");
    break;
  default: printf("default:\n");
    break;
  }
}

int main(void)
{
  int n = 5;
  test000(&n);
  double d = -5;
  test001(&d);
  float fa[] = { 0, 1, 2, 3, 4, 5 };
  test002(fa,sizeof fa/sizeof *fa);
  test003(0);
  test003(1);
  test003(2);
  return 0;
}
