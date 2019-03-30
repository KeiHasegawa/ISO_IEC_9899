#include <stdio.h>

unsigned long long int x = 0x1122334455667788;
unsigned long long int y = 0x99aabbccddeeff00;
unsigned long long int z = -1;


int main()
{
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  y = 0x0022446688aacceeULL;
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  return 0;
}
