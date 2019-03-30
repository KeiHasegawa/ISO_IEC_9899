#include <stdio.h>

int main(void)
{
  float *x, y;
  x = &y;
  *x = 1.234;
  printf("y = %f\n",y);
  return 0;
}
