#include <stdio.h>

#define ARRAY_SIZE 308    /* SPU test magic number */

struct T {
  int a[ARRAY_SIZE];
};

void g(struct T t)
{
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i ){
    if ( i != t.a[i] ){
      printf("error: t.a[%d] != %d\n",i,i);
      return;
    }
  }
  printf("ok\n");
}

void f(int x, struct T t)
{
  printf("x = %d\n", x);
  g(t);
}

int main(void)
{
  struct T t;
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i )
    t.a[i] = i;
  f(123,t);
  return 0;
}
