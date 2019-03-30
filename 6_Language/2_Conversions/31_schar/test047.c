#include <stdio.h>


int main()
{
  signed char x = 'a';
  signed char y = 'b';
  signed char z = 'c';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = 127ULL;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
