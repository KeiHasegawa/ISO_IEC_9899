/*
 * Check if variable length array works well if the dimension is specified
 * by member operator.
 */
#include <stdio.h>

struct S {
  int a;
  char b[5];
};

struct S s;
struct S* ps;

void f(int n, long double (*pa)[n = s.a][ps->b[ps->a]])
{
  printf("`f' called\n");
  int m = sizeof (*pa)[0]/sizeof (*pa)[0][0];
  for ( int i = 0 ; i < n ; ++i ){
    for ( int j = 0 ; j < m ; ++j )
      printf(" %Lf", (*pa)[i][j]);
    printf("\n");
  }
}

int main(void)
{
  s.a = 2;
  struct S s = { 3, { 0, 1, 2, 3, 4 } };
  ps = &s;
  long double a[][2][3] = {
    { { 1, 2, 3 }, { 4, 5, 6 } },
  };
  f(-5,&a[0]);
  return 0;
}
