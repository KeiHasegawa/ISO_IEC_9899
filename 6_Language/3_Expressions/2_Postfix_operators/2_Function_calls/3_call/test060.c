#include <stdio.h>

unsigned char x = 255;

void f(char a)
{
  printf("a = %d\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
