/*
 * Check if multi-dimensional array initialzations are recognized.
 */
#include <stdio.h>

int x[4][3] = {
  { 1, 3, 5 },
  { 2, 4, 6 },
  { 3, 5, 7 },
};

extern void f(int a[4][3]);

int main(void)
{
  f(x);
  int y[4][3] = {
    { 1, 3, 5 },
    { 2, 4, 6 },
    { 3, 5, 7 },
  };
  printf("\n");
  f(y);
  return 0;
}

void f(int a[4][3])
{
  for ( int i = 0 ; i < 4 ; ++i ){
    for ( int j = 0 ; j < 3 ; ++j ){
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }
}


