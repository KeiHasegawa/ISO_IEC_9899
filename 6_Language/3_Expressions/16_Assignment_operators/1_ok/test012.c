#include <stdio.h>

int f(char* ap)
{
  int ival = ((sizeof(int) > sizeof(long long) || (sizeof(int) & (sizeof(int) - 1)) != 0) ? **(int**)((ap += sizeof(long long)) - sizeof(long long)) : *(int* )((ap += sizeof(long long)) - sizeof(long long)));
  return ival;
}

union U {
  int i;
  char c[4];
};

int main(void)
{
  union U u = { -5 };
  char* ap = &u.c[0];
  printf("f(ap) = %d\n", f(ap));
  return 0;
}
