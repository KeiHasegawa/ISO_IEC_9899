/*
 * Check if conversion from `float' to `short int' works well.
 */
#include <stdio.h>

float a = 65535.5F;

int main()
{
  short int x = 0x1234;
  short int y = 0x5678;
  short int z = 0x9abc;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  y = 65535.5F;
  z = a;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
