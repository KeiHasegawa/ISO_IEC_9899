#include <stdio.h>

int y = 0xc5;
int z = 0x53;

int main(void)
{
  printf("0x%x & 0x%x = 0x%x\n",y,z,y&z); 
  return 0;
}
