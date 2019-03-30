#include <stdio.h>

void f(short int si)
{
  printf("%d\n",si);
}

int main(void)
{
  f(5.678);
  return 0;
}
