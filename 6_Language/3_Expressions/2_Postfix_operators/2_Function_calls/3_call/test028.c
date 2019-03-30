#include <stdio.h>

int f(int a, int b, int c)
{
  return a * b + c;
}

int main(void)
{
  printf("%d\n",f(15,3,-7));
  return 0;
}
