#include <stdio.h>


int main()
{
  char x = 'a';
  char y = 'b';
  char z = 'c';
  long long int a = -3;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
