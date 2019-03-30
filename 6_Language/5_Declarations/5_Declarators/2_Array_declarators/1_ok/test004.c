/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

float fa[11], *afp[17];

void test000(void)
{
  printf("`test000' called\n");
  printf("fa:\n");
  for ( int i = 0 ; i < sizeof fa/sizeof fa[0] ; ++i )
    printf(" %f\n", fa[i]);
  printf("afp:\n");
  int n = sizeof afp/sizeof *afp;
  for ( float** p = &afp[0] ; p != &afp[n] ; ++p )
    printf(" %f\n", **p);
}

extern int *x;
extern int y[];

void test001(void)
{
  printf("`test001' called\n");
  extern int nx;
  for ( int i = 0 ; i < nx ; ++i )
    printf(" %d", x[i]);
  printf("\n");
  extern int ny;
  for ( int i = 0 ; i < ny ; ++i )
    printf(" %d", y[i]);
  printf("\n");
}

int* x, nx;
int y[5], ny;

int main(void)
{
  {
    int n = sizeof fa/sizeof *fa;
    for ( float* p = &fa[0] ; p != &fa[n] ; ++p )
      *p = p - &fa[0];

    float a[sizeof afp/sizeof afp[0]];
    for ( int i = 0 ; i < sizeof afp/sizeof afp[0] ; ++i ){
      a[i] = -i;
      afp[i] = &a[i];
    }
    test000();
  }
  {
    int a[] = { -1, -2, -3, -4 };
    x = &a[0];
    nx = sizeof a/sizeof a[0];
    ny = sizeof y/sizeof y[0];
    for ( int i = 0 ; i < ny ; ++i )
      y[i] = i;
    test001();
  }
  return 0;
}

