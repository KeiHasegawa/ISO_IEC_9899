#include <stdio.h>


int main()
{
  float x = -3.25;
  float y = 0.5;
  float z = 1.125;
  unsigned int a = 5678;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
