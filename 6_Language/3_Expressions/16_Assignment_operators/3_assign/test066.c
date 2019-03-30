#include <stdio.h>

float x = 1.5;
float y = -2.25;
float z = 3.75;
float a = -4.5;


int main()
{
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
