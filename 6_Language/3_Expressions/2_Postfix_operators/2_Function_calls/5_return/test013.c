#include <stdio.h>

long int f()
{
  return -4;
}

int main()
{
  long int x = 1;
  long int y = 2;
  long int z = 3;

  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = f();
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  return 0;
}
