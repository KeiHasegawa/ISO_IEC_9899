#include <stdio.h>


void* x = (void*)0x12345678;
void* y = (void*)0x56789abc;
void* z = (void*)0x9abcdef0;

int main()
{
  unsigned long int a = 510;
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  y = (void*)a;
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  return 0;
}
