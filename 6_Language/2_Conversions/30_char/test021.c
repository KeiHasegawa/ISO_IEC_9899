#include <stdio.h>


unsigned int a = 0x9abcdef0;

int main()
{
  char x = 'a';
  char y = 'b';
  char z = 'c';
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
