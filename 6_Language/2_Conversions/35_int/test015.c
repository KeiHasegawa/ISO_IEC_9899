#include <stdio.h>


unsigned short int a = 0x123456785678;

int main()
{
  int x = 0x12345678;
  int y = 0x56789abc;
  int z = 0x9abcdef0;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = a;
  printf("x = %d\n",x);
  printf("y = %x\n",y);
  printf("z = %d\n",z);
  return 0;
}
