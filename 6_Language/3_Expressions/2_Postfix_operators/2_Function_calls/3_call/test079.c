#include <stdio.h>


double r = 3.14;

short int f(void)
{
  return r;
}

int main(void)
{
  printf("return value : %d\n",f());
  return 0;
}
