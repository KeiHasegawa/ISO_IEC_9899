#include <stdio.h>

typedef int a;

static a;  // Empty declaration

static a b;  // Same with static int b;

int main()
{
  printf("b = %d\n", b = 123);
  return 0;
}

