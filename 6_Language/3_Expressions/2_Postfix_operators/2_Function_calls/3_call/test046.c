#include <stdio.h>

unsigned int f(float a){ return a; }

int main(void)
{
  printf("return value : %d\n",f(456.789));
  return 0;
}
