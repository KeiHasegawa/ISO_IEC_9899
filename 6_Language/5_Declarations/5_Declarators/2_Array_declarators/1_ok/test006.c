/*
 * Check ISO sample works well.
 */
#include <stdio.h>

int B[100]; // OK - file scope but not VM.
void fvla(int m, int C[m][m]) // OK - VLA with prototype scope.
{
  typedef int VLA[m][m]; // OK - block scope typedef VLA.
  int D[m]; // OK - auto VLA.
  int (*s)[m]; // OK - auto pointer to VLA.
  static int (*q)[m] = &B; // OK - q is a static block
                           // pointer to VLA.
  for ( int i = 0 ; i < m ; ++i ){
    if ( B[i] != (*C)[i] ){
      printf("B[%d] = %d, (*C)[%d] = %d\n", i, B[i], i, (*C)[i]);
      return;
    }
  }
  printf("`B' and `C' are compared successfully.\n");

  VLA E;
  for ( int i = 0 ; i < m ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
      printf("%d\n", E[i][j] = i << 8 | j); 
  }

  for ( int i = 0 ; i < m ; ++i )
    D[i] = B[i];

  for ( int i = 0 ; i < m ; ++i ){
    if ( D[i] != B[i] ){
      printf("B[%d] = %d, D[%d] = %d\n", i, B[i], i, D[i]);
      return;
    }
  }
  printf("`B' and `D' are compared successfully.\n");

  s = &D;
  for ( int i = 0 ; i < m ; ++i ){
    if ( B[i] != (*s)[i] ){
      printf("B[%d] = %d, (*s)[%d] = %d\n", i, B[i], i, (*s)[i]);
      return;
    }
  }
  printf("`B' and `s' are compared successfully.\n");

  for ( int i = 0 ; i < m ; ++i ){
    if ( D[i] != (*q)[i] ){
      printf("D[%d] = %d, (*q)[%d] = %d\n", i, D[i], i, (*q)[i]);
      return;
    }
  }
  printf("`D' and `q' are compared successfully.\n");
}

int main(void)
{
  int a[1][sizeof B/sizeof B[0]];
  for ( int i = 0 ; i < sizeof B/sizeof B[0] ; ++i )
    B[i] = a[0][i] = i;
  fvla(100,&a[0]);
  return 0;
}
