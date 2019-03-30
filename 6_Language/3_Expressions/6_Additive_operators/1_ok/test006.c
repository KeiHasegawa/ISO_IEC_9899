/*
 * Check if binary operator `+' or `-' works well in constant-expression.
 */
#include <stdio.h>

int array[10];

void f(int n)
{
  printf("`f' called with %d\n", n);
  char s[10];
  switch ( n ){
  case (int)('\0' + 0.0):
    printf("case (int)('\\0' + 0.0):\n");
    break;
  case (char)(1.5L-0.5F):
    printf("case (char)(1.5L-0.5F):\n");
    break;
  case -(&array[0]-&array[2]):
    printf("case -(&array[0]-&array[2])::\n");
    break;
  case &s[3] - &s[0]:
    printf("case &s[3] - &s[0]:\n");
    break;
  case (&array[0] + 2) - &array[-2]:
    printf("case (&array[0] + 2) - &array[-2]:\n");
    break;
  }
}

int main(void)
{
  f(0);
  f(1);
  f(2);
  f(3);
  f(4);
  return 0;
}
