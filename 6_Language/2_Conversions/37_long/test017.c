#include <stdio.h>


int main()
{
  long int x = 0x12345678;
  long int y = 0x56789abc;
  long int z = 0x0abcdef0;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = 0x12345678;
  printf("x = %ld\n",x);
  printf("y = %lx\n",y);
  printf("z = %ld\n",z);
  return 0;
}
