#include <stdio.h>

struct S {
  int m;
  const int ci;
};

struct S s = { 1, 2 };

int main()
{
  printf("s = { %d, %d }\n", s.m, s.ci);
  ++s.m;
  printf("s = { %d, %d }\n", s.m, s.ci);
  return 0;
}
