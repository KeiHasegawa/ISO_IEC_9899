#include <stdio.h>

int main(void)
{
  int *x, y;
  y = 1234;
  x = &y;
  *x = 5678;
  printf("y = %d\n",y);
  return 0;
}
