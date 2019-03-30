#include <stdio.h>

short int x = 1234;
short int y = 5678;
short int z = -1;


int main()
{
  short int si = 0x9abc;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = si;
  printf("x = %d\n",x);
  printf("y = %x\n",y);
  printf("z = %d\n",z);
  return 0;
}
