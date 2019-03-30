#include <stdio.h>


unsigned long int a = 510;

int main()
{
  unsigned char x = 'a';
  unsigned char y = 'b';
  unsigned char z = 'c';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
