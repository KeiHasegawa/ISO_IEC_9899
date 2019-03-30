#include <stdio.h>


int main(void)
{
  unsigned int a;
  char b;
  a = 0xff;
  b = -1;
  if ( a != b )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
