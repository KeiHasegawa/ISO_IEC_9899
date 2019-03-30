/*
 * Check if inline function declaration which takes pointer to VLA works well.
 * (block scope, abstract declarator)
 */
#include <stdio.h>

inline void f(int n)
{
  printf("f called\n");
  inline void g(int n, int (*)[n][n]);
  int a[n][n];
  g(n, &a);
  for (int i = 0 ; i != n ; ++i) {
    for (int j = 0; j != n ; ++j)
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
  }
}

int main()
{
  f(2);
  return 0;
}

inline void g(int n, int (*pa)[n][n])
{
  printf("g called\n");
  for (int i = 0 ; i != n ; ++i) {
    for (int j = 0 ; j != n ; ++j)
      (*pa)[i][j] = n * i + j; 
  }
}

