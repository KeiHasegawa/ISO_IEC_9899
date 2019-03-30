#include <stdio.h>


unsigned int x = 0x12345678;
unsigned int y = 0x56789abc;
unsigned int z = 0x9abcdef0;

long double a = 65535.5L;

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  x = a;
  y = 65535.5L;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
