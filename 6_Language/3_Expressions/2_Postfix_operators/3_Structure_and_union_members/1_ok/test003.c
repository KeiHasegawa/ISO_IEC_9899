/*
 * Check if member reference of member referenced expression is
 * recognized.
 */
#include <stdio.h>

union {
  struct {
    int alltypes;
  } n;
  struct {
    int type;
    int intnode;
  } ni;
  struct {
    int type;
    double doublenode;
  } nf;
} u;


void f(void)
{
  u.nf.type = 1;
  u.nf.doublenode = -0.5;
}

void g(void)
{
  u.ni.type = 0;
  u.ni.intnode = 5;
}

void h(void)
{
  switch ( u.n.alltypes ){
  case 0:
    printf("type is int\n");
    printf("u.ni.intnode = %d\n", u.ni.intnode);
    break;
  case 1:
    printf("type is double\n");
    printf("u.nf.doublenode = %f\n", u.nf.doublenode);
    break;
  }
}

int main(void)
{
  f();
  h();
  g();
  h();
  return 0;
}
