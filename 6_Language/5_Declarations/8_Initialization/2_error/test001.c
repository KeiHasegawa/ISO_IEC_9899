/*
 * o Check if incomplete type initialization is error.
 * o Check if variable length array initialization is error.
 */

struct S s = { 1, 2, 3 };

void f(int n)
{
  struct S s = { 1, 2, 3 };
  int a[n] = { 1, 2, 3 };
}
