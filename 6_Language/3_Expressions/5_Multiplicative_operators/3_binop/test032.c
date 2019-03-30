#include <stdio.h>

void f(int y, double z)
{
  printf("%d %% %d = %d\n",y,(int)z,y%(int)z);
}

int main(void)
{
  f(-10,3.14);
  return 0;
}
