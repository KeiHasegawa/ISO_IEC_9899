#include <stdio.h>

#define ARRAY_SIZE 1024

struct T {
  int a[ARRAY_SIZE];
};

struct T f(void)
{
  struct T t;
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i )
    t.a[i] = i;
  return t;
}

int main(void)
{
  struct T t = f();
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i ){
    if ( i != t.a[i] ){
      printf("error: t.a[%d] != %d\n",i,i);
      return i;
    }
  }
  printf("ok\n");
  return 0;
}
