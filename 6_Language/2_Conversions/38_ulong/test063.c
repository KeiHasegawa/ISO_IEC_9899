#include <stdio.h>


int main()
{
  unsigned long int x = 0x12345678;
  unsigned long int y = 0x56789abc;
  unsigned long int z = 0x0abcdef0;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = 32768.5;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  return 0;
}
