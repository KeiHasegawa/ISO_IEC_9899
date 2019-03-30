#include <stdio.h>

unsigned char f(void){ return 0x1234; }

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
