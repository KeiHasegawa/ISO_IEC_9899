#include <stdio.h>


int main()
{
  unsigned long long int x = 0x123456789abcdef0;
  unsigned long long int y = 0x56789abcdef01234;
  unsigned long long int z = 0x9abcdef012345678;
  int a = 0x12345678;
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  y = a;
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  return 0;
}
