#include <stdio.h>

unsigned char f(void)
{
  return 'b';
}

int main(void)
{
  printf("return value : '%c'\n",f());
  return 0;
}
