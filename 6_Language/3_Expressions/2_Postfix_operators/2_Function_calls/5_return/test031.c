/*
 * Check if function call works well, whose return type is incomplete type.
 */
#include <stdio.h>
#include <string.h>

union U;

union U f(void);

union U {
  int i;
  char c[1024];
};

void swap(char* a, char* b)
{
  char t = *a;
  *a = *b;
  *b = t;
}

int main(void)
{
  union U u = f();
  printf("u.c = %s\n", u.c);

  int n = 1;
  if ( *(char*)&n )
    swap(&u.c[0], &u.c[3]), swap(&u.c[1], &u.c[2]);
  printf("u.i = 0x%x\n", u.i);
  return 0;
}

union U f(void)
{
  union U r;
  strcpy(&r.c[0], "abc");
  return r;
}
