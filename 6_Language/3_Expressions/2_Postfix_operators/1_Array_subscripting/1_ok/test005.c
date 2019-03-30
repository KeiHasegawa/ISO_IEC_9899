/*
 * Check if address of some variable is recognized.
 */
#include <stdio.h>

int a[10];
int x = &a[0] - &a[1];
struct S {
  int b;
  int c;
} s;
int y = &s.b - &s.c;

void f(int n)
{
  int b[2];
  struct T {
    int d;
    int e;
  } t;
  switch ( n ){
  case &a[0] - &a[2]:
    printf("case &a[0] - &a[2]:\n");
    break;
  case &b[2] - &b[0]:
    printf("case &b[2] - &b[0]:\n");
    break;
  case &s.b - &s.c:
    printf("case &s.b - &s.c:\n");
    break;
  case &t.e - &t.d:
    printf("case &t.e - &t.d:\n");
    break;
  }
}

int main(void)
{
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  f(-2);
  f(2);
  f(-1);
  f(1);
  return 0;
}
