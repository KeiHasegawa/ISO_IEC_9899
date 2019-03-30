/*
 * Check if multi-dimensional array initialzations are recognized.
 */
#include <stdio.h>

int x[4][3] = {
  { 1 }, { 2 }, { 3 }, { 4 }
};

extern void f(int a[4][3]);

int main(void)
{
  f(x);
  printf("\n");
  int y[4][3] = {
    { 1 }, { 2 }, { 3 }, { 4 }
  };
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


