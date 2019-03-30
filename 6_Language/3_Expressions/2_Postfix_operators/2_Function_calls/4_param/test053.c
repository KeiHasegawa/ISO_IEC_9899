/*
 * Check if a function which has incomplete type parameter works well.
 */
#include <stdio.h>

struct S;

extern struct S a;  // ok

struct S f(struct S);  // of cause ok

struct S {
  int a;
  char c[1024];
};

int main(void)
{
  f(a);
  struct S s = { 3, "ok? or not." };
  s = f(s);
  printf("s.a = %d\n", s.a);
  for ( int i = 0 ; i != sizeof s.c ; ++i )
    printf("s.c[%d] = %d\n", i, s.c[i]);
  return 0;
}

struct S f(struct S s)
{
  printf("s.a = %d\n", s.a);
  printf("s.c = %s\n", s.c);
  --s.a;
  for ( char* p = &s.c[0] ; p != &s.c[sizeof(s.c)] ; ++p )
    ++*p;
  return s;
}

struct S a = { 7777, "dosdos" };
