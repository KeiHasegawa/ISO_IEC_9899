#include <stdio.h>


int main()
{
  char x = 'a';
  char y = 'b';
  char z = 'c';

  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = 'B';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
