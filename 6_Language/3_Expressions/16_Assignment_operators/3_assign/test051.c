#include <stdio.h>


long long int a = -2;

int main()
{
  long long int x = 0x1122334455667788;
  long long int y = 0x99aabbccddeeff00;
  long long int z = -1;

  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %lld\n",z);
  y = a;
  printf("x = %llx\n",x);
  printf("y = %lld\n",y);
  printf("z = %lld\n",z);
  return 0;
}
