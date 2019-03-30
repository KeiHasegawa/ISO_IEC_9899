#include <stdio.h>


int main()
{
  unsigned short int x = 0x1234;
  unsigned short int y = 0x5678;
  unsigned short int z = 0x9abc;
  unsigned long int a = 510;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = a;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
