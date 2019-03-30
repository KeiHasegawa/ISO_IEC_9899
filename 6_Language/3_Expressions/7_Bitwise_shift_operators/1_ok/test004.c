/*
 * Check shift operator works well in sub expression.
 */
#include <stdio.h>

int array[] = { 10, 11, 12, 13 };

void test00(void)
{
  printf("`test00' called\n");
  printf("%d %d\n", array[1] << 1, array[3] >> 1);
}

void test01(int i, int j)
{
  printf("`test01' called\n");
  printf("%d %d\n", array[i] << (array[i+1]-10), array[j] >> (array[j]-11));
}

int main(void)
{
  test00();
  test01(0,2);
  return 0;
}

