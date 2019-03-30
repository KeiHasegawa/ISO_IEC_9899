#include <stdio.h>


unsigned int f(float a)
{
  return a;
}

int main(void)
{
  printf("return value : %d\n",f(1234.5678));
  return 0;
}
