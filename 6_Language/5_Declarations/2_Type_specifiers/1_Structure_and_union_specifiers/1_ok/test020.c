#include <stdio.h>

typedef int OUT;

typedef float IN;

typedef char M[30];

struct S {
  M m;
  OUT (*pf)(IN);
};

void g(struct S* ps, IN x)
{
  printf("%s\n", ps->m);
  printf("%d\n", ps->pf(x));
}

OUT h1(IN y)
{
  printf("h1 called\n");
  return y + 5;
}

OUT h2(IN z)
{
  printf("h2 called\n");
  return z * 10;
}

int main()
{
  struct S s1 = { "Programming", h1 };
  struct S s2 = { "Language", h2 };
  g(&s1, 4);
  g(&s2, 1);
  return 0;
}

