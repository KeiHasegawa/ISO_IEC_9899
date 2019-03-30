#include <stdio.h>

unsigned short int f(void){ return 0x9abcdef0; }

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
