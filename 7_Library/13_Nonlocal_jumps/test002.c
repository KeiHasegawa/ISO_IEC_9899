/*
 *                main()
 *
 *          f()            g()
 *           ^             ^
 *           |             |
 *         longjmp       longjmp
 *           |             |
 *           +-----h()-----+
 */
#include <stdio.h>
#include <setjmp.h>

void f(jmp_buf);
void g(jmp_buf);
void h(jmp_buf, jmp_buf, int);

int main()
{
  int n = 3;
  jmp_buf x;
  f(x);
  printf("after f(x);\n");
  jmp_buf y;
  g(y);
  printf("after g(y);\n");
  h(x, y, --n);
  printf("after h(x, y, --n); 1\n");
  h(x, y, --n);
  printf("after h(x, y, --n); 2\n");
  return 0;
}

void f(jmp_buf x)
{
  printf("`f' called\n");
  int r = setjmp(x);
  printf("f:r = %d\n", r);
}

void g(jmp_buf x)
{
  printf("`g' called\n");
  int r = setjmp(x);
  printf("g:r = %d\n", r);
}

void h(jmp_buf x, jmp_buf y, int n)
{
  printf("`h' called with %d\n", n);
  switch (n) {
  case 2:
    longjmp(x, 3);
    printf("longjmp(x, 3);\n");
    break;
  case 1:
    longjmp(y, 4);
    printf("longjmp(y, 4);\n");
    break;
  default:
    break;
  }
}
