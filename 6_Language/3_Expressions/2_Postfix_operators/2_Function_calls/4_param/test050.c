#include <stdio.h>

#define ARRAY_SIZE 308    /* SPU test magic number */

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

void g(struct T x, struct T y)
{
  f(x);
  f(y);
}

int main(void)
{
  struct T t;
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i )
    t.a[i] = i;
  g(t,t);
  return 0;
}
