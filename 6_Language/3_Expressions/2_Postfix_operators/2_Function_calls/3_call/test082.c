#include <stdio.h>

char r = -1;

unsigned int f(void)
{
  return r;
}

int main(void)
{
  printf("return value : %d\n",f());
  return 0;
}
