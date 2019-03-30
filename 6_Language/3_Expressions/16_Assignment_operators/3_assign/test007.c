#include <stdio.h>

unsigned char x = 'a';
unsigned char y = 'b';
unsigned char z = 'c';


void f(unsigned char c)
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = c;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
}

int main()
{
  f('X');
  return 0;
}
