#include <stdio.h>


float a = 65535.5F;

int main()
{
  unsigned long int x = 0x12345678;
  unsigned long int y = 0x56789abc;
  unsigned long int z = 0x0abcdef0;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = 65535.5F;
  z = a;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  return 0;
}
