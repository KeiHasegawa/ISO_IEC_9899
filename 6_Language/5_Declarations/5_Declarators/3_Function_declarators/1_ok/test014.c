/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

int (*apfi[3])(int *x, int *y);

void f(void)
{
  for ( int i = 0 ; i < sizeof apfi/sizeof apfi[0] ; ++i ){
    int x, y;
    int z = apfi[i](&x,&y);
    printf("%d %d %d\n", x, y, z);
  }
}

int test000(int* a, int* b)
{
  printf("`test000' called\n");
  *a = 1;
  *b = 2;
  return 3;
}

int test001(int* a, int* b)
{
  printf("`test001' called\n");
  *a = 4;
  *b = 5;
  return 6;
}

int test002(int* a, int* b)
{
  printf("`test002' called\n");
  *a = 7;
  *b = 8;
  return 9;
}

int main(void)
{
  apfi[0] = test000;
  apfi[1] = test001;
  apfi[2] = test002;
  f();
  return 0;
}
