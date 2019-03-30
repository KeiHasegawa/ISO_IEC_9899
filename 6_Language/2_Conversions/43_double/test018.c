#include <stdio.h>


double x = -3.25;
double y = 0.5;
double z = 1.125;
unsigned int a = 0x9abcdef0;

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
