#include <stdio.h>

enum BOOL { f=0, t=1 };

struct A {
  enum BOOL b:1;
};

struct A a;

void g() {
  a.b = t;
  if (a.b == t)
    printf("ok\n");
  else
    printf("error\n");
}

int main()
{
  g();
  return 0;
}
