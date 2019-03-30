#include <stdio.h>

unsigned char x = 'a';
unsigned char y = 'b';
unsigned char z = 'c';


int main()
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  z = x;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
