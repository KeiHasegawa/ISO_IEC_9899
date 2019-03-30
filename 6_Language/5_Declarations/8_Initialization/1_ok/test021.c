/*
 * Check if array or member designators are recognized.
 */
#include <stdio.h>

struct { int a[3], b; } x[] =
  { [0].a = {1}, [1].a[0] = 2 };

void f(void)
{
  printf("`f' called\n");
  struct { int a[3], b; } y[] =
    { [0].a = {1}, [1].a[0] = 2 };
  for ( int i = 0 ; i < sizeof y/sizeof y[0] ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", y[i].a[j]);
    printf(" %d\n", y[i].b);
  }
  y[0].a[0] = -1;
  y[0].a[1] = -2;
  y[0].a[2] = -3;
  y[0].b = -4;
  y[1].a[0] = -5;
  y[1].a[1] = -6;
  y[1].a[2] = -7;
  y[1].b = -8;
  for ( int i = 0 ; i < sizeof y/sizeof y[0] ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", y[i].a[j]);
    printf(" %d\n", y[i].b);
  }
}

int main(void)
{
  for ( int i = 0 ; i < sizeof x/sizeof x[0] ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", x[i].a[j]);
    printf(" %d\n", x[i].b);
  }
  struct { int a[3], b; } y[] =
    { [0].a = {1}, [1].a[0] = 2 };
  for ( int i = 0 ; i < sizeof y/sizeof y[0] ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", y[i].a[j]);
    printf(" %d\n", y[i].b);
  }
  f();
  f();
  return 0;
}
