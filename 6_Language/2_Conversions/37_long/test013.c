#include <stdio.h>


long int x = 0x12345678;
long int y = 0x56789abc;
long int z = 0x0abcdef0;

int main()
{
  int a = 0x12345678;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = a;
  printf("x = %ld\n",x);
  printf("y = %lx\n",y);
  printf("z = %ld\n",z);
  return 0;
}
