/*
 * Check if declaration is recognized,
 * whose type is array
 */
#include <stdio.h>

void f(int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", p[i]);
  printf("\n");
}

void test00(void)
{
  int a[3]; /* array of int */
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    a[i] = i;
  f(a,sizeof a/sizeof a[0]);
}

void g(float* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", (int)p[i]);
  printf("\n");
}

void test01(void)
{
  float a[3][5]; /* array of array of float */
  for ( int i = 0 ; i < 3 ; ++i )
    for ( int j = 0 ; j < 5 ; ++j )
      a[i][j] = 10*i+j;
  g(&a[0][0],sizeof a/sizeof a[0][0]);
}

int b[] = { 0, 1, 2, 3, 4, 5, 6, 7 };

void h(int** p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf(" %d", (*p)[i]);
  printf("\n");
}

void test02(void)
{
  int *a[sizeof b/sizeof b[0]-3]; /* array of pointer to int */
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    a[i] = &b[i+3];
  h(a,sizeof a/sizeof a[0]);
}

void test03(int n)
{
  char a[n]; /* variable length array */
  printf("sizeof a = %d\n", sizeof a);
}

int x(double d){ return d + 1; }

int y(double d){ return 10 * d; }

int z(double d){ return 10 - d; }

int (*a04[])(double)  /* array of pointer to
			   function retunring int */
= { x, y, z };

void test04(void)
{
  for ( int i = 0 ; i < sizeof a04/sizeof a04[0] ; ++i )
    printf("a04[%d](%d) = %d\n", i, i, a04[i](i));
}

int u[] = { 1, 2, 0 };

int v[] = { 3, 4, 5, 6, 0 };

int w[] = { 6, 7, 8, 9, 10, 0 };

int (*a05[])[]  /* array of pointer to array of int */
= { &u, &v, &w };

void f05(int (*p)[])
{
  for ( int i = 0 ; (*p)[i] ; ++i )
    printf(" %d", (*p)[i]);
  printf("\n");
}

void test05(void)
{
  for ( int i = 0 ; i < sizeof a05/sizeof a05[0] ; ++i )
    f05(a05[i]);
}

int main(void)
{
  test00();
  test01();
  test02();
  test03(5);
  test04();
  test05();
  return 0;
}
