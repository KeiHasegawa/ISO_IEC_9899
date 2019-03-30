#include <stdio.h>


signed char x = 'a';
signed char y = 'b';
signed char z = 'c';

int main()
{
  float a = 127.5;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
