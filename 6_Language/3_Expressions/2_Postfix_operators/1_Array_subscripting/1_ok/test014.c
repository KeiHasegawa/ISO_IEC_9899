#include <stdio.h>

struct S {
  int i;
  char c[1024];
  double d;
};

struct T {
  char cc[3];
  struct S s;
  char ccc[5];
};

struct T array[10];

void g(char*, char*, char*);

void f(int i)
{
  g(array[i].cc, array[i].s.c, array[i].ccc);
}

int main()
{
  array[3].cc[0] = 'a';
  array[3].cc[1] = 'b';
  array[3].cc[2] = '\0';
  array[3].s.c[0] = 'c';
  array[3].s.c[1] = 'd';
  array[3].s.c[2] = 'e';
  array[3].s.c[3] = 'f';
  array[3].s.c[4] = 'g';
  array[3].s.c[5] = '\0';
  array[3].ccc[0] = 'h';
  array[3].ccc[1] = 'i';
  array[3].ccc[2] = 'j';
  array[3].ccc[3] = 'k';
  array[3].ccc[4] = '\0';
  f(3);
  return 0;
}

void g(char* s, char* t, char* u)
{
  printf("%s %s %s\n", s, t, u);
}

