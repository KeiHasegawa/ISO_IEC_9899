#include <stdio.h>

unsigned int y = 0x80000000;
int z = 15;

int main(void)
{
  printf("0x%x >> %d = 0x%x\n",y,z,y>>z); 
  return 0;
}
