/*
 * Check if consecutive operator -> works well.
 */
#include <stdio.h>

struct S {
  int i;
  char c[10];
  double d;
};

struct T {
  struct S* x;
  struct S* y;
  struct S* z;
};

extern struct T* ptr;

int main()
{
  printf("ptr->x->i = %d\n", ptr->x->i);
  printf("ptr->x->c = %s\n", ptr->x->c);
  printf("ptr->x->d = %f\n", ptr->x->d);

  printf("ptr->y->i = %d\n", ptr->y->i);
  printf("ptr->y->c = %s\n", ptr->y->c);
  printf("ptr->y->d = %f\n", ptr->y->d);

  printf("ptr->z->i = %d\n", ptr->z->i);
  printf("ptr->z->c = %s\n", ptr->z->c);
  printf("ptr->z->d = %f\n", ptr->z->d);
  
  return 0;
}

struct S s1 = { 1, "abc", 2.0 };
struct S s2 = { 3, "defghijk", 4.0 };
struct S s3 = { 5, "lmnop", 6.0 };


struct T t = {
  &s1, &s2, &s3
};

struct T* ptr = &t;
