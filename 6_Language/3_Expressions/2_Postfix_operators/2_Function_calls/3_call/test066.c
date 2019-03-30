#include <stdio.h>


unsigned long int x = 0x9abcdef0;

void f(char a)
{
  printf("a = 0x%x\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
