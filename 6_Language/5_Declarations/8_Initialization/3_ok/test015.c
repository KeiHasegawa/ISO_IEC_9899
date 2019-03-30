#include <stdio.h>

int* b = (int*)0x1234;


int main(void)
{
  printf("%x\n", (int)b);
  return 0;
}
