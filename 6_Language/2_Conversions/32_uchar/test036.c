#include <stdio.h>


unsigned char x = 'a';
unsigned char y = 'b';
unsigned char z = 'c';
long long int a = -3;

int main()
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
