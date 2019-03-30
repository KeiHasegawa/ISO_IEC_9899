#include <stdio.h>
#include <setjmp.h>

#define LAST 10

void f(jmp_buf, int);

int main()
{
  printf("`main' called\n");
  jmp_buf buf;
  int r = setjmp(buf);
  printf("main:r = %d\n", r);
  if (r != LAST)
    f(buf, 3);
  return 0;
}

void g(jmp_buf, jmp_buf, int);

void f(jmp_buf x, int n)
{
  printf("`f' called with %d\n", n);
  jmp_buf y;
  int r = setjmp(y);
  printf("f:r = %d\n", r);
  if (r != LAST)
    g(x, y, --n);
}

void g(jmp_buf x, jmp_buf y, int n)
{
  printf("`g' called with %d\n", n);
  if (n)
    longjmp(y, n);
  else
    longjmp(x, LAST);
}

