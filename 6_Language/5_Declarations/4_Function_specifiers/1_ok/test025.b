#include <stdio.h>

static inline int f()
{
  static int cnt;
  return cnt++;
}

int main()
{
  printf("f() = %d\n", f());
  printf("f() = %d\n", f());
  printf("f() = %d\n", f());
  printf("f() = %d\n", f());
  return 0;
}
