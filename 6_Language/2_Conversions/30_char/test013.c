#include <stdio.h>


char x = 'a';
char y = 'b';
char z = 'c';

int main()
{
  int a = 0x12345678;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = a;
  printf("x = '%c'\n",x);
  printf("y = %x\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
