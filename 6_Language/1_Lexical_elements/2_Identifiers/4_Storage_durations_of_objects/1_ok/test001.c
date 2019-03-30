/*
 * automatic storage duration
 */
#include <stdio.h>

void f(void)
{
  goto Label;
  {
    int a = 123;  /* `a' has automatic storage duration. because
                     `a' has no linkage, and not specified `static'
                     storage-class specifier.
                   */
    int b;
  Label:
    b = a + 456;
    if ( a + 456 == b )
      printf("ok\n");
    else
      printf("error\n");
  }
}

int main(void)
{
  f();
  return 0;
}
