#include <stdio.h>

int main(void)
{
  long long int x;
  x = 0x7fffffff;
  printf("x = %lld\n",x);
  x = -1;
  printf("x = %lld\n",x);
  x = 0x80000000;
  printf("x = %lld\n",x);
  return 0;
}
