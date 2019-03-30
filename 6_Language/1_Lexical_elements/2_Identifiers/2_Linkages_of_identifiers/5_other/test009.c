#include <stdio.h>

int f(void){ return 2; }

int main(void)
{
  int x = f();

  switch ( x ){
  case -1:
    printf("error\n");
    break;
  case +2:
    printf("ok\n");
    break;
  default:
    printf("error\n");
    break;
  }
  return 0;
}
