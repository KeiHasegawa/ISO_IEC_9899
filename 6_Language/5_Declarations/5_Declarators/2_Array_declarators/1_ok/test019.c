/*
 * Check if inline function declaration which takes pointer to VLA works well.
 * (file scope, abstract declarator)
 */
#include <stdio.h>

extern int N;

inline void f(float (*)[(N <<2) + N]);

inline void g(int n, int m)
{
  printf("g called\n");
  float a[n][m];
  for (int i = 0 ; i != n ; ++i) {
    for (int j = 0 ; j != m ; ++j)
      a[i][j] = n*i + m*j;
  }
  f(a);
}

int N;

int main()
{
  N = 1;
  g(3,5);
  return 0;
}

inline void f(float (*a)[(N <<2) + N])
{
  for (int i = 0; i != 3 ; ++i) {
    for (int j = 0 ; j != 5; ++j)
      printf("a[%d][%d] = %f\n", i, j, a[i][j]);
  }
}

