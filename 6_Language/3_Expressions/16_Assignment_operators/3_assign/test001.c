#include <stdio.h>

char x = 'a';
char y = 'b';
char z = 'c';


int main()
{
  char c = 'B';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = c;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
