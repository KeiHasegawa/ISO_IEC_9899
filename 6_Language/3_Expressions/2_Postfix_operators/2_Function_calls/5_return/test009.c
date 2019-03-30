#include <stdio.h>

int f()
{
  return 4;
}

int main()
{
  int x = -1;
  int y = 2;
  int z = -3;

  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = f();
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
