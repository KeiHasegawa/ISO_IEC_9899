/*
 * Check if ISO sample works well.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int n;
  float * restrict v;
} vector;

vector new_vector(int n)
{
  vector t;
  t.n = n;
  t.v = malloc(n * sizeof (float));
  return t;
}

void f(vector* p, vector* q)
{
  int n = p->n < q->n ? p->n : q->n;
  for ( int i = 0 ; i < n ; ++i)
    p->v[i] = q->v[i];
}

void test000(void)
{
  vector a = new_vector(3);
  vector b = new_vector(10);
  for ( int i = 0 ; i < a.n ; ++i )
    a.v[i] = i;
  for ( int i = 0 ; i < a.n ; ++i )
    printf(" %f", a.v[i]);
  printf("\n");
  for ( int i = 0 ; i < b.n ; ++i )
    b.v[i] = -i;
  for ( int i = 0 ; i < b.n ; ++i )
    printf(" %f", b.v[i]);
  printf("\n");
  f(&a,&b);
  for ( int i = 0 ; i < a.n ; ++i )
    printf(" %f", a.v[i]);
  printf("\n");
  for ( int i = 0 ; i < b.n ; ++i )
    printf(" %f", b.v[i]);
  printf("\n");
}

int main(void)
{
  test000();
  return 0;
}
