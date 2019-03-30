/*
 * Check if block scope VLA declaration works well.
 * VLA of pointer to function which takes 2 argument. The 2nd argument
 * is pointer to VLA.
 */
#include <stdio.h>

void f(int n)
{
  void (*array[n*3])(int m, int (*)[n*(m+2)]);
  void g0(int m, int (*)[n*(m+2)]);
  void g1(int m, int (*)[n*(m+2)]);
  void g2(int m, int (*)[n*(m+2)]);
  for (int i = 0 ; i != n * 3; ++i ) {
    switch (i % 3) {
    case 0: array[i] = &g0; break;
    case 1: array[i] = &g1; break;
    case 2: array[i] = &g2; break;
    }
  }

  for (int i = 0; i != n * 3 ; ++i) {
    int a[n*(i+2)];
    array[i](i, &a);
  }
}

int main()
{
  f(2);
  return 0;
}

void g0(int m, int (*pa)[2*(m+2)])
{
  printf("g0 called\n");
  for (int i = 0 ; i != 2*(m+2); ++i)
    printf(" %d", (*pa)[i] = i);
  printf("\n");
}

void g1(int m, int (*pa)[2*(m+2)])
{
  printf("g1 called\n");
  for (int i = 0 ; i != 2*(m+2); ++i)
    printf(" %d", (*pa)[i] = -i);
  printf("\n");
}

void g2(int m, int (*pa)[2*(m+2)])
{
  printf("g2 called\n");
  for (int i = 0 ; i != 2*(m+2); ++i)
    printf(" %d", (*pa)[i] = m*i);
  printf("\n");
}

