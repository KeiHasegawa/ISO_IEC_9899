#include <stdio.h>

union U {
  unsigned char x;
  int i;
} u = { -1 };

int main(void)
{
  int*y;
  y = (int*)&u.x;
  printf("*y = %d\n",*y);
  return 0;
}
