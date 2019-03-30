#include <stdio.h>


int main()
{
  short int a = 0x5678;
  short int b = 0x9abc;
  short int c = 0xdef0;
  short int x = 0x1234;

  printf("a = %x\n",a);
  printf("b = %x\n",b);
  printf("c = %x\n",c);
  c = x;
  printf("a = %x\n",a);
  printf("b = %x\n",b);
  printf("c = %x\n",c);
  return 0;
}
