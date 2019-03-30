#include <stdio.h>

int main(void)
{
  int *x, y;
  x = &y;
  *x = 1234;
  printf("y = %d\n",y);
  return 0;
}
