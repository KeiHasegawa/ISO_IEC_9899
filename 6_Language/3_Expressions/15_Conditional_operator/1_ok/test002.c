/*
 * One of the following shall hold for the second and third operands:
 * - ...
 * - both operands have compatible structure or union types;
 * - ...
 */

#include <stdio.h>

struct S {
  int a;
  char* b;
};

void test000(int x, struct S* ps, int i, int j)
{
  printf("`test000' called\n");
  printf("%d\n", (x ? ps[i] : ps[j]).a);
  printf("\"%s\"\n", (x ? ps[i] : ps[j]).b);
}

union U {
  int a;
  float b;
};

union U u;

void test001(int x, const union U* pu, int i, int j)
{
  printf("`test001' called\n");
  printf("0x%08x\n", (x ? u : pu[i]).a);
  printf("%f\n", (x ? u : pu[j]).b);
}

struct T;
extern struct T y, z;

struct T {
  int a;
};

void test002(int x)
{
  printf("`test002' called\n");
  struct T r = x ? y : z;
  printf("%d\n", r.a);
}

int main(void)
{
  {
    struct S s[] = {
      { 0, "programming" },
      { 1, "languages" },
      { 2, "--" },
      { 3, "C" },
    };
    test000(0,&s[0],0,1);
    test000(1,&s[0],2,3);
  }
  {
    union U uu[2];
    uu[0].a = 1;
    uu[1].b = 2;
    test001(0,&uu[0],0,1);
    u.b = 1;
    test001(1,(union U*)0,0,0);
  }
  {
    test002(0);
    test002(1);
  }
  return 0;
}

struct T y = { 2 };
struct T z = { 3 };
