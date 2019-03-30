/*
 * Check if member of array subspring is recognized.
 */
#include <stdio.h>

extern struct T* p;

struct T {
  int a;
};

int main(void)
{
  printf("p[3].a = %d\n", p[3].a = 1);
  return 0;
}

struct T a[10];

struct T* p = &a[0];
