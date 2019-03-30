#include <stdio.h>

unsigned int y = 0xffffffff;
int z = 2;

int main(void)
{
  printf("0x%x / %d = 0x%x\n",y,z,y/z); 
  return 0;
}
