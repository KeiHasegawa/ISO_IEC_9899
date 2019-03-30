/*
 * Check if postfix increment or decrement operator is recognized.
 */
#include <stdio.h>

void test00(char* p, int i, int j)
{
  printf("`test00' called\n");
  p[i]++;
  p[j]--;
}

void test01(void)
{
  printf("`test01' called\n");
  char a[] = "hello world";
  printf("%s\n", a);
  a[3]++;
  a[1]--;
  printf("%s\n", a);
}

struct S {
  int a;
  char b;
};

void test02(struct S* ps)
{
  printf("`test02' called\n");
  printf("%d '%c'\n", ps->a++, ps->b--);
}

void test03(void)
{
  printf("`test03' called\n");
  struct S s = { -1, 'x' };
  printf("%d '%c'\n", s.a++, s.b--);
  printf("%d '%c'\n", s.a, s.b);
}

void test04(int* p, long long int* q)
{
  printf("`test04' called\n");
  printf("%d %lld\n", (*p)++, (*q)--);
}

struct T {
  unsigned int a : 3;
  unsigned int b : 4;
};

void test05(struct T* pt)
{
  printf("`test05' called\n");
  printf("%d %d\n", pt->a++, pt->b--);
}

void test06(void)
{
  struct T t = { 6, 0 };
  printf("`test06' called\n");
  printf("%d %d\n", t.a, t.b);
  t.a++;
  t.b--;
  printf("%d %d\n", t.a, t.b);
}

int main(void)
{
  {
    char a[] = "hello world";
    test00(a,2,4);
    printf("%s\n", a);
  }
  test01();
  {
    struct S s = { 1, 'y' };
    test02(&s);
    printf("%d '%c'\n", s.a, s.b);
  }
  test03();
  {
    int x = 5;
    long long int y = -5;
    test04(&x,&y);
    printf("%d %lld\n", x, y);
  }
  {
    struct T t = { 7, 8 };
    test05(&t);
    printf("%d %d\n", t.a, t.b);
  }
  test06();
  return 0;
}
