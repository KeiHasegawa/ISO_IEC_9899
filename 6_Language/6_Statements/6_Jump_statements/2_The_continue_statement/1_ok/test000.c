/*
 * Check if continue statement works well.
 */
#include <stdio.h>

void test000(int* p)
{
  printf("`test000' called\n");
  while ( (*p)-- ){
    if ( *p == 3 )
      continue;
    printf(" %d", *p);
  }
  printf("\n");
}

void test001(double* p)
{
  printf("`test001' called\n");
  do {
    if ( *p == -3 )
      continue;
    printf(" %f", *p);
  } while ( ++*p );
  printf("\n");
}

void test002(float* p, int n)
{
  printf("`test002' called\n");
  for ( int i = 0 ; i < n ; ++i ){
    if ( i == 3 )
      continue;
    printf(" %f", p[i]);
  }
  printf("\n");
}

int main(void)
{
  int n = 5;
  test000(&n);
  double d = -5;
  test001(&d);
  float fa[] = { 0, 1, 2, 3, 4, 5 };
  test002(fa,sizeof fa/sizeof *fa);
  return 0;
}
