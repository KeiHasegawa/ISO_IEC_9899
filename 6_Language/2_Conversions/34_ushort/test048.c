#include <stdio.h>


unsigned short int x = 0x1234;
unsigned short int y = 0x5678;
unsigned short int z = 0x9abc;
int* a = (int*)0x1234;

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = (unsigned short int)a;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
