#include <stdio.h>


void f(unsigned long long int x, unsigned long long int y, unsigned long long int z)
{
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  y = 0x0022446688aacceeULL;
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
}

int main()
{
  f(0x1122334455667788,0x99aabbccddeeff00,-1);
  return 0;
}
