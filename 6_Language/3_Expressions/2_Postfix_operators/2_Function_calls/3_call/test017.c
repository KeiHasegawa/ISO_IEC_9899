#include <stdio.h>

void f(unsigned int ui)
{
  printf("0x%x\n",ui);
}

int main(void)
{
  f(0x9abcdef0);
  return 0;
}
