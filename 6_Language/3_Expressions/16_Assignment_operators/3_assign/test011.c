#include <stdio.h>


void f(unsigned char x, unsigned char y, unsigned char z)
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = 'B';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
}

int main()
{
  f('a','b','c');
  return 0;
}
