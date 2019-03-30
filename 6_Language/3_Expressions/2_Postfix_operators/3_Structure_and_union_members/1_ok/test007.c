/*
 * Check if member operator works well outside function.
 */
#include <stdio.h>

struct S {
  int a;
  long double b;
  char c[5];
};

struct S s;
int offset_a = (char*)&s.a - (char*)&s;
int offset_b = (char*)&s.b - (char*)&s;
int offset_c = (char*)&s.c - (char*)&s;

void test00(void)
{
  printf("`test00' called\n");
  printf("%d %Lf \"%s\"\n", s.a, s.b, s.c);
  *(int*)((char*)&s + offset_a) = 1;
  *(long double*)((char*)&s + offset_b) = 2.0;
  char* p = (char*)&s + offset_c;
  p[0] = 'a';
  p[1] = 'b';
  p[2] = 'c';
  printf("%d %Lf \"%s\"\n", s.a, s.b, s.c);
}

struct S* ps = &s;

int a = sizeof ps->a;
int c = sizeof ps->c;

void test01(void)
{
  printf("`test01' called\n");
  printf("%d %d\n", a, c);
}

int main(void)
{
  test00();
  test01();
  return 0;
}
