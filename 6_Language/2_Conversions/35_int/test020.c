#include <stdio.h>


int x = 0x12345678;
int y = 0x56789abc;
int z = 0x9abcdef0;

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = 0x9abcdef0def0;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
