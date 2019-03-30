#include <stdio.h>

int main(void)
{
  char x;
  long long int y;

  y = -128;
  x = y;
  printf("x = %d\n",x);

  y = 127;
  x = y;
  printf("x = %d\n",x);

  y = -256;
  x = y;
  printf("x = %d\n",x);

  y = 255;
  x = y;
  printf("x = %d\n",x);

  y = -2147483648;
  x = y;
  printf("x = %d\n",x);

  y = 2147483647;
  x = y;
  printf("x = %d\n",x);

  y = 0x123456789abcdef0;
  x = y;
  printf("x = %x\n",x);

  y = 0x9abcdef012345678;
  x = y;
  printf("x = %x\n",x);

  return 0;
}
