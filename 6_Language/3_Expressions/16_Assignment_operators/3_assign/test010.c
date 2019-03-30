#include <stdio.h>


void f(unsigned char x, unsigned char y, unsigned char z, unsigned char a)
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
}

int main()
{
  f('a','b','c','A');
  return 0;
}
