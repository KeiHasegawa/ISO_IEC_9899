#include <stdio.h>

unsigned long long int x = 0x1122334455667788;
unsigned long long int y = 0x99aabbccddeeff00;
unsigned long long int z = -1;
unsigned long long int a = 0x0022446688aaccee;


int main()
{
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  y = a;
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  return 0;
}
