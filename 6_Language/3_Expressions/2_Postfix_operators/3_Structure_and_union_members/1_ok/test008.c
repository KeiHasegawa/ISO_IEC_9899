/*
 * Check if member operator works well in constant-expression
 */
#include <stdio.h>

struct S {
  int a;
  int b;
};

struct S s;

void test00(int n)
{
  printf("`test00' called with %d\n", n);
  switch ( n ){
  case (char*)&s.a - (char*)&s.b:
    printf("(char*)&s.a - (char*)&s.b:\n");
    break;
  case (char*)&s.a - (char*)&s:
    printf("(char*)&s.a - (char*)&s:\n");
    break;
  case (char*)&s.b - (char*)&s:
    printf("(char*)&s.b - (char*)&s:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

void test01(int n)
{
  struct S* ps;

  printf("`test01' called with %d\n", n);
  switch ( n ){
  case sizeof ps->a:
    printf("sizeof ps->a:\n");
    break;
  case sizeof ((char)ps->b):
    printf("sizeof ((char)ps->b):\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  test00((char*)&s.a - (char*)&s.b);
  test00((char*)&s.a - (char*)&s);
  test00((char*)&s.b - (char*)&s);

  test01(1);
  test01(sizeof(int));
  return 0;
}
