#include <stdio.h>


long int f(void)
{
  return 0xf01l;
}

int main(void)
{
  printf("return value : 0x%lx\n",f());
  return 0;
}
