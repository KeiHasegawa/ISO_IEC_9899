/*
 * Check if abstract declarator works well.
 * Especially, pointer to array whose dimension is specified and
 * to lookup symbol table is required.
 */
#include <stdio.h>

typedef int T;

void f(int (*)[sizeof(T)]);
       
int main()
{
  int a[sizeof(T)];
  f(&a);
  for (int* p = &a[0] ; p != &a[sizeof(T)] ; ++p)
    printf(" %d", *p);
  printf("\n");
  return 0;
}

void f(int (*p)[sizeof(T)])
{
  int* begin = &(*p)[0];
  int* end = begin + sizeof *p/sizeof (*p)[0];
  for (; begin != end ; ++begin)
    *begin = begin - end;
}
