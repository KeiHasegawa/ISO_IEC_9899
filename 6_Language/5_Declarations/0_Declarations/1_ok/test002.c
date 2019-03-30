/*
 * All declarations in the same scope that refer to the same object or
 * function shall specify compatible types.
 */
#include <stdio.h>

extern int test_000;

int test_000 = 123; /* ok */

extern int test_000; /* ok */

void f(int a[10]);
void f(int [10]); /* ok */
void f(int a[20]); /* ok */
void f(int [20]); /* ok */
void f(int* a); /* ok */
void f(int*); /* ok */
void f(int a[]); /* ok */
void f(int []); /* ok */

int main(void)
{
  printf("test_000 = %d\n", test_000);
  int n = 456;
  f(&n);
  return 0;
}

void f(int b[]) /* ok */
{
  printf("`f' called\n");
  printf("*b = %d\n", *b);
}
