#include <stdio.h>

float f()
{
  return 7.8F;
}

int main()
{
  float x = 1.2F;
  float y = 3.4F;
  float z = 5.6F;

  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = f();
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
