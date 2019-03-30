#include <stdio.h>

int main(void)
{
  unsigned long long int x, y;

  x = 0x123456789abcdef0;
  y = 0x12349abc5678def0;
  if ( x == y )
    printf("x = %llx y = %llx x == y\n",x,y);
  else
    printf("x = %llx y = %llx x != y\n",x,y);

  x = 0x123456789abcdef0;
  y = 0x123456785678def0;
  if ( x == y )
    printf("x = %llx y = %llx x == y\n",x,y);
  else
    printf("x = %llx y = %llx x != y\n",x,y);

  x = 0x123456789abcdef0;
  y = 0x123456789abcdef0;
  if ( x == y )
    printf("x = %llx y = %llx x == y\n",x,y);
  else
    printf("x = %llx y = %llx x != y\n",x,y);

  return 0;
}
