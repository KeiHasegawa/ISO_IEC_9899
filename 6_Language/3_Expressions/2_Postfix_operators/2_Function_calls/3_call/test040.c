#include <stdio.h>

char f(void){ return 'c'; }

int main(void)
{
  printf("return value : %c\n",f());
  return 0;
}
