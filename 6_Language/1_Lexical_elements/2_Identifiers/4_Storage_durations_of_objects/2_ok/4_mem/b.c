#include <stdio.h>

void f(void)
{
  extern int a;
  printf("a = %d\n",a);
  a = 5678;
  printf("a = %d\n",a);
}
