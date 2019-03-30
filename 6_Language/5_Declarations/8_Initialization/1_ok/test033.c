/*
 * Check if subscripting designator works well.
 */
#include <stdio.h>

void f(void)
{
  printf("`f' called\n");
  int a[][3] = { [1][1] = 1 };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i ){
    for (int j = 0 ; j < sizeof a[0]/sizeof a[0][0] ; ++j )
      printf(" %d", a[i][j]);
    printf("\n");
  }
  printf("\n");

  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i ){
    for (int j = 0 ; j < sizeof a[0]/sizeof a[0][0] ; ++j )
      printf(" %d", a[i][j] = (i << 2) + j);
    printf("\n");
  }
  printf("\n");
}

int a[][3] = { [1][1] = 1 };

int main(void)
{
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i ){
    for (int j = 0 ; j < sizeof a[0]/sizeof a[0][0] ; ++j )
      printf(" %d", a[i][j]);
    printf("\n");
  }
  printf("\n");
  f();
  f();
  return 0;
}
