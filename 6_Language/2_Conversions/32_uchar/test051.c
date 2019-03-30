#include <stdio.h>


int main()
{
  unsigned char x = 'a';
  unsigned char y = 'b';
  unsigned char z = 'c';
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
