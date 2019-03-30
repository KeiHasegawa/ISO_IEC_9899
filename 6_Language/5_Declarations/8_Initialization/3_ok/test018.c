#include <stdio.h>

int* a = (int*)&a;

int* b = (int*)(int)&b;

int main(void)
{
  if ( (int)a == *a )
    printf("ok\n");
  else
    printf("error\n");

  if ( (int)b == *b )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
