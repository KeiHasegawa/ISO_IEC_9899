#include <stdio.h>

char x = 'a';
char y = 'b';
char z = 'c';


int main()
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  x = 'X';
  z = 'Z';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
