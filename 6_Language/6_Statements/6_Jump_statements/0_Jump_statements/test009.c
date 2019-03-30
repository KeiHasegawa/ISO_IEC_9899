#include <stdio.h>


int main(void)
{
  int a;
  unsigned int b;
  a = -1;
  b = 0xffffffff;
  if ( a == b )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
