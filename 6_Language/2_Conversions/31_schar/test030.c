#include <stdio.h>


signed char x = 'a';
signed char y = 'b';
signed char z = 'c';
unsigned long int a = 510;

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
