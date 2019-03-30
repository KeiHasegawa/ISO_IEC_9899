/*
 * Check if compound literal is recognized.
 */
#include <stdio.h>

/* int */
void test00(int x)
{
  printf("`test00' called\n");
  int n = (int){ x };
  printf("n = %d\n", n);
  int* p = &(int){ x };
  printf("*p = %d\n", *p);
}

/* pointer to int */
void test01(int x)
{
  printf("`test01' called\n");
  int* p = (int*){ &x };
  printf("*p = %d\n", *p);
  int* q = (int*){ (int*)1 };
  printf("q = %d\n", (int)q);
}

/* array */
void test02(void)
{
  printf("`test02' called\n");
  int* p = (int [3]){ 1, 2, 3 };
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", p[i]);
  printf("\n");
  int (*pa)[] = &(int [3]){ 4, 5, 6 };
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", (*pa)[i]);
  printf("\n");
}

/* incomplete array */
void test03(void)
{
  printf("`test03' called\n");
  int* p = (int []){ 4, 5, 6 };
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", p[i]);
  printf("\n");
  int (*pa)[] = &(int []){ 7, 8, 9 };
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", (*pa)[i]);
  printf("\n");
}

/* struct */
void test04(void)
{
  printf("`test04' called\n");
  struct S { int a; char b; };
  struct S s = (struct S){ 7, 'i' };
  printf("s.a = %d, s.b = '%c'\n", s.a, s.b);
  s = (struct S){ -1, 'j' };
  printf("s.a = %d, s.b = '%c'\n", s.a, s.b);
  struct S* ps = &(struct S){ 9, 'k' };
  printf("ps->a = %d, ps->b = '%c'\n", ps->a, ps->b);
}

int main(void)
{
  test00(0);
  test01(1);
  test02();
  test03();
  test04();
  return 0;
}
