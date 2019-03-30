/*
 * Check assignment opeartor work well in sub expression.
 */
#include <stdio.h>

int array[] = { 0, 1, 2, 3, 4 };

void test000(void)
{
  printf("`test000' called\n");
  for ( int i = 0 ; i < sizeof array/sizeof (array[0] = 100) ; ++i )
    printf(" %d", array[i]);
  printf("\n");
  printf("array[0] = %d\n", array[0]);
  array[3] *= 10;
  for ( int i = 0 ; i < sizeof array/sizeof (array[0] = 100) ; ++i )
    printf(" %d", array[i]);
  printf("\n");
}

struct S {
  char a[10];
};

void test001(struct S* ps, int i, char y)
{
  printf("`test001' called\n");
  printf("'%c'\n", ps->a[i]);
  ps->a[i] = y;
  printf("'%c'\n", ps->a[i]);
}

int main(void)
{
  test000();
  test001(&(struct S){ "abcdefghi" },3,'X');
  return 0;
}
