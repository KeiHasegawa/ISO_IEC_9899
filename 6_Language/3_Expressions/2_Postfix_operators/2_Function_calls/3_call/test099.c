#include <stdio.h>


int f(void)
{
  return 0x9ab;
}

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
