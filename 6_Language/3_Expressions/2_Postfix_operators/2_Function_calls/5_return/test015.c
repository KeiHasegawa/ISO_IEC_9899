#include <stdio.h>

unsigned long int f()
{
  return 0xddeeff00;
}

int main()
{
  unsigned long int x = 0x11223344;
  unsigned long int y = 0x55667788;
  unsigned long int z = 0x99aabbcc;

  printf("x = %lx\n",x);
  printf("y = %lx\n",y);
  printf("z = %lx\n",z);
  y = f();
  printf("x = %lx\n",x);
  printf("y = %lx\n",y);
  printf("z = %lx\n",z);
  return 0;
}
