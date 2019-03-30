#include <stdio.h>

void test00(void)
{
  printf("`test00' called\n");
  int \u0061 = 1;
  int \u0062\U00000063 = 2;
  int \u0064\u0065 = 3;
  printf("a = %d\n", a);
  printf("bc = %d\n", bc);
  printf("de = %d\n", de);
}

void test01(void)
{
  printf("`test01' called\n");
  int \U00000061 = 1;
  int \U00000062\u0063 = 2;
  int \U00000064\U00000065 = 3;
  printf("a = %d\n", a);
  printf("bc = %d\n", bc);
  printf("de = %d\n", de);
}

int main(void)
{
  test00();
  test01();
  return 0;
}
