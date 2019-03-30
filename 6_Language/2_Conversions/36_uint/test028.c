#include <stdio.h>


int main()
{
 unsigned int x = 0x12345678;
 unsigned int y = 0x56789abc;
 unsigned int z = 0x9abcdef0;
  long int a = 257;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = a;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
