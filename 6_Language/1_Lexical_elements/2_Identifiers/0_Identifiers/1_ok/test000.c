/*
 * Check declarations are recognized.
 *
 * declaration-specifiers is reduced to
 *
 * void
 * char
 * float
 * double
 * short
 * long
 * signed
 * unsigned
 * struct
 * typedef
 */
#include <stdio.h>

void vo(void){ printf("vo called\n"); }
char c;
int i;
float f;
double d;
short sh;
long l;
signed si;
unsigned u;
struct s {
  int m;
};
struct s ss;
typedef int t;
t tt;

int main(void)
{
  vo();
  printf("c = '%c'\n", c = 'c');
  printf("i = %d\n", i = 1);
  printf("f = %f\n", f = 2.5);
  printf("d = %f\n", d = -0.5);
  printf("sh = %d\n", sh = 2);
  printf("l = %ld\n", l = 3);
  printf("si = %d\n", si = 4);
  printf("u = %u\n", u = 5);
  printf("ss.m = %d\n", ss.m = 6);
  printf("tt = %d\n", tt = 7);
  return 0;
}
