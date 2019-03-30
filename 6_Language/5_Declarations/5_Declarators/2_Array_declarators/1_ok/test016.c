/*
 * Check if the bellow types works well.
 *
 * o VLA at block scope
 * o Pointer to VLA at block scope
 * o Function returning pointer to VLA at block scope
 * o Function whose parameter types is pointer to VLA at block scope
 * o Array of VLA at block scope
 * o VLA of VLA at block scope
 */
#include <stdio.h>

void test0(int n)
{
  printf("test0 called\n");
  
  double a[n * n];  // VLA at block scope
  for (int i = 0 ; i != n * n ; ++i)
    a[i] = i * n + i;

  for (double* p = &a[0] ; p != &a[n * n] ; ++p)
    printf("%f\n", *p);
}

void test1(int n)
{
  printf("test1 called\n");
  float (*p)[n + 10];  // pointer to VLA at block scope
  ++n;
  printf("n = %d\n", n);  
  float a[(n+2) * 2];
  p = &a;

  for (int i = 0 ; i != sizeof *p/sizeof (*p)[0] ; ++i)
    printf("%f\n", (*p)[i] = n + i);
}

void test2(int n)
{
  printf("test2 called\n");
  typedef char ARRAY[(n - 5)*2];
  ARRAY* f();  // Function returning pointer to VLA at block scope
  ARRAY* p = f();
  for (int i = 0 ; i != sizeof *p ; ++ i)
    printf("%c", (*p)[i]);
  printf("\n");
}

typedef char X[];
X* f()
{
  return &"abcdefghijklmnopqrstuvwxyz";
}

void test3(int n)
{
  printf("test3 called\n");
  void g(int (*)[n]); // Function whose parameter types is pointer to VLA at block scope
  int a[n];
  g(&a);

  for (int i = 0 ; i != n ; ++i)
    printf("%d\n", a[i]);
}

int N;
void g(int (*p)[N])
{
  int* begin = &(*p)[0];
  int* end = &(*p)[N];
  for ( int* p = begin ; p != end ; ++p)
    *p = end - p;
}

void test4(int n)
{
  printf("test4 called\n");
  double a[5][n + 3];  // Array of VLA at block scope
  for (int i = 0 ; i != 5 ; ++i) {
    for (int j = 0 ; j != n + 3; ++j)
      a[i][j] = i + j;
  }

  for (int i = 0 ; i != 5 ; ++i) {
    for (int j = 0 ; j != n + 3; ++j)
      printf("a[%d][%d] = %f\n", i, j, a[i][j]);
  }
}

void test5(int n)
{
  printf("test5 called\n");
  float a[n + 5][n * 2];  // VLA of VLA at block scope
  int N = n + 5;
  int M = n * 2;
  for (int i = 0 ; i != N ; ++i) {
    for (int j = 0 ; j != M ; ++j)
      a[i][j] = 10 * i + j;
  }
    
  for (int i = 0 ; i != N ; ++i) {
    for (int j = 0 ; j != M ; ++j)
      printf("a[%d][%d] = %f\n", i, j, a[i][j]);
  }
}

int main()
{
  test0(3);
  test1(4);
  test2(10);
  test3(N = 5);
  test4(3);
  test5(2);
  return 0;
}
