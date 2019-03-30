#include <stdio.h>

long long int x = 0x1122334455667788;
long long int y = 0x99aabbccddeeff00;
long long int z = -1;


int main()
{
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %lld\n",z);
  y = 1LL;
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %lld\n",z);
  return 0;
}
