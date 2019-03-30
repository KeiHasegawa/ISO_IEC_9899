#include <stdio.h>

int a[20];
int* b = &a[-1];

int main(void)
{
  if ( ++b == a )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}

