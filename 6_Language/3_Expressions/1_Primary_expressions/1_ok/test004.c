#include <stdio.h>

/* primary-expression used outside function. */
int a;

int b = sizeof a;

int c = 'c';

int d = 1LL;

int e = 2.0F;

const char* f = "howdy";

void test00(void)
{
  printf("`test00' called\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = '%c'\n", c);
  printf("d = %d\n", d);
  printf("e = %d\n", e);
  printf("f = \"%s\"\n", f);
}

/* primary-expression used in case label */
void ff(int n)
{
  switch ( n ){
  case sizeof n:
    printf("case sizeof n:\n");
    break;
  case sizeof "hello world":
    printf("case sizeof \"hello world\":\n");
    break;
  case sizeof 1.0:
    printf("case sizeof 1.0\":\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

void test01(void)
{
  ff(sizeof(int));
  ff(sizeof "hello world");
  ff(sizeof(double));
}

int main(void)
{
  test00();
  test01();
  return 0;
}
