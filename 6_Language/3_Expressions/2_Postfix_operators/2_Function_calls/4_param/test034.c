#include <stdio.h>

void f(float x)
{
  printf("x = %f\n",x);
}

int main()
{
  float x = 1.2;
  float y = 3.4;
  float z = 5.6;

  f(x);
  f(y);
  f(z);
  return 0;
}
