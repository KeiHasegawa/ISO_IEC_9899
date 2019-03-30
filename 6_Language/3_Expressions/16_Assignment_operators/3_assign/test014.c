#include <stdio.h>

short int x = 1234;
short int y = 5678;
short int z = -1;


int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = 1111;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
