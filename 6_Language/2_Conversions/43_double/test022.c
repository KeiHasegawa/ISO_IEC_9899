#include <stdio.h>


int main()
{
  double x = -3.25;
  double y = 0.5;
  double z = 1.125;
  unsigned int a = 0x9abcdef0;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
