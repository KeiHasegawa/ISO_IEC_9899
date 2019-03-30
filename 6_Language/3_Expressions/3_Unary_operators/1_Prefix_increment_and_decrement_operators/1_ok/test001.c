/*
 * Check if prefix increment or decrement operator is recognized. 
 * here, operand type is pointer type.
 */
#include <stdio.h>

/* pointer to char */
void test00(char* x)
{
  printf("`test00' called\n");
  printf("%s\n", ++x);
  printf("%s\n", ++x);
  printf("%s\n", --x);
  printf("%s\n", --x);
}

/* poitner to signed char */
void test01(signed char* x)
{
  printf("`test01' called\n");
  printf("%s\n", ++x);
  printf("%s\n", ++x);
  printf("%s\n", --x);
  printf("%s\n", --x);
}

/* pointer to unsigned char */
void test02(unsigned char* x)
{
  printf("`test02' called\n");
  printf("%s\n", ++x);
  printf("%s\n", ++x);
  printf("%s\n", --x);
  printf("%s\n", --x);
}

/* pointer to short int */
void test03(short int* x)
{
  printf("`test03' called\n");
  printf("%d\n", *++x);
  printf("%d\n", *++x);
  printf("%d\n", *--x);
  printf("%d\n", *--x);
}

/* pointer to unsigned short int */
void test04(unsigned short int* x)
{
  printf("`test04' called\n");
  printf("%d\n", *++x);
  printf("%d\n", *++x);
  printf("%d\n", *--x);
  printf("%d\n", *--x);
}

/* pointer to int */
void test05(int* x)
{
  printf("`test05' called\n");
  printf("%d\n", *++x);
  printf("%d\n", *++x);
  printf("%d\n", *--x);
  printf("%d\n", *--x);
}

/* pointer to unsigned int */
void test06(unsigned int* x)
{
  printf("`test06' called\n");
  printf("%d\n", *++x);
  printf("%d\n", *++x);
  printf("%d\n", *--x);
  printf("%d\n", *--x);
}

/* pointer to long int */
void test07(long int* x)
{
  printf("`test07' called\n");
  printf("%ld\n", *++x);
  printf("%ld\n", *++x);
  printf("%ld\n", *--x);
  printf("%ld\n", *--x);
}

/* pointer unsigned long int */
void test08(unsigned long int* x)
{
  printf("`test08' called\n");
  printf("%ld\n", *++x);
  printf("%ld\n", *++x);
  printf("%ld\n", *--x);
  printf("%ld\n", *--x);
}

/* pointer long long int */
void test09(long long int* x)
{
  printf("`test09' called\n");
  printf("%lld\n", *++x);
  printf("%lld\n", *++x);
  printf("%lld\n", *--x);
  printf("%lld\n", *--x);
}

/* pointer to unsigned long long int */
void test10(unsigned long long int* x)
{
  printf("`test10' called\n");
  printf("%lld\n", *++x);
  printf("%lld\n", *++x);
  printf("%lld\n", *--x);
  printf("%lld\n", *--x);
}

/* pointer to float */
void test11(float* x)
{
  printf("`test11' called\n");
  printf("%f\n", *++x);
  printf("%f\n", *++x);
  printf("%f\n", *--x);
  printf("%f\n", *--x);
}

/* pointer to double */
void test12(double* x)
{
  printf("`test12' called\n");
  printf("%f\n", *++x);
  printf("%f\n", *++x);
  printf("%f\n", *--x);
  printf("%f\n", *--x);
}

/* pointer to long double */
void test13(long double* x)
{
  printf("`test13' called\n");
  printf("%Lf\n", *++x);
  printf("%Lf\n", *++x);
  printf("%Lf\n", *--x);
  printf("%Lf\n", *--x);
}

/* pointer to enum */
enum E { a, b, c, d, e, f, g };
void test14(enum E* x)
{
  printf("`test14' called\n");
  printf("%d\n", *++x);
  printf("%d\n", *++x);
  printf("%d\n", *--x);
  printf("%d\n", *--x);
}

/* pointer to array */
void test15(int (*x)[3])
{
  printf("`test15' called\n");
  int* a = *++x;
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  int* b  = *++x;
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", b[i]);
  printf("\n");
  int* c  = *--x;
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", c[i]);
  printf("\n");
  int* d = *--x;
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", d[i]);
  printf("\n");
}

struct S {
  int a;
  int b;
  int c;
};

void test16(struct S* ps)
{
  printf("`test16' called\n");
  struct S* p = ++ps;
  printf(" %d %d %d\n", p->a, p->b, p->c);
  struct S* q = ++ps;
  printf(" %d %d %d\n", q->a, q->b, q->c);
  struct S* r = --ps;
  printf(" %d %d %d\n", r->a, r->b, r->c);
  struct S* s = --ps;
  printf(" %d %d %d\n", s->a, s->b, s->c);
}

int main(void)
{
  {
    char a[] = { 'a', 'b', 'c', 'd', '\0' };
    test00(a);
  }
  {
    signed char a[] = { 'A', 'B', 'C', 'D', '\0' };
    test01(a);
  }
  {
    unsigned char a[] = { 'X', 'Y', 'Z', 'W', '\0' };
    test02(a);
  }
  {
    short int a[] = { 3, 4, 5, 6 };
    test03(a);
  }
  {
    unsigned short int a[] = { -4, -5, -6, -7 };
    test04(a);
  }
  {
    int a[] = { 5, 6, 7, 8 };
    test05(a);
  }
  {
    unsigned int a[] = { -6, -7, -8, -9 };
    test06(a);
  }
  {
    long int a[] = { 7, 8, 9, 10 };
    test07(a);
  }
  {
    unsigned long int a[] = { -8, -9, -10, -11 };
    test08(a);
  }
  {
    long long int a[] = { 9, 10, 11, 12 };
    test09(a);
  }
  {
    unsigned long long int a[] = { -10, -11, -12, -13 };
    test10(a);
  }
  {
    float a[] = { 11, 12, 13, 14 };
    test11(a);
  }
  {
    double a[] = { -12, -13, -14, -15 };
    test12(a);
  }
  {
    long double a[] = { 13, 14, 15, 16 };
    test13(a);
  }
  {
    enum E a[] = { -14, -15, -16, -17 };
    test14(a);
  }
  {
    int a[][3] = {
      { 1, 2, 3 },
      { 4, 5, 6 },
      { 7, 8, 9 },
      { 10, 11, 12 },
    };
    test15(a);
  }
  {
    struct S a[] = {
      { -1, -2, -3 },
      { -4, -5, -6 },
      { -7, -8, -9 },
      { -10, -11, -12 },
    };
    test16(a);
  }
  return 0;
}
