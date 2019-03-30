#include <stdio.h>

int main(void)
{
  int a, *b;
  b = &a;
  a = 5678;
  printf("a = %d\n",a);
  printf("*b = %d\n",*b);
  *b = 1234;
  printf("a = %d\n",a);
  printf("*b = %d\n",*b);
  return 0;
}
