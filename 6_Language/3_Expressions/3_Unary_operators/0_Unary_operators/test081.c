#include <stdio.h>

int main(void)
{
  long double y;
  long double* p;
  y = 1.5;
  printf("y = %Lf\n",y);
  p = &y;
  *p = 0.25;
  printf("y = %Lf\n",y);
  return 0;
}
