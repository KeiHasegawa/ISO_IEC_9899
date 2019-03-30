/*
 * Check compound literal works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case sizeof ((char){1}):
    printf("case sizeof ((char){1}):\n");
    break;
  case sizeof ((char []){'x', 'y', 'z'}):
    printf("sizeof ((char []){'x', 'y', 'z'}):\n");
    break;
  default:
    printf("default:\n");
    break;
  }	      
}

int main(void)
{
  f(sizeof(char));
  f(sizeof(char[3]));
  return 0;
}
