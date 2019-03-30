#include <stdio.h>


char r = 'b';

char f(void)
{
  return r;
}

int main(void)
{
  printf("return value : '%c'\n",f());
  return 0;
}
