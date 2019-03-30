/*
 * Check if for statement works well.
 */
#include <stdio.h>

void test000(int* p)
{
  printf("`test000' called\n");
  for ( ; ; ){
    if ( --*p )
      printf("*p = %d\n", *p);
    else
      break;
  }
}

void test001(char* p)
{
  printf("`test001' called\n");
  for ( ; ; ++p ){
    if ( *p )
      printf("%c", *p);
    else
      break;
  }
  printf("\n");
}

void test010(double* p)
{
  printf("`test010' called\n");
  for ( ; *p ; ){
    printf("%f\n", *p);
    --*p;
  }
}

struct S {
  int a;
};

struct S test100(struct S* x, struct S* y)
{
  printf("`test100' called\n");
  for ( *x = *y ; ; )
    break;
  for ( struct S s = *x ; ; )
    return s;
}


int main(void)
{
  int n = 3;
  test000(&n);
  test001("linux");
  double d = 5;
  test010(&d);
  struct S x = { 7 };
  struct S y = { 9 };
  struct S z = test100(&x,&y);
  printf("%d %d %d\n", x.a, y.a, z.a);
  return 0;
}
