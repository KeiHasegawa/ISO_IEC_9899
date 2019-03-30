#include <stdio.h>


char x = 'a';
char y = 'b';
char z = 'c';

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
