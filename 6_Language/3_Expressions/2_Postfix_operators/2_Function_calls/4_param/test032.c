#include <stdio.h>

void f(int* x)
{
  printf("x = %x\n", (int)x);
}

int main()
{
  f(0);
  f((int*)0x1234);
  f((int*)0x5678);

  return 0;
}
