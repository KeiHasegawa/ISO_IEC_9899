#include <stdio.h>


long double a = -0.5;

int main()
{
  short int x = 0x1234;
  short int y = 0x5678;
  short int z = 0x9abc;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = a;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
