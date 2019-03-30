#include <stdio.h>

void f(float x)
{
  printf("x = %f\n",x);
}

int main()
{
  f(1.2F);
  f(3.4F);
  f(5.6F);
  return 0;
}
