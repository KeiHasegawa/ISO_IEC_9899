/*
 * Check if charcter array initialization is recognized,
 * where '\0' isn't added to initial value.
 */
#include <stdio.h>

char s[] = "abc", t[3] = "abc";

extern void f(const char*, int);

int main(void)
{
  char u[] = "abc", v[3] = "abc";
  f(s, sizeof s);
  f(t, sizeof t);
  f(u, sizeof u);
  f(v, sizeof v);
  return 0;
}

void f(const char* p, int n)
{
  for ( int i = 0 ; i < n ; ++i ){
    if ( p[i] )
      printf(" %c", p[i]);
    else
      printf(" \\0");
  }
  printf("\n");
}
