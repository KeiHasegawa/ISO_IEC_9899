/*
 * Check operator '==' works well for pointer type operand.
 */
#include <stdio.h>

void test00(const char* a, volatile char* b)
{
  printf("`test00' called\n");
  printf("a == b = %d\n", a == b);
}

void test01(void)
{
  printf("test01' called\n");
  int a[10];
  printf("&a[1] == &a[0] = %d\n", &a[1] == &a[0]);
  printf("&a[1] == &a[1] = %d\n", &a[1] == &a[1]);
  printf("&a[1] == &a[2] = %d\n", &a[1] == &a[2]);
}

int array[10];

void test02(void)
{
  printf("test02' called\n");
  printf("&array[1] == &array[0] = %d\n", &array[1] == &array[0]);
  printf("&array[1] == &array[1] = %d\n", &array[1] == &array[1]);
  printf("&array[1] == &array[2] = %d\n", &array[1] == &array[2]);
}

struct S* ps;
struct S {
  int a;
};
struct S s;

void test03(void)
{
  printf("`test03' called\n");
  printf("ps == &s = %d\n", ps == &s);
}

void test04(char* p, int* q, void* v)
{
  printf("`test04' called\n");
  printf("p == v = %d\n", p == v);
  printf("q == v = %d\n", q == v);
}

void test05(char* p, int* q)
{
  printf("`test05' called\n");
  printf("p == 0 = %d\n", p == 0);
  printf("0x0 == p = %d\n", 0x0 == p);
  printf("p == 0U = %d\n", p == 0U);
  printf("0L == q = %d\n", 0L == q);
  printf("q == 0LL = %d\n", q == 0LL);
  printf("0UL == q = %d\n", 0UL == q);
}

int main(void)
{
  {
    char x[10];
    test00(&x[1],&x[0]);
    test00(&x[1],&x[1]);
    test00(&x[1],&x[2]);
  }
  test01();
  test02();
  {
    ps = &s;
    --ps;
    test03();
    ++ps;
    test03();
    ++ps;
    test03();
  }
  {
    char c;
    int i;
    test04(&c,&i,&c);
    test04(&c,&i,&i);
  }
  {
    char c;
    int i;
    test05(&c,0);
    test05(0,&i);
  }
  return 0;
}
