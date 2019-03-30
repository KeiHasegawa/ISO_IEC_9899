#include <stdio.h>


int x = 0x12345678;
int y = 0x56789abc;
int z = 0x9abcdef0;
int* a = (int*)0x1234;

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = (int)a;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
