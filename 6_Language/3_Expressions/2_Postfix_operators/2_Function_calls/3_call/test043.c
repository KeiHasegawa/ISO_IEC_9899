#include <stdio.h>

short int f(void){ return 12345678.0; }

double d = 12345678.0;

short int g(void){ return d; }

int main(void)
{
  printf("f return value : 0x%x\n",f());
  printf("g return value : 0x%x\n",g());
  return 0;
}
