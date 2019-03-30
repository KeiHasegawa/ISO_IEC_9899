/*
 * Check `[*]' parameter type works well.
 */
#include <stdio.h>

void test000(int [*]);
void test001(int a[*]);
void test002(int [*][*]);
void test003(int a[*][*]);

int array[3][3] = {
  { 0, 1, 2 },
  { 3, 4, 5 },
  { 6, 7, 8 },
};

int main(void)
{
  test000(&array[0][0]);
  test001(&array[1][0]);
  test002(&array[2]);
  test003(array);
  return 0;
}

void test000(int* p)
{
  printf("`test000' called\n");
  for ( int i = 0 ; i < 3 ; ++i)
    printf(" %d", p[i]);
  printf("\n");
}

void test001(int a[*])
{
  printf("`test001' called\n");
  for ( int i = 0 ; i < 3 ; ++i)
    printf(" %d", a[i]);
  printf("\n");
}

void test002(int (*p)[*])
{
  printf("`test002' called\n");
  int (*pa)[3] = p;
  for ( int i = 0 ; i < 3 ; ++i)
    printf(" %d", (*pa)[i]);
  printf("\n");
}

void test003(int a[*][*])
{
  printf("`test003' called\n");
  int (*pa)[3] = a;
  for ( int i = 0 ; i < 3 ; ++i){
    for ( int j = 0 ; j < 3 ; ++j )
      printf(" %d", pa[i][j]);
    printf("\n");
  }
}
