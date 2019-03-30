#include <stdio.h>

int main(void)
{
  long long int x, y;
  y = 1;
  x = ~y;
  printf("~%llx = %llx\n",y,x);
  return 0;
}
