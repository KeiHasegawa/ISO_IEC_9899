#include <stdio.h>

int main(void)
{
  long long int a;
  long long int *p;
  p = &a;
  *p = 0x123456789abcdef0;
  printf("a = %llx\n",a);
  return 0;
}
