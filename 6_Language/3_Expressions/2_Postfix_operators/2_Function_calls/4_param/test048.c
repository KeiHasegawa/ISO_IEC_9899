#include <stdio.h>

#define ARRAY_SIZE 1024

struct T {
  int a[ARRAY_SIZE];
};

void f(struct T t)
{
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i ){
    if ( i != t.a[i] ){
      printf("error: t.a[%d] != %d\n",i,i);
      return;
    }
  }
  printf("ok\n");
}

int main(void)
{
  struct T t;
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i )
    t.a[i] = i;
  f(t);
  return 0;
}
