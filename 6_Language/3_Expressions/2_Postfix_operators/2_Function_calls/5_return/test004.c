#include <stdio.h>

short int x = -1;
short int y = 1;
short int z = -2;

short int f()
{
  return 5;
}

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = f();
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
