#include <stdio.h>

void f(unsigned short int usi)
{
  printf("0x%x\n",usi);
}

int main(void)
{
  f(-1);
  return 0;
}
