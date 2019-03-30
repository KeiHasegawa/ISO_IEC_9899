#include <stdio.h>

void f(int* x)
{
  printf("x = %x\n", (int)x);
}

int main()
{
  int* x = (int*)0x1234;
  int* y = (int*)0x5678;
  int* z = (int*)0x9abc;

  f(x);
  f(y);
  f(z);
  return 0;
}
