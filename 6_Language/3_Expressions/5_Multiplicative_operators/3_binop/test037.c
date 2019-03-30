#include <stdio.h>

void f(int y, unsigned short int z)
{
  printf("%d | %d = %d\n",y,z,y|z);
}

int main(void)
{
  f(5,3);
  return 0;
}
