#include <stdio.h>

int y;
int* x = &y;

int main(void)
{
  if ( x )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
