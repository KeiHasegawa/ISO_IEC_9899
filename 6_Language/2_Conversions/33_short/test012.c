#include <stdio.h>


short int x = 0x1234;
short int y = 0x5678;
short int z = 0x9abc;
int a = 0x12345678;

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = a;
  printf("x = %d\n",x);
  printf("y = %x\n",y);
  printf("z = %d\n",z);
  return 0;
}
