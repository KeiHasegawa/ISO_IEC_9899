#include <stdio.h>


unsigned long int x = 0x12345678;
unsigned long int y = 0x56789abc;
unsigned long int z = 0x0abcdef0;
int* a = (int*)0x1234;

int main()
{
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = (unsigned long int)a;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  return 0;
}
