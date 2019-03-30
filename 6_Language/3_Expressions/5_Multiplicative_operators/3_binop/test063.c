#include <stdio.h>

float y = 12.34;
float z = 5.678;

int main(void)
{
  float x;
  x = y - z;
  printf("%f - %f = %f\n",y,z,x); 
  return 0;
}
