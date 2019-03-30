/*
 * Check flexible array member of ISO sample works well.
 */
#include <stdio.h>
#include <stdlib.h>

struct s { int n; double d[]; };

struct ss { int n; double d[1]; };

void test000(void)
{
  int a = sizeof(struct s);
  struct s x;
  int b = (char*)&x.d - (char*)&x;
  struct ss y;
  int c = (char*)&y.d - (char*)&y;
  if ( a == b && b == c )
    printf("ok\n");
  else
    printf("%d, %d, %d\n", a, b, c);
}

void print(struct s* p)
{
  for ( int i = 0 ; i < p->n ; ++i )
    printf(" %f", p->d[i]);
  printf("\n");
}

void test001(void)
{
  struct s *s1;
  struct s *s2;
  s1 = malloc(sizeof (struct s) + 64);
  s2 = malloc(sizeof (struct s) + 46);
  if ( !s1 || !s2 ){
    printf("malloc returns 0\n");
    return;
  }
  s1->n = 8;
  for ( int i = 0 ; i < s1->n ; ++i )
    s1->d[i] = i;
  s2->n = 5;
  for ( int i = 0 ; i < s2->n ; ++i )
    s2->d[i] = -i;
  print(s1);
  print(s2);
}

int main(void)
{
  test000();
  test001();
  return 0;
}
