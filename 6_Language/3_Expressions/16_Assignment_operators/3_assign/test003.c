#include <stdio.h>


char a = 'A';

int main()
{
  char x = 'a';
  char y = 'b';
  char z = 'c';

  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  x = a;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
