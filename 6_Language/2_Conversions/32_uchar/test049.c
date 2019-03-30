#include <stdio.h>


unsigned char x = 'a';
unsigned char y = 'b';
unsigned char z = 'c';

int main()
{
  int* a = (int*)0x1234;
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = (unsigned char)a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
