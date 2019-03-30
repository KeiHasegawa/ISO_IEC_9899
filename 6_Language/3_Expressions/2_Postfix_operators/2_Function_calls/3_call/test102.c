#include <stdio.h>


unsigned long int f(void)
{
  return 0x234lu;
}

int main(void)
{
  printf("return value : 0x%lx\n",f());
  return 0;
}
