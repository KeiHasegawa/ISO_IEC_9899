#include <stdio.h>

int main(void)
{
  void f(double d);
  f(1234.5678);
  return 0;
}

void f(double d)
{
  printf("%d\n",(int)d);
}
