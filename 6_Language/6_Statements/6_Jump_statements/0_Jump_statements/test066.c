#include <stdio.h>

int main(void)
{
  long long int x, y;

  x = -1;
  y = -2;

  if ( x < y )
    printf("error\n");
  else
    printf("ok\n");
  printf("x = %lld y = %lld\n",x,y);

  x = 0x123456789abcdef0;
  y = 0x123456789abcdef1;

  if ( x < y )
    printf("ok\n");
  else
    printf("error\n");
  printf("x = 0x%llx y = 0x%llx\n",x,y);

  x = 0x123456789abcdef0;
  y = 0x123456789abcdef0;

  if ( x < y )
    printf("error\n");
  else
    printf("ok\n");
  printf("x = 0x%llx y = 0x%llx\n",x,y);
  
  return 0;
}
