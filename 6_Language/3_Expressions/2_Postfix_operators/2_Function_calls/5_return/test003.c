#include <stdio.h>

unsigned char f()
{
  return 'X';
}

int main()
{
  unsigned char x = 'a';
  unsigned char y = 'b';
  unsigned char z = 'c';

  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = f();
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
