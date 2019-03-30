#include <stdio.h>


char f(int n)
{
  return n;
}

int main(void)
{
  printf("return value : '%c'\n",f('c'));
  return 0;
}
