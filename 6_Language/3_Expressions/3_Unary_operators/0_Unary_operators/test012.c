#include <stdio.h>

int main(void)
{
  double *x, y;
  x = &y;
  *x = 5.678;
  printf("y = %lf\n",y);
  return 0;
}
