/*
 * o Check if function call is available,
 *   where function parameter contains
 *     pointer to structure,
 *     structure
 *     pointer to void.
 */
#include <stdio.h>

struct T {
  int a;
  int b;
};

struct S;

int f(double, const struct T, const int*, void*); 

int main(void)
{
  struct T t = { 1, 2 };
  int n = 1;
  int m = f(3,t,&n,&t);
  printf("n = %d, m = %d\n", n, m);
  printf("t.a = %d, t.b = %d\n", t.a, t.b);
  return 0;
}

void g(struct T*);
void h(int*);

int f(double d, const struct T t, const int* p, void* q) 
{
  printf("f(double, const struct T, const int*, void*) called\n");
  printf("d = %f\n", d);
  printf("t.a = %d, t.b = %d\n", t.a, t.b);
  printf("*p = %d\n", *p);
  g(q);
  h(0);
  h((int*)p);
  return 4;
}

void g(struct T* p)
{
  printf("g(struct T*) called\n");
  printf("p->a = %d, p->b = %d\n", p->a, p->b);
  p->a += 5;
  p->b += 6;
}

void h(int* p)
{
  printf("h(int*) called\n");
  if ( p )
    printf("*p = %d\n", *p = 7);
}
