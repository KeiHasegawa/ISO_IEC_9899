#include <stdio.h>


float x = -3.25;
float y = 0.5;
float z = 1.125;

int main()
{
  unsigned long int a = 510;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
