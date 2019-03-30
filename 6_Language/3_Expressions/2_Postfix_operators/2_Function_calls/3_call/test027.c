#include <stdio.h>

int f(int a, int b)
{
  return a + b;
}

int main(void)
{
  printf("%d\n",f(123,456));
  return 0;
}
