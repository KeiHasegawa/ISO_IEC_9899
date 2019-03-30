#include <stdio.h>

int a;

int main(void)
{
  extern int a;
  a = 1234;
  printf("a = %d\n",a);
  return 0;
}
