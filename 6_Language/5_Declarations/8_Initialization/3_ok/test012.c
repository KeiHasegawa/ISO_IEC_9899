#include <stdio.h>

int a[20];
int* b = a;


int main(void)
{
  if ( a == b )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
