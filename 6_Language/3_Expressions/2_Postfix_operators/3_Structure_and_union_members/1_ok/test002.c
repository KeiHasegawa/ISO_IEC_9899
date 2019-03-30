/*
 * Check if bit field member refenrence is recognized.
 */
#include <stdio.h>

struct T {
  int a;
  unsigned int b : 3;
  unsigned int c : 2;
  unsigned int d : 1;
};

extern void f(const struct T*);

int main(void)
{
  struct T t = { 1, 2, 3, 4 };
  printf("t.a = %d, t.b = %d, t.c = %d, t.d = %d\n",
	 t.a, t.b, t.c, t.d);
  f(&t);
  return 0;
}

void f(const struct T* pt)
{
  printf("f called\n");
  printf("pt->a = %d, pt->b = %d, pt->c = %d, pt->d = %d\n",
	 pt->a, pt->b, pt->c, pt->d);
}

