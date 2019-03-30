/*
 * ISO sample
 */
#include <stdio.h>

#include <setjmp.h>
jmp_buf buf;
void g(int n);
void h(int n);
int n = 6;

void fill_test(int* p, int n);

void f(void)
{
  printf("`f' called\n");
  int x[n]; // valid: f is not terminated
  fill_test(x, n);
  int r = setjmp(buf);
  printf("r = %d\n", r);
  if (!r)
    g(n);
}

void g(int n)
{
  printf("`g' called with %d\n", n);
  int a[n]; // a may remain allocated
  fill_test(a, n);
  h(n);
}

void h(int n)
{
  printf("`h' called with %d\n", n);
  int b[n]; // b may remain allocated
  fill_test(b, n);
  longjmp(buf, 2); // might cause memory loss
}

int main()
{
  f();
  return 0;
}

void fill_test(int* p, int n)
{
  while (n--)
    printf(" %d", *p = n);
  printf("\n");
}

