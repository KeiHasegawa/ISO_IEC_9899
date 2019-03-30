#include <stdio.h>

unsigned long long int f()
{
  return 0x1133557799bbddff;
}

int main()
{
  unsigned long long int x = 0x1122334455667788;
  unsigned long long int y = 0x99aabbccddeeff00;
  unsigned long long int z = 0x22446688aaccee00;

  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  y = f();
  printf("x = %llx\n",x);
  printf("y = %llx\n",y);
  printf("z = %llx\n",z);
  return 0;
}
