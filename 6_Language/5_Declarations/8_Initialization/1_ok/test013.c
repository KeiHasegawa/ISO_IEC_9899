/*
 * Check if current object in the initializer-list is treated
 * correctly.
 */
#include <stdio.h>

struct { int a[3], b; } x[] = { { 1 }, 2 };

int main(void)
{
  for ( int i = 0 ; i < sizeof x/sizeof x[0] ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", x[i].a[j]);
    printf(" %d", x[i].b);
    printf("\n");
  }
  printf("\n");
  struct { int a[3], b; } y[] = { { 1 }, 2 };
  for ( int i = 0 ; i < sizeof y/sizeof y[0] ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", y[i].a[j]);
    printf(" %d", y[i].b);
    printf("\n");
  }
  return 0;
}
