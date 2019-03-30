/*
 * Check if label name has function scope.
 */
#include <stdio.h>

void test00(int n)
{
 Label:
  printf(" %d", n);
  {
    if ( --n )
      goto Label;
  }
  printf("\n");
}

void test01(int n)
{
  {
  Label:
    printf(" %d", n);
  }
  if ( ++n != 3 )
    goto Label;
  printf("\n");
}

int main(void)
{
  test00(3);
  test01(0);
  return 0;
}

