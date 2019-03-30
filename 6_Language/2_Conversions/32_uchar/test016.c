#include <stdio.h>


int main()
{
  unsigned char x = 'a';
  unsigned char y = 'b';
  unsigned char z = 'c';
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
