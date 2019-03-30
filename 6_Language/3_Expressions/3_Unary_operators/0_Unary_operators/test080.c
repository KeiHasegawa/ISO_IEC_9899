#include <stdio.h>

int main(void)
{
  long double y;
  long double* p;
  y = 1.5;
  printf("y = %Lf\n",y);
  p = &y;
  printf("*p = %Lf\n",*p);
  return 0;
}
