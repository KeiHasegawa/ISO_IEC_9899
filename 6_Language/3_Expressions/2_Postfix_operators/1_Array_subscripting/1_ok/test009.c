/*
 * Check if subscripting operator works well outside function.
 */
#include <stdio.h>

int array[] = { 0, 1, 2, 3 };
int* begin = &array[0];
int* end = &array[sizeof array/sizeof array[0]];

void test00(void)
{
  printf("`test00' called\n");
  for ( int* p = begin ; p != end ; ++p )
    printf(" %d", *p);
  printf("\n");
  printf("end - begin = %ld\n", end - begin);
}

int main(void)
{
  test00();
  return 0;
}
