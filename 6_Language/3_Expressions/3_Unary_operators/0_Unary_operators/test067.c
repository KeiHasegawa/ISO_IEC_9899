#include <stdio.h>

int main(void)
{
  long long int a;
  long long int *p;
  p = &a;
  a = 0x9abcdef012345678;
  printf("*p = %llx\n",*p);
  return 0;
}
