#include <stdio.h>

void f(long int li)
{
  printf("%ld\n",li);
}

int main(void)
{
  f(1+2+3+4+5+6+7+8+9+10);
  return 0;
}
