#include <stdio.h>

int main(void)
{
  unsigned long long int x, y;

  x = 0x8000000000000000;
  y = 0x7fffffffffffffff;
  if ( x < y )
    printf("x = %llx y = %llx x < y\n",x,y);
  else
    printf("x = %llx y = %llx x >= y\n",x,y);

  x = 0x8000000000000000;
  y = 0x8000000000000000;
  if ( x < y )
    printf("x = %llx y = %llx x < y\n",x,y);
  else
    printf("x = %llx y = %llx x >= y\n",x,y);

  x = 0x8000000000000000;
  y = 0x8000000000000001;
  if ( x < y )
    printf("x = %llx y = %llx x < y\n",x,y);
  else
    printf("x = %llx y = %llx x >= y\n",x,y);

  return 0;
}
