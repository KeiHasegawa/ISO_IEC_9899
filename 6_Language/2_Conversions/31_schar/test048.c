#include <stdio.h>


signed char x = 'a';
signed char y = 'b';
signed char z = 'c';
int* a = (int*)0x1234;

int main()
{
  printf("x = '%c'\n",x);
  printf("y = '%c'\n",y);
  printf("z = '%c'\n",z);
  y = (signed char)a;
  printf("x = '%c'\n",x);
  printf("y = %d\n",y);
  printf("z = '%c'\n",z);
  return 0;
}
