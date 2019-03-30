/*
 * Check ISO smaple works well.
 */
#include <stdio.h>

extern int n;
extern int m;
void fcompat(void)
{
  int a[n][6][m];
  int (*p)[4][n+1];
  int c[n][n][6][m];
  int (*r)[n][n][n+1];
  r = c; // Compatible, but defined behavior
         // only if n == 6 and m == n+1.

  printf("a:\n");
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < 6 ; ++j ){
      for ( int k = 0 ; k < m ; ++k )
        printf(" %d", a[i][j][k] = i << 6 | j << 3 | k);
      printf("\n");
    }
  }

  printf("sizeof *p = %d\n", sizeof *p);

  printf("c:\n");
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < n ; ++j ){
      for ( int k = 0 ; k < 6 ; ++k ){
        for ( int l = 0 ; l < n + 1 ; ++l )
          printf(" %d", c[i][j][k][l] = i << 9 | j << 6 | k << 3 | l);
        printf("\n");
      }
    }
  }

  printf("r:\n");
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < n ; ++j ){
      for ( int k = 0 ; k < n ; ++k )
        printf(" %d", (*r)[i][j][k]);
      printf("\n");
    }
  }
}

int n, m;

int main(void)
{
  n = 6;
  m = n + 1;
  fcompat();
  return 0;
}
