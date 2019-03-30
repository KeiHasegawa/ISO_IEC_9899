#include <stdio.h>

long double x = 1.2L;
long double y = 3.4L;
long double z = 5.6L;

long double f()
{
  return 7.8L;
}

int main()
{
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = f();
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  return 0;
}
